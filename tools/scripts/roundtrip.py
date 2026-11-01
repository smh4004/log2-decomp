#!/usr/bin/env python3
"""Self-test: export every event list, then (1) compile it back unedited (must give no overrides) and (2) re-encode
every step from its text (must give the original bytes; compressed steps are compared after decompression)."""
import sys, os, struct, tempfile, collections
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path[:0] = [HERE, os.path.join(HERE, '..', 'assets'), os.path.join(HERE, '..', 'wfz')]
os.chdir(os.path.join(HERE, '..', '..'))
import events as E, bfscript as B
from wfz import unpack
d = open('baserom.gba', 'rb').read()
bt = [struct.unpack_from('<I', d, 0x7B5B64 + 4 * i)[0] - 0x08000000 for i in range(7)]
banks = [unpack(d, o)[0].decode('utf-16-le') for o in bt]
lists = E.find_lists(d, banks); names = B.load_names()
owner = {}
for o, it, tm in lists:
    for t in it: owner.setdefault(t, o)
tmp = tempfile.mkdtemp(); bad = 0; kinds = collections.Counter()
for o, it, tm in lists:
    txt = E.export_list(d, o, it, tm, banks, names, owner)
    if E.compile_list(d, o, it, tm, txt, names, lambda s: 1 / 0, tmp, 't'):
        bad += 1; print('unedited list produced overrides:', hex(o))
    for s, t in zip(E.parse_evt(txt), it):
        kinds[s['kind']] += 1
        if s['kind'] == 'zcode':
            if B.asm('\n'.join(s['body']), names) != E.zdecode(d, t)[0]: bad += 1; print('zcode mismatch', hex(t))
        elif s['kind'] != 'ref':
            data = E.step_bytes(s, names, None)
            if d[t:t + len(data)] != data: bad += 1; print('mismatch', hex(t), s['kind'])
print('%d lists, %d steps %s: %s' % (len(lists), sum(len(i) for _, i, _ in lists), dict(kinds), 'OK' if not bad else '%d FAILURES' % bad))
sys.exit(1 if bad else 0)
