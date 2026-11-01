"""Fixed-size game tables <-> CSV (used by assets.py).

Each table is a run of fixed-size records. Columns are typed (u8/s8/u16/s16/u32/s32/ptr). A `ptr` column holds a label
from data/rodata_*.s (or `label + 0xK`, or a hex address for code, or 0), so a pointer can be aimed at any other object,
including objects added by other tools. Columns starting with `_` are read-only hints (UI text for a string index) and
are ignored on build. A changed record is written back in place: records keep their size and the row count is fixed.

Field meanings marked (inferred) come from comparing records with what the game shows; rename columns freely in
SPECS, since only the types and order matter to the build.
"""
import os, re, csv, struct
import labels as L
import bfscript as B

ROM = 0x08000000
UI_PTRS = 0x6BCE8

# name, offset, count, record size, [(column, offset, type, ui?)]
SPECS = {
    'areas': (0x8E2E0, 452, 56, [
        ('world', 0, 'u8'), ('area', 1, 'u8'), ('b2', 2, 'u8'), ('b3', 3, 'u8'), ('b4', 4, 'u8'), ('b5', 5, 'u8'),
        ('b6', 6, 'u8'), ('b7', 7, 'u8'), ('w08', 8, 'u32'), ('name', 0xC, 'u32', 'ui'),
        ('p10', 0x10, 'ptr'), ('p14', 0x14, 'ptr'), ('p18', 0x18, 'ptr'), ('p1C', 0x1C, 'ptr'), ('p20', 0x20, 'ptr'),
        ('w24', 0x24, 'u32'), ('w28', 0x28, 'u32'), ('scene', 0x2C, 'ptr'), ('p30', 0x30, 'ptr'), ('p34', 0x34, 'ptr')]),
    'equipment': (0x6F82EC, 162, 44, [
        ('name', 0, 'u16', 'ui'), ('desc', 2, 'u16', 'ui'), ('icon_w', 4, 'u32'), ('icon_h', 8, 'u32'),
        ('icon_oam', 0xC, 'u32'), ('icon', 0x10, 'ptr'), ('slot', 0x14, 'u8'), ('level_plus_50', 0x15, 'u8'),
        ('stat0', 0x16, 's8'), ('stat1', 0x17, 's8'), ('stat2', 0x18, 's8'), ('stat3', 0x19, 's8'),
        ('stat4', 0x1A, 's8'), ('stat5', 0x1B, 's8'), ('w1C', 0x1C, 'u32'), ('price', 0x20, 's32'),
        ('w24', 0x24, 'u32'), ('w28', 0x28, 'u32')]),
    'items': (0x3BD500, 24, 52, [
        ('category', 0, 'u16'), ('name', 2, 'u16', 'ui'), ('name2', 4, 'u16', 'ui'), ('plural', 6, 'u16', 'ui'),
        ('desc', 8, 'u16', 'ui'), ('h0A', 0xA, 'u16'), ('icon_w', 0xC, 'u32'), ('icon_h', 0x10, 'u32'),
        ('icon_oam', 0x14, 'u32'), ('icon', 0x18, 'ptr'), ('icon2_w', 0x1C, 'u32'), ('icon2_h', 0x20, 'u32'),
        ('icon2_oam', 0x24, 'u32'), ('icon2', 0x28, 'ptr'), ('price', 0x2C, 'u32'), ('effect', 0x30, 'ptr')]),
    'enemies': (0x711274, 150, 28, [
        ('exp', 0, 'u32'), ('hp', 4, 'u32'), ('id08', 8, 'u32'), ('level_plus_50', 0xC, 'u8'),
        ('str', 0xD, 'u8'), ('pow', 0xE, 'u8'), ('end', 0xF, 'u8'), ('phys_taken', 0x10, 'u8'), ('ki_taken', 0x11, 'u8'),
        ('b12', 0x12, 'u8'), ('b13', 0x13, 'u8'), ('on_defeat', 0x14, 'ptr'), ('death_script', 0x18, 'ptr')]),
    'spawns': ('list', 'find_spawns', 32, [
        ('w04', 4, 'u32'), ('enemy', 8, 'u32'), ('x', 0xC, 'u16'), ('y', 0xE, 'u16'), ('character', 0x10, 'u32'),
        ('behaviour', 0x14, 'ptr'), ('w18', 0x18, 'u32'), ('ai', 0x1C, 'ptr')]),
    'scouter': (0x74D380, 232, 16, [
        ('name', 0, 'u16', 'ui'), ('desc', 2, 'u16', 'ui'), ('character', 4, 'u32'), ('w08', 8, 'u32'), ('w0C', 0xC, 's32')]),
}
FMT = {'u8': '<B', 's8': '<b', 'u16': '<H', 's16': '<h', 'u32': '<I', 's32': '<i', 'ptr': '<I'}
NOTES = {
    'areas': 'gAreaTable: one row per area. name = UI string index (area name). scene -> record whose first word is the '
             'map (map record + 4). p10-p34: scripts, event lists and actor lists of the area (inferred).',
    'equipment': 'Equipment. slot: 0 body, 1 hands, 2 feet, 3 accessory. level_plus_50: required level + 50 (inferred). '
                 'stat0-5: signed bonuses (STR/POW/END/SPD order inferred). price -1 = not sold.',
    'items': 'Consumables and key items. category 0 = usable, 1 = key item. effect -> bytecode run when used '
             '(assets/scripts/items/*.scr).',
    'enemies': 'Enemy stats (gUnknown_08711274, indexed by spawns.enemy; alphabetical by enemy name). level_plus_50 = level + 50. '
               'str/pow = physical/ki attack, end = defence (both kinds). phys_taken/ki_taken = damage taken, 128 = 100%. '
               'exp is scaled by the player when awarded. death_script -> bytecode run on defeat (item drops: call 0xD8(item, chance, n)), '
               'see assets/scripts/enemies/*.scr. on_defeat = handler object. _names: enemy names from spawns + scouter.',
    'spawns': 'Every enemy placed in an area (1,571 records, found by their spawn function sub_0800FD54). enemy = row of enemies.csv, '
              'x/y = position in map pixels, character = sprite/character id (scouter.csv), behaviour/ai = handler pointers.',
    'scouter': 'Scouter/journal entries: name and description strings plus the character id (index into the '
               'character collision table at 0x086B6BB4).',
}


