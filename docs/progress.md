# Progress and handoff notes

## Status (end of session 2)
| Phase | Status | Verified by |
|---|---|---|
| 0: setup, ROM map, toolchain | done | `config/regions.yaml` (100% of bytes classified), `docs/rom_map.md`, `docs/toolchain.md` |
| 1: matching build | **done** | `make && make compare` -> `buusfury.gba: OK` from a fresh unzip with baserom.gba |
| 2: labels + shiftability | done, with listed risks | SHIFT 0x100 / 0x1234 / 0x20000 builds play the long route pixel-identical after the title (`make shift-test`) |
| 3: editable assets | done for text, palette, EXP, map chunks; WFZ compressor | Demo edits visible in game; recompressing all 13,183 containers passes the long route |
| 4: decomp scope | report written | SDT 2.51 compiler experiment, `docs/decomp_scope.md` |
| 7: enemies + user guide | enemy stats (150), spawns (1,571), area actor lists, death scripts; `USER_README.md`; BPS patches | `make verify-mods`: an added enemy with edited HP/EXP spawns, dies and levels Goku up in the emulator |
| 6: modding toolkit | scripts (decompile and compile events and item effects), all maps, tile pages, sprites, tables | `tools/scripts/roundtrip.py` (3,890 steps byte-exact); unedited extract -> identical ROM; `demo_edits.py` edits of every kind show up in game (`docs/modding.md`) |
| 5: non-matching C decomp | **431 functions run as C** (284 verified + 147 tested); reference C for all 4,947 | `make DECOMP=2` plays `decomp_route.txt` + `decomp_long.txt` identically (66/66 checkpoints, game-loop time); `docs/decomp.md` |

## Numbers
* Code: 4,944 function symbols (4,803 Thumb / 141 ARM, including entry points found through data pointers), about 142k instructions, 4,052 literal pools, 21 switch tables, 693 vtables.
  5 instructions emitted as raw words (`config/raw_insns.txt`).
* Data: 81,364 symbolic pointers in .rodata, 2,295 pointer-like words left as numbers (`config/ptr_ambiguous.txt`), 83 pinned ranges.
* Assets: 2,294 dialogue lines, 1,534 UI strings, 512 palette colours, 151 EXP values, 28 Snake Way chunks.

## How to continue
1. **Harness routes:** extend `tools/harness/long.txt` (battles, shop, save, another world) and rerun `make shift-test` and
   `make modern` with `tools/assets/recompress_all.py`. That's how hidden layout dependencies turn up. Debug with
   `guardon`, `watchon`, `bp`, `until`, `mem` (see the header of `tools/harness/harness.c`) and `tools/harness/ramdiff.py`.
2. **More assets:** find the remaining dialogue ref sites by tracing `Text_LoadString` in the harness, then export
   equipment/area tables and sprite frames, and add PNG import for tile pages.
3. **Names:** go through RE_NOTES and name the 248 script natives (`gScriptNativeFuncs`) and their handlers in `config/symbols.txt`.
4. **More C:** the C build and the tester are in place (`docs/decomp.md`).
   * Write capture routes for battles, shops, saving and later chapters. Each newly reached function gets snapshots and can move from
     *untested* to *tested*/*verified*: `harness ... capture`, then `autodecomp.py test && autodecomp.py emit`, then
     `gamebisect.py` on the new list.
   * Recover return types of C++ methods (vtable slots). About 1,000 test results fail only on r0 in "void" methods.
   * Find out why `sub_0800BE90` and `sub_08012960` change the game even though they pass every snapshot (see `config/decomp_blocklist.txt`).
   * Give `src/` real names and structs. Re-test each edit with `autodecomp.py test --only NAME`.
5. **Modding toolkit gaps:**
   * **Sprites**: multi-piece and 16-colour frames aren't exported.
   * **Step kinds 1, 2, 7, 8 and 9** are kept as raw bytes.
   * **Natives**: most of the 248 are unnamed. Name them in `config/script_natives.txt` from their C in `ref/`.
   * **Maps**: can't be resized, and new tile pages can't be added (the page table would have to grow).

## Gotchas learned
* vtables are **base-relative**, the ctor vector is **entry-relative**: both are emitted as symbol differences.
* GNU ld ORs the Thumb bit into `R_ARM_ABS32` against a `.thumb_func` symbol, so even pointers to Thumb code stay numeric.
* A text ref (`bank | off<<6 | len<<21`) with length 64-67 looks exactly like a ROM pointer.
* Some data is reached as `symbol ± constant` from code (pinned), and some records derive sizes from `next_ptr - ptr`.
  Replace objects; never insert gaps between them.
* The title-menu outline renderer reads uninitialised stack words, so 4 title pixels change whenever code or data moves.
* `make clean` deletes `build*/`, not `.analysis/` (the cached analysis and WFZ scan; delete it or use `--reanalyze`).

## Decomp gotchas (session 2)
* **Game-loop time.** Any change in code speed shifts lag frames (a relocated *identical* function moved boot by 38 frames).
  Compare decomp builds only with `syncpc` routes.
* **Keep layout.** C goes after the RW image, and replaced functions become a long jump plus padding of the original size. Earlier,
  appending C before .rodata and padding only to alignment moved every byte after the code area.
* **Ghidra's view of the ROM needs repair** (`FixFlow.java`): veneers marked noreturn cut callers short, veneer argument lists
  were guessed per call site, and auto-analysis created about 3,000 functions at local labels.
* **Ghidra C semantics vs GCC:** signed `char`; split stack structs (one frame array); `void` that really returns `this` or a callee's
  result; variadic functions; modern GCC's `pop {r0}; bx r0` returns.
* `make clean` deletes `build*/` but not `.analysis/` (Ghidra export, decomp state in `.analysis/decomp/status.json`).
