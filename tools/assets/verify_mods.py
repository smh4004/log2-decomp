#!/usr/bin/env python3
"""End-to-end check of the modding toolkit (needs baserom.gba, the harness, about 2 minutes):
  1. fresh `make extract` + `make modern` with no edits -> byte-identical ROM
  2. script round trip (tools/scripts/roundtrip.py)
  3. demo_edits.py + `make modern`, then in the emulator:
     - the intro shows the rewritten line and the inserted step
     - the Bomber placed on Snake Way spawns with the edited HP, dies, and gives the edited EXP (Goku -> level 64)
Exits non-zero on any failure."""
import os, sys, subprocess, shutil, hashlib
os.chdir(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..'))
ok = True


def run(cmd):
    r = subprocess.run(cmd, shell=True, capture_output=True, text=True)
    if r.returncode: print(r.stdout[-2000:], r.stderr[-2000:]); sys.exit('FAILED: ' + cmd)
    return r.stdout


def check(name, cond):
    global ok
    print('%-62s %s' % (name, 'ok' if cond else 'FAILED')); ok &= bool(cond)


shutil.rmtree('assets', ignore_errors=True); shutil.rmtree('build_modern', ignore_errors=True)
run('make -s harness && make -s && make -s extract && make -s modern')
sha = lambda p: hashlib.sha1(open(p, 'rb').read()).hexdigest()
check('unedited assets rebuild the original ROM', sha('log2_modern.gba') == sha('baserom.gba'))
check('all event steps reassemble byte for byte', 'OK' in run('python3 tools/scripts/roundtrip.py'))
run('python3 tools/assets/demo_edits.py && make -s modern')
out = run('tools/harness/harness log2_modern.gba tools/harness/enemy_test.txt build_modern/verify')
mem = [l.split() for l in out.split('\n') if l.startswith('mem')]
hp = [int(m[2], 16) for m in mem if m[1] == '0202e558:']
check('placed enemy spawns with the edited HP (40)', hp and hp[0] == 40 << 10)
check('enemy is killed', hp and hp[-1] == 0)
exp = [int(m[2], 16) for m in mem if m[1] == '03001584:']
check('defeat gives the edited EXP (2200 + 5000)', exp and exp[-1] == 7200)
print('ALL OK' if ok else 'SOME CHECKS FAILED'); sys.exit(0 if ok else 1)
