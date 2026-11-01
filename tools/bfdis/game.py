"""Per-game layout (config/game.json): one copy of the tools serves Buu's Fury and both Legacy of Goku games.
  text_start / text_end   code area (ROM offsets); .rodata starts at text_end
  ctor                    C$$pi_ctorvec (entry-relative static-constructor offsets), ARM ADS
  vtables                 base-relative C++ vtables (and MI thunks), after the armlink veneers
  iwram                   RW image: ROM offset, load address (0x03000000), size (from crt0's DMA)
  sound                   uncompressed sound region (pointer-classification exception), or [0, 0]
"""
import json, os
_p = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'config', 'game.json')
G = json.load(open(_p))
num = lambda v: int(v, 0) if isinstance(v, str) else v
NAME = G['name']; TITLE = G['title']; SHA1 = G['sha1']
TEXT_START = num(G['text_start']); TEXT_END = num(G['text_end'])
CTOR_LO, CTOR_HI = (num(x) for x in G['ctor'])
VT_LO, VT_HI = (num(x) for x in G['vtables'])
IWRAM = tuple(num(x) for x in G['iwram'])
SOUND_LO, SOUND_HI = (num(x) for x in G['sound'])
IMAGE_END = IWRAM[0] + IWRAM[2]

# ranges that never contain pointers (fonts, PCM samples): [lo, hi, comment]
NOPTR = [(num(r[0]), num(r[1])) for r in G.get('noptr', [])]
