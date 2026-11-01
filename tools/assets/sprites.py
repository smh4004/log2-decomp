"""Sprite frames <-> PNG.

A frame record is 20 bytes: [u16 OAM attr0][u16 OAM attr1][u32 -> WFZ pixel block][u32 piece count][bbox][bbox].
attr0/attr1 give shape and size as in GBA OAM (bit 13 of attr0 = 256 colours). Records sit in arrays, one array per
animation. Pixels are 8 bits per pixel, 8x8 tiles in row-major order (1D OBJ mapping), indices into the OBJ half of the
master palette (colours 256-511 of assets/palette/master.txt; index 0 = transparent).

Exported: every single-piece 256-colour frame whose block size matches its shape (about 10,000 records, the bulk
of the characters and NPCs) as assets/gfx/sprites/<animation>/<frame block>.png. A block used by several frames is written
once. Multi-piece frames (piece count > 1) and 16-colour frames aren't exported yet.
Edits must keep the image size; colours are matched to the OBJ palette like tile pages (gfx.py).
"""
import os, struct
import numpy as np
from wfz import unpack
import labels as L

ROM = 0x08000000
PALETTE = 0x701B0
SIZES = {(0, 0): (8, 8), (0, 1): (16, 16), (0, 2): (32, 32), (0, 3): (64, 64), (1, 0): (16, 8), (1, 1): (32, 8),
         (1, 2): (32, 16), (1, 3): (64, 32), (2, 0): (8, 16), (2, 1): (8, 32), (2, 2): (16, 32), (2, 3): (32, 64)}


def u32(d, o): return struct.unpack_from('<I', d, o)[0]
def isptr(v): return ROM <= v < ROM + 0x800000


def obj_palette(d):
    return np.frombuffer(d[PALETTE + 768:PALETTE + 1536], dtype=np.uint8).reshape(256, 3)


def frame_size(d, o, wfz):
    a = u32(d, o); a0, a1 = a & 0xFFFF, a >> 16
    if isptr(a) or isptr(u32(d, o + 8)) or u32(d, o + 8) != 1: return None
    blk = u32(d, o + 4) - ROM
    if blk not in wfz or not (a0 >> 13) & 1 or (a0 >> 14) == 3: return None
    w, h = SIZES[((a0 >> 14) & 3, (a1 >> 14) & 3)]
    return (w, h) if wfz[blk][1] == w * h else None


def find_animations(d, wfz):
    """-> [(array offset, [(record offset, block, w, h)])]"""
    good = {}
    for o in range(0x54FBC, 0x7B79A4, 4):
        s = frame_size(d, o, wfz)
        if s: good[o] = s
    anims = []
    for o in sorted(good):
        if o - 20 in good: continue
        fr = []; p = o
        while p in good:
            fr.append((p, u32(d, p + 4) - ROM) + good[p]); p += 20
        anims.append((o, fr))
    return anims


def block_to_png(raw, w, h, pal, path):
    from PIL import Image
    t = np.frombuffer(raw[:w * h], dtype=np.uint8).reshape(h // 8, w // 8, 8, 8)
    a = t.transpose(0, 2, 1, 3).reshape(h, w)
    im = Image.fromarray(np.ascontiguousarray(a), 'P'); im.putpalette(pal.flatten().tolist())
    im.info['transparency'] = 0
    im.save(path, transparency=0)


def png_to_block(path, w, h, pal):
    from PIL import Image
    im = Image.open(path)
    if im.mode == 'P':
        a = np.array(im, dtype=np.uint8)
    else:
        rgba = np.array(im.convert('RGBA'), dtype=np.int32)
        flat = rgba[..., :3].reshape(-1, 3)
        dist = ((flat[:, None, :] - pal[None, 1:, :].astype(np.int32)) ** 2).sum(-1)
        a = (dist.argmin(1) + 1).astype(np.uint8).reshape(rgba.shape[:2])
        a[rgba[..., 3] < 128] = 0                     # transparent pixels -> index 0
    if a.shape != (h, w): raise ValueError('%s: expected %dx%d, got %dx%d' % (path, w, h, a.shape[1], a.shape[0]))
    return a.reshape(h // 8, 8, w // 8, 8).transpose(0, 2, 1, 3).tobytes()


def extract(d, out, reg, wfz):
    pal = obj_palette(d)
    seen = set(); n = 0
    sd0 = os.path.join(out, 'gfx', 'sprites'); os.makedirs(sd0, exist_ok=True)
    for ao, frames in find_animations(d, wfz):
        an = L.name_at(ao) or 'anim_%06X' % ao
        for ro, blk, w, h in frames:
            if blk in seen: continue
            seen.add(blk)
            sd = os.path.join(sd0, an); os.makedirs(sd, exist_ok=True)
            p = os.path.join(sd, '%s.png' % (L.name_at(blk) or 'blk_%06X' % blk))
            block_to_png(unpack(d, blk)[0], w, h, pal, p)
            reg('sprite:%06X' % blk, p, kind='sprite', start=blk, w=w, h=h); n += 1
    return n


def build(d, a, path, ctx):
    from wfz_compress import compress
    raw = png_to_block(path, a['w'], a['h'], obj_palette(d))
    if raw != unpack(d, a['start'])[0][:a['w'] * a['h']]:
        ctx.put(a['start'], ctx.wfz[a['start']][2], compress(raw), 'sprite')
