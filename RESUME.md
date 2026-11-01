# Work-in-progress notes (resume point)

Status as of 2026-10-31.

## Done
- Matching disassembly: `make compare` -> `log2.gba: OK` (SHA-1 18e0715dec419f3501c301511530d2edcd590f8b).
  Tooling is the Buu's Fury toolchain (tools/bfdis etc.) parameterized by `config/game.json` via `tools/bfdis/game.py`.
- Pointer fixes for relocatability:
  - `gen.py`/`emit.py`: even pointers to Thumb functions (e.g. pool word 0x08021924) now use a plain alias
    label `sub_XXXXXXXX_even` so ld does not set bit 0.
  - `emit.py data_ptr`: aligned .rodata pointers inside the IWRAM RW image are symbolized (0x03000C18 -> gUnknown_083ED210).
  - `ptrs.py`: "smooth" byte patterns (every byte within 8 of its neighbour, e.g. 0x08090908, 0x08080808) are
    rejected as `bytepattern` unless strongly referenced; isolated `table` words need an aligned target that is
    near (< 0x80000) or referenced 3+ times.
- Shift test (`make shift-test`): menu no longer hangs; 8/37 identical. Random-walk gameplay now matches.

## Remaining shift-test diffs
- HUD pixel column (9,12)-(10,17) from s09 on, and VRAM 0x0600BB1E.., 0x06016B21.. (OBJ tiles).
- s21_menu screen differs (40,26)-(221,152).
- Lead: EWRAM 0x02000220 (sprite/vertex byte buffer written by IWRAM code 0x03000788, called from 0x08020C9E)
  first diverges at frame 675 (0x08 vs 0x0E... value 0e08 vs 0c08). Source entries come from IWRAM 0x030033C8,
  computed from a byte stream in .rodata (pointer in r3 when 0x030005F4/0x030006C0 run). Likely another data
  word wrongly converted (or a real pointer left raw). Compare the stream bytes in log2.gba vs log2_shift.gba
  (offset +0x100) like for 0x1335A8.
- Debug helper used: watch a RAM word in both builds and print the first divergent write:
  `(echo "watchon ADDR"; sed -n "/SHOT/q;p" tools/harness/smoke.txt) > fd.txt` then run
  `tools/harness/harness log2.gba fd.txt out` and `... log2_shift.gba ...` and compare the `watchon` lines
  (ignore the lr/r0-r3 columns, which differ by the shift).
- `tools/harness/ramdiff.py` dumps: IWRAM dump should be 0x8000 bytes (32 KB reads past into mirrors).

## Next steps (plan)
1. Finish shift test (above), then C decomp (Ghidra setup.sh/export, autodecomp, syncpc address for LoG2 game loop),
   modding tools adapted to LoG2 (notes: native fn table ~0x3B5DD8 (146 entries), UI string pointers ~0xE2C00,
   dialogue ASCII inline in script bytecode), README + USER_README.
2. Then Legacy of Goku 1 (SHA-1 a3c8c76742f11fc6a3f6e3fcca20992458cac0b5, code ALGE, older engine, crt0 at 0xC0)
   in smh4004/log1-decomp.

Commits: author smh4004 <smh4004@users.noreply.github.com>, no tool attribution trailers. Never commit ROM bytes or extracted assets.
