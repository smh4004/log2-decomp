#!/usr/bin/env python3
"""Demo edits for every asset kind, applied to a freshly extracted assets/ tree (`make extract`), then `make modern`.
  1. script:    intro event list: step 2 gets new inline text, and a brand-new step is inserted after it
  2. dialogue:  another intro line edited through assets/text/dialogue.txt (longer -> moved to bank 6)
  3. palette:   colour 119 (Snake Way road blue) -> red
  4. map:       Snake Way (w01_a01) layer 1: a strip of road tiles drawn over the clouds
  5. sprite:    the on-screen Snake Way sprites get a red band (assets/gfx/sprites)
  6. tables:    Dirty Shirt costs 999; Senzu Bean also sets var 0x10 (assets/scripts/items)
  7. enemies:   a Bomber is placed next to King Kai on Snake Way (assets/areas), with 40 HP and 5000 EXP
                (assets/tables/enemies.csv); killing it levels Goku up to 64"""
import os, glob, csv, io
import numpy as np
from PIL import Image
os.chdir(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..'))


def edit(path, old, new, enc='utf-8'):
    s = open(path, encoding=enc).read()
    assert old in s, '%s: %r not found (already edited?)' % (path, old[:40])
    open(path, 'w', encoding=enc).write(s.replace(old, new, 1))


edit('assets/scripts/gUnknown_0877CBF0.evt', 'step 2 say 0x00 @0:809:49',
     'step 2 say 0x00 "Previously in LEGACY OF GOKU 4, written in the script compiler!"')
edit('assets/scripts/gUnknown_0877CBF0.evt', 'step 3 code',
     'step auto say 0x00 "This line is a new step added to the event list."\nstep 3 code')
edit('assets/text/dialogue.txt', '@0:1059:24\n', '@0:1059:24\n')       # keep header; edit the next line
p = 'assets/text/dialogue.txt'; L = open(p, encoding='utf-8').read().split('\n')
i = L.index('@0:1059:24'); L[i + 1] = '!Except for one thing... and this line was edited in dialogue.txt.'
open(p, 'w', encoding='utf-8').write('\n'.join(L))
p = 'assets/palette/master.txt'; L = open(p).read().split('\n')
L[1 + 119] = '255   0   0  # 119  (edited: road blue -> red)'; open(p, 'w').write('\n'.join(L))
p = 'assets/maps/w01_a01_Snakeway/L1.csv'
g = np.array([[int(x, 16) for x in r.split(',')] for r in open(p).read().split()])
g[12:15, 6:30] = 179
open(p, 'w').write(''.join(','.join('%03X' % v for v in r) + '\n' for r in g))
for an in ['anim_50C148', 'anim_513320', 'anim_517B8C', 'anim_51BBA8', 'anim_598278']:
    for f in glob.glob('assets/gfx/sprites/%s/*.png' % an):
        im = Image.open(f); a = np.array(im); pal = im.getpalette()
        a[2:5, :] = np.where(a[2:5, :] != 0, 35, 0).astype(np.uint8)
        o = Image.fromarray(a, 'P'); o.putpalette(pal); o.save(f, transparency=0)
p = 'assets/tables/equipment.csv'; lines = open(p, encoding='utf-8').read().split('\n')
hdr = lines[1].split(','); rows = list(csv.reader(lines[2:]))
rows[1][hdr.index('price')] = '999'
buf = io.StringIO(); csv.writer(buf, lineterminator='\n').writerows([r for r in rows if r])
open(p, 'w', encoding='utf-8').write(lines[0] + '\n' + lines[1] + '\n' + buf.getvalue())
edit('assets/scripts/items/11_Senzu_Bean.scr', '    call take_item(21)\n', '    call take_item(21)\n    push 50\n    set 0x10\n')
open('assets/areas/a033_w01_01_Snakeway.actors', 'a').write('enemy 8 0x70 0xB0 34   ; a Bomber next to King Kai\n')
p = 'assets/tables/enemies.csv'; lines = open(p, encoding='utf-8').read().split('\n')
hdr = lines[1].split(','); rows = list(csv.reader(lines[2:]))
rows[8][hdr.index('hp')] = '40'; rows[8][hdr.index('exp')] = '5000'
buf = io.StringIO(); csv.writer(buf, lineterminator='\n').writerows([r for r in rows if r])
open(p, 'w', encoding='utf-8').write(lines[0] + '\n' + lines[1] + '\n' + buf.getvalue())
print('demo edits applied; now run: make modern')