def u32(d, o): return struct.unpack_from('<I', d, o)[0]


def ui_string(d, i):
    if i >= 1534: return ''
    o = u32(d, UI_PTRS + 4 * i) - ROM; e = o
    while struct.unpack_from('<H', d, e)[0]: e += 2
    return d[o:e].decode('utf-16-le')


def ptr_text(v):
    if v == 0: return '0'
    o = v - ROM
    if 0x54FBC <= o < 0x7B79A4: return L.symbol(o)
    return '0x%08X' % v


def ptr_expr(s):
    """CSV text -> assembly expression for .4byte."""
    s = s.strip()
    return s if s and not re.match(r'^-?(0x[0-9A-Fa-f]+|\d+)$', s) else str(int(s, 0) & 0xFFFFFFFF)


SPAWN_FN = 0x0800FD55          # sub_0800FD54 + 1, first word of every enemy spawn record


def find_spawns(d):
    return [o for o in range(0x54FBC, 0x7B79A4, 4) if u32(d, o) == SPAWN_FN]


def rows_of(d, name):
    off, n, size, cols = SPECS[name]
    if off == 'list': return globals()[n](d), size, cols
    return [off + size * i for i in range(n)], size, cols


def char_names(d):
    """character id -> name, from the scouter table."""
    off, n, size, cols = SPECS['scouter']; out = {}
    for i in range(n):
        nm, ds, ch = struct.unpack_from('<HHI', d, off + size * i)
        out.setdefault(ch, ui_string(d, nm))
    return out


def enemy_names(d):
    cn = char_names(d); out = {}
    for o in find_spawns(d):
        e, ch = u32(d, o + 8), u32(d, o + 0x10)
        if ch in cn: out.setdefault(e, [])
        if ch in cn and cn[ch] not in out[e]: out[e].append(cn[ch])
    return {e: ' / '.join(v) for e, v in out.items()}


