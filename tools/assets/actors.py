"""Area actor lists <-> assets/areas/*.actors (used by assets.py).

When an area loads, the game walks its actor list (area record +0x14, count in byte +4) and creates every actor
whose condition passes. An actor record starts with its spawn function; for enemies that is sub_0800FD54 and the
record is 32 bytes:
  +0 spawn fn   +4 condition   +8 enemy (row of tables/enemies.csv)   +0xC x, +0xE y (u16, map pixels)
  +0x10 character id   +0x14 behaviour   +0x18 count?   +0x1C ai
Condition (sub_08004784): 0 = always; 0x1NNNN = only if story flag NNNN is set; 0x2NNNN = only if it is clear;
0x3NNNN = if set (and clears it); a pointer = run that script and spawn if it returns non-zero.

File syntax (one actor per line, order = spawn order):
  actor LABEL                       keep an existing actor record (NPCs, triggers, enemies...)
  enemy ENEMY X Y CHARACTER [condition=0] [behaviour=gUnknown_080555A0] [count=1] [ai=gUnknown_080716EC]
                                    add a new enemy (ENEMY = row of enemies.csv, CHARACTER = sprite id; copy them
                                    from tables/spawns.csv, e.g. Bomber = enemy 8, character 34)
Existing enemy spawns are edited in tables/spawns.csv; this file adds, removes and reorders actors.
"""
import os, re, struct
import labels as L
import tables as T

ROM = 0x08000000
AREAS = (0x8E2E0, 452, 56)
SPAWN_FN = 0x0800FD55


def u32(d, o): return struct.unpack_from('<I', d, o)[0]


def describe(d, a):
    fn = u32(d, a)
    if fn == SPAWN_FN:
        return 'enemy %d at %d,%d' % (u32(d, a + 8), struct.unpack_from('<H', d, a + 0xC)[0], struct.unpack_from('<H', d, a + 0xE)[0])
    return 'spawn fn 0x%08X' % fn


def extract(d, out, reg):
    ad = os.path.join(out, 'areas'); os.makedirs(ad, exist_ok=True)
    en = T.enemy_names(d)
    for i in range(AREAS[1]):
        r = AREAS[0] + AREAS[2] * i
        n = d[r + 4]; lst = u32(d, r + 0x14)
        if not lst: continue
        lo = lst - ROM
        name = T.ui_string(d, u32(d, r + 0xC)) if u32(d, r + 0xC) < 1534 else ''
        fn = 'a%03d_w%02X_%02X_%s.actors' % (i, d[r], d[r + 1], re.sub(r'\W+', '_', name).strip('_') or 'area')
        p = os.path.join(ad, fn)
        lines = ['# Area %d (world 0x%02X, area 0x%02X) %s: actor list %s, %d actors. Syntax: tools/assets/actors.py'
                 % (i, d[r], d[r + 1], name, L.symbol(lo), n)]
        for k in range(n):
            a = u32(d, lo + 4 * k) - ROM
            hint = describe(d, a)
            if u32(d, a) == SPAWN_FN and en.get(u32(d, a + 8)): hint += ' (%s)' % en[u32(d, a + 8)]
            lines.append('actor %-24s ; %s' % (L.symbol(a), hint))
        open(p, 'w').write('\n'.join(lines) + '\n')
        reg('actors:%d' % i, p, kind='actors', area=i, record=r, list=lo, count=n)


def build(d, a, path, ctx):
    items = []
    for ln, l in enumerate(open(path), 1):
        l = l.split(';')[0].strip()
        if not l or l.startswith('#'): continue
        w = l.split()
        if w[0] == 'actor': items.append(('ref', w[1]))
        elif w[0] == 'enemy':
            kv = dict(x.split('=') for x in w[5:])
            items.append(('new', dict(enemy=int(w[1], 0), x=int(w[2], 0), y=int(w[3], 0), char=int(w[4], 0),
                                      cond=kv.get('condition', '0'), beh=kv.get('behaviour', 'gUnknown_080555A0'),
                                      count=kv.get('count', '1'), ai=kv.get('ai', 'gUnknown_080716EC'))))
        else: raise ValueError('%s:%d: expected `actor` or `enemy`' % (path, ln))
    orig = [L.symbol(u32(d, a['list'] + 4 * k) - ROM) for k in range(a['count'])]
    if [x[1] for x in items] == orig: return
    if len(items) > 255: raise ValueError('%s: at most 255 actors' % path)
    syms = []
    for k, (kind, v) in enumerate(items):
        if kind == 'ref': syms.append(v); continue
        nm = 'Actor_A%03d_%d' % (a['area'], k)
        src = ('\t.4byte 0x0800FD55\n\t.4byte %s\n\t.4byte %d\n\t.2byte %d, %d\n\t.4byte %d\n\t.4byte %s\n\t.4byte %s\n\t.4byte %s\n'
               % (v['cond'], v['enemy'], v['x'], v['y'], v['char'], v['beh'], v['count'], v['ai']))
        fn = os.path.join(ctx.out, 'new_%s.s' % nm); open(fn, 'w').write(src)
        ctx.ov.append({'new': nm, 'file': fn, 'size': 32}); syms.append(nm)
    ln = 'ActorList_A%03d' % a['area']
    fn = os.path.join(ctx.out, 'new_%s.s' % ln); open(fn, 'w').write(''.join('\t.4byte %s\n' % s for s in syms))
    ctx.ov.append({'new': ln, 'file': fn, 'size': 4 * len(syms)})
    r = a['record']
    ctx.put(r + 4, r + 5, bytes([len(items)]), 'actcount')
    ctx.ptr(r + 0x14, ln, 'actlist')
