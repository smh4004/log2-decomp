#!/usr/bin/env python3
"""Pointer classification for .rodata (Phase 2).

A 4-byte-aligned word in uncompressed .rodata whose value lies in the ROM image is a pointer *candidate*.
Candidates are accepted when the evidence is strong; the rest are written to config/ptr_ambiguous.txt
and stay raw numbers (they will NOT follow if data moves).

Accepted:
  wfz        target is the first byte of a WFZ container
  func       odd value, target-1 is a traced Thumb function (or even value at an ARM function)
  code       target is also referenced from a code literal pool
  label      target is a code-area label (instruction, pool, vtable, data label)
  table      target in uncompressed .rodata, even, word sits in a pointer run (another candidate within 8 bytes)
             or in a regular-stride array, or the target is pointed to at least twice
Rejected (ambiguous):
  target inside a WFZ container (compressed bytes cannot be addressed), odd non-function targets,
  isolated words with a single reference.
"""
import struct, collections, bisect

ROM = 0x08000000
import os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from game import SOUND_LO, SOUND_HI, NOPTR   # uncompressed sound region (samples + sequences); no-pointer ranges


def classify(d, db, blocks, text_end, ro_lo, ro_hi, image_end):
    wstart = {o for o, s, e, t in blocks}
    bs = sorted((o, e) for o, s, e, t in blocks)
    starts = [b[0] for b in bs]

    def in_wfz(t):
        i = bisect.bisect_right(starts, t) - 1
        return i >= 0 and bs[i][0] < t < bs[i][1]

    inwfz = bytearray(len(d))
    for o, e in bs: inwfz[o:e] = b'\x01' * (e - o)
    funcs = db['funcs']
    insn = db['insn']
    pool_targets = set()
    for la in db['pool']:
        o = la - ROM if la >= ROM else db['iwram'][0] + la - db['iwram'][1]
        w = struct.unpack_from('<I', d, o)[0]
        if ROM <= w < ROM + image_end: pool_targets.add(w & ~1)
    code_labels = set(db['pool']) | set(db['labels']) | set(ROM + e for e in db['vt_ents'])
    vt_bases = set(db['vt_bases'])

    def smooth(w):
        # byte tables (sine curves, offsets, palettes) produce words like 0x08090908 / 0x08080404: every byte
        # within 8 of its neighbour. Real pointers like that are rare; keep them only with strong evidence.
        b = [(w >> s) & 0xFF for s in (0, 8, 16, 24)]
        return max(abs(b[i] - b[i + 1]) for i in range(3)) <= 8

    def pcmlike(o, W=48):
        # 8-bit signed audio: consecutive bytes change slowly and are rarely 00/FF. Tables of pointers or
        # records have large byte-to-byte jumps (xx xx xx 08) or many zero bytes.
        s = d[o - W:o] + d[o + 4:o + 4 + W]
        sb = [x - 256 if x > 127 else x for x in s]
        dl = [abs(sb[i + 1] - sb[i]) for i in range(len(sb) - 1) if i != W - 1]
        nz = sum(1 for x in s if x not in (0, 0xFF))
        return sum(dl) / len(dl) < 20 and nz > 0.7 * len(s)

    acc, amb = {}, {}
    cand = {}
    for o in range(ro_lo, ro_hi, 4):
        if inwfz[o]: continue
        w = struct.unpack_from('<I', d, o)[0]
        if ROM <= w < ROM + image_end:
            if any(lo <= o < hi for lo, hi in NOPTR):
                amb[o] = (w, 'noptr'); continue
            if (w - ROM) not in wstart and pcmlike(o):
                amb[o] = (w, 'pcm'); continue
            if smooth(w) and not ((w - ROM) in wstart or (w & ~1) in pool_targets or (w - 1) in funcs):
                amb[o] = (w, 'bytepattern'); continue
            cand[o] = w
    refcount = collections.Counter(cand.values())
    odd = []
    isolated = []
    for o, w in cand.items():
        t = w - ROM
        # dialogue step record {u16 id, u8 type=5, u8 speaker, u32 textref}: a packed text ref
        # (bank | off<<6 | len<<21) with len 64..67 looks exactly like a ROM pointer
        if d[o - 2] == 5 and d[o - 1] != 0x08 and (w & 0x3F) < 7 and struct.unpack_from('<H', d, o - 4)[0] < 0x400:
            amb[o] = (w, 'textref'); continue
        if t in wstart and w % 2 == 0: acc[o] = (w, 'wfz'); continue
        if w & 1 and (w - 1) in funcs and funcs[w - 1] == 't': acc[o] = (w, 'func'); continue
        if w % 4 == 0 and w in funcs and funcs[w] == 'a': acc[o] = (w, 'func'); continue
        if in_wfz(t): amb[o] = (w, 'inside_wfz'); continue
        if w & 1 and (w - 1) in insn and insn[w - 1][0] == 't': acc[o] = (w, 'func'); continue
        if w & 1: odd.append(o); continue
        if w in pool_targets: acc[o] = (w, 'code'); continue
        if t < text_end:
            # plain instruction addresses are not evidence (0x08000800 is also two halfwords 0x0800)
            if t in vt_bases or (w in code_labels and w not in insn): acc[o] = (w, 'label')
            else: amb[o] = (w, 'text_unlabeled')
            continue
        neighbour = any((o + k) in cand for k in (-8, -4, 4, 8))
        stride = False
        if not neighbour:
            for s in range(12, 260, 4):
                if (o - s) in cand and (o + s) in cand or (o + s) in cand and (o + 2 * s) in cand \
                        or (o - s) in cand and (o - 2 * s) in cand:
                    stride = True; break
        # without a neighbouring pointer the evidence is weak: also require an aligned target that is either
        # close by (same asset bank) or pointed to several times
        weak_ok = w % 4 == 0 and (abs(t - o) < 0x80000 or refcount[w] >= 3)
        if neighbour or (stride or refcount[w] >= 2) and weak_ok:
            acc[o] = (w, 'table')
        else:
            isolated.append(o)
    # isolated words: accept when they sit at the start of an object that something points to
    # (e.g. a font header {glyph ptr, 0, 0, ram ptr} referenced from code). Noise in big blobs is far from labels.
    obj_starts = sorted(set(w2 - ROM for w2 in pool_targets) | set(w2 - ROM for (w2, k2) in acc.values()))
    for o in isolated:
        w = cand[o]
        i = bisect.bisect_right(obj_starts, o) - 1
        if i >= 0 and o - obj_starts[i] < 0x20:
            acc[o] = (w, 'struct')
        else:
            amb[o] = (w, 'isolated')
    # odd targets (byte streams such as scripts): accept only next to a strongly-typed pointer
    for o in odd:
        w = cand[o]
        strong = any(acc.get(o + k, (0, ''))[1] in ('func', 'wfz', 'code', 'label') for k in (-8, -4, 4, 8))
        run = any((o + k) in cand and cand[o + k] & 1 and abs(cand[o + k] - w) < 0x8000 for k in (-8, -4, 4, 8))
        if not run:      # regular-stride array of records (e.g. 12-byte sound sample headers)
            for st in range(8, 68, 4):
                hits = sum(1 for m in (-2, -1, 1, 2) if (o + m * st) in cand and abs(cand[o + m * st] - w) < 0x100000)
                if hits >= 2: run = True; break
        bytepat = (w >> 16) & 0xFF == 0x08 and (w & 0xFF) == (w >> 8) & 0xFF      # e.g. 01 01 08 08: byte fields
        if w - ROM >= text_end and (strong or run) and not bytepat:
            acc[o] = (w, 'table_odd')
        else:
            amb[o] = (w, 'odd')
    # words inside byte-stream objects (objects whose start is not 4-aligned: sound sequences, scripts)
    # are data, not pointers -- unless the evidence is strong (wfz/func/code).
    starts = sorted(set((w2 & ~0) - ROM for (w2, k2) in acc.values() if k2 not in ('func',)) | set(w2 - ROM for w2 in pool_targets))
    for o in list(acc):
        w, k = acc[o]
        if k in ('wfz', 'func', 'code'): continue
        i = bisect.bisect_right(starts, o) - 1
        if i < 0 or starts[i] % 2 == 0 or o - starts[i] >= 0x1000: continue   # only odd-start objects
        if not (SOUND_LO <= starts[i] < SOUND_HI): continue       # observed only for sound sequences
        # a regular array of pointers (same field in fixed-size records) is real even inside such a region
        if any((o + m * st) in acc and (o + 2 * m * st) in acc for st in range(4, 68, 4) for m in (-1, 1)): continue
        del acc[o]; amb[o] = (w, 'in_bytestream')
    return acc, amb