def hints(d, name):
    """read-only hint columns: name -> function(row index, record offset) -> text"""
    if name == 'enemies':
        en = enemy_names(d); return {'_names': lambda i, r: en.get(i, '')}
    if name == 'spawns':
        en = enemy_names(d); cn = char_names(d)
        return {'_address': lambda i, r: L.symbol(r), '_enemy': lambda i, r: en.get(u32(d, r + 8), ''),
                '_character': lambda i, r: cn.get(u32(d, r + 0x10), '')}
    return {}


def export(d, name, path):
    recs, size, cols = rows_of(d, name)
    hx = hints(d, name)
    with open(path, 'w', newline='', encoding='utf-8') as f:
        f.write('# %s\n' % NOTES.get(name, ''))
        w = csv.writer(f)
        hdr = ['index'] + list(hx)
        for c in cols:
            hdr.append(c[0])
            if len(c) > 3 and c[3] == 'ui': hdr.append('_' + c[0] + '_text')
        w.writerow(hdr)
        for i, r in enumerate(recs):
            row = [i] + [f(i, r) for f in hx.values()]
            for c in cols:
                v = struct.unpack_from(FMT[c[2]], d, r + c[1])[0]
                row.append(ptr_text(v) if c[2] == 'ptr' else v)
                if len(c) > 3 and c[3] == 'ui': row.append(ui_string(d, v))
            w.writerow(row)


def build(d, name, path, ctx):
    recs, size, cols = rows_of(d, name)
    rows = [r for r in csv.reader(l for l in open(path, encoding='utf-8') if not l.startswith('#'))]
    hdr, rows = rows[0], [r for r in rows[1:] if r]
    if len(rows) != len(recs): raise ValueError('%s: must keep %d rows' % (path, len(recs)))
    ix = {h: i for i, h in enumerate(hdr)}
    for i, row in enumerate(rows):
        r = recs[i]
        orig = d[r:r + size]
        # assemble the record: bytes for numbers, symbolic .4byte for pointers
        parts = []; pos = 0; data = bytearray(orig); syms = {}
        for c in cols:
            v = row[ix[c[0]]]
            if c[2] == 'ptr':
                if ptr_text(u32(orig, c[1])) == v.strip(): continue
                syms[c[1]] = ptr_expr(v)
            else:
                struct.pack_into(FMT[c[2]], data, c[1], int(v, 0))
        if not syms and bytes(data) == orig: continue
        lines = []; p = 0
        for o in sorted(syms):
            if o > p: lines.append('\t.byte %s' % ', '.join(str(b) for b in data[p:o]))
            lines.append('\t.4byte %s' % syms[o]); p = o + 4
        if p < size: lines.append('\t.byte %s' % ', '.join(str(b) for b in data[p:size]))
        ctx.asm(r, r + size, '\n'.join(lines) + '\n', size, '%s%d' % (name, i))


# ------------------------------------------------------------------ item effect scripts
def effect_scripts(d):
    off, n, size, cols = SPECS['items']
    out = []
    for i in range(n):
        p = u32(d, off + size * i + 0x30)
        if p: out.append((i, p - ROM, ui_string(d, struct.unpack_from('<H', d, off + size * i + 2)[0])))
    return out


def death_scripts(d):
    off, n, size, cols = SPECS['enemies']; en = enemy_names(d); seen = set(); out = []
    for i in range(n):
        p = u32(d, off + size * i + 0x18)
        if p and p not in seen:
            seen.add(p); out.append((i, p - ROM, en.get(i, '') or 'enemy%d' % i))
    return out


def export_script(d, start, path, title, names):
    text, end = B.disasm(d, start, names)
    open(path, 'w').write('; %s  (%s, 0x%08X). Bytecode: see tools/scripts/bfscript.py.\n%s'
                          % (title, L.symbol(start), ROM + start, text))
    return end


def build_script(d, a, path, ctx, names):
    code = B.asm(open(path).read(), names)
    if code == d[a['start']:a['end']]: return
    ctx.put(a['start'], a['end'], code, 'scr')
