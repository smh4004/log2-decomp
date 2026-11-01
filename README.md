# Dragon Ball Z: Buu's Fury (USA): disassembly and decompilation

A pret-style source tree for **Dragon Ball Z: Buu's Fury (USA)** (GBA, `BG3E`, Webfoot 2004). It provides:

* **A matching disassembly.** `make` rebuilds the original 8 MB ROM byte for byte from labelled assembly and data.
* **Shiftable source.** Every pointer is a symbol, so code and data can grow, shrink and move. This is tested by
  inserting padding and playing the game through an automated route.
* **Modding toolkit** (`docs/modding.md`). `make extract` turns the game into about 11,000 editable files, and `make modern` builds them back:
  * **scripts**: a decompiler and compiler for all 533 event lists (cutscenes, NPC talk, shops) and for item effects. Steps
    can be added and removed, and new dialogue can be written inline.
  * **all 427 maps**: layers as CSV grids, tile lists, collision masks.
  * **graphics**: 187 tile pages and 7,240 sprite frames as PNG.
  * **text**: dialogue and UI strings.
  * **tables**: palette, EXP, areas, equipment, items, scouter, as CSV.
  * a WFZ compressor, so any of it can grow.
* **A C decompilation.** There's Ghidra reference C for all 4,947 functions (`ref/`), and **431 functions run as GCC-compiled C** in a
  `make DECOMP=2` ROM that plays the test routes identically to the original: 284 verified with ≥90% coverage, plus 147 tested with lower coverage.
  Each was checked for equivalence against the original machine code. Another 1,790 compile and link but haven't been verified yet.
* **Tooling.** A headless mGBA test harness (screenshots, breakpoints, memory watches, CPU snapshots), and a Unicorn
  equivalence tester with mutation checks.

> **Want to make a mod? Start with [`USER_README.md`](USER_README.md):** a step-by-step guide to changing text, cutscenes, items,
> enemies, maps and graphics, and sharing the result as a patch.

> **No ROM data is included.** Everything copyrighted is read at build time from your own `baserom.gba`
> (SHA-1 `f1c4b07554d2a3b1ad2f325307051e775ce68087`). The generated `asm/*.s`, `data/*.s` and `src/**/*.c` are mechanically
> derived from that ROM, so keep this repository private. Share hacks as `.bps` patches, never as ROMs or extracted assets.

---

## Contents
1. [Quick start](#quick-start)
2. [What each build is for](#builds)
3. [Repository tour](#tour)
4. [How it was made: the process, step by step](#process)
5. [Tutorials](#tutorials): rename things, edit code, edit data, write new C, decompile a function, find a bug
6. [Verifying anything yourself](#verify)
7. [Known limits](#limits)

---

<a name="quick-start"></a>
## 1. Quick start
```sh
# Debian/Ubuntu
sudo apt-get install gcc-arm-none-eabi binutils-arm-none-eabi make python3 python3-pip libmgba-dev libpng-dev zlib1g-dev
pip install --break-system-packages capstone numpy pillow unicorn

cp /path/to/your/dump.gba baserom.gba     # must be the USA ROM, SHA-1 above
make && make compare                     # -> buusfury.gba: OK
make decomp                              # -> buusfury_decomp.gba (verified C functions linked in)
```
Nothing else is needed to build. Ghidra (11.x, Java 21) is only needed if you want to **regenerate** the C (section 4.6).

<a name="builds"></a>
## 2. What each build is for
| Command | Output | Use it to |
|---|---|---|
| `make` / `make compare` | `buusfury.gba` + SHA-1 check | Prove the source is complete. Run it after every refactor that shouldn't change behaviour |
| `make SHIFT=0x100` | `buusfury_shift.gba` | Prove nothing depends on absolute addresses (everything after crt0 moves) |
| `make shift-test` | report | Build the matching and shifted ROMs, play `tools/harness/long.txt` on both and compare 41 screenshots |
| `make extract` | `assets/` | Dump editable assets (git-ignored) |
| `make patch` | `buusfury_modern.bps` | Share your mod as a BPS patch |
| `make verify-mods` | report | End-to-end self-test of the modding toolkit (includes an enemy fight in the emulator) |
| `make modern` | `buusfury_modern.gba` | Build with your edited assets (unchanged ones keep their exact bytes) |
| `make decomp` (`DECOMP=1`) | `buusfury_decomp.gba` | The game with the **verified** C functions in place of their assembly |
| `make DECOMP=2` / `DECOMP=3` | same | Also link the *tested* / *untested* tiers (3 is experimental and may crash) |
| `make DECOMP=1 DECOMP_LIST=my.txt` | same | Link exactly the functions listed in `my.txt` (`file/function` per line) |
| `make harness` | `tools/harness/harness` | Build the headless emulator harness |

<a name="tour"></a>
## 3. Repository tour
| Path | Contents |
|---|---|
| `asm/header.s`, `asm/crt0.s` | Cartridge header (the logo is pulled from baserom) and ARM start-up |
| `asm/code_*.s` | Code area 0x08000158-0x08054FBB: Thumb/ARM functions, literal pools, switch tables, 693 C++ vtables, ctor vector, veneers. Replaceable functions are wrapped in `.ifndef DECOMP_<name>` |
| `asm/iwram.s` | RW image linked at 0x03000000 (WFZ decompressor, sound mixer, IRQ table) |
| `data/rodata_*.s` | 7.4 MB of .rodata: labels and 81,364 symbolic pointers, with `incbin` from baserom in between |
| `src/<asm file>/<function>.c` | Decompiled C, one file per function, with a header comment saying how it was verified |
| `ref/code_*.c` | Ghidra reference C for every function, one file per `asm/code_*.s` (read-only; `ref/index.tsv` maps functions to files) |
| `include/ghidra_types.h` | Ghidra's types and pseudo-ops (`undefined4`, `CONCAT22`, `CARRY4`...) as C |
| `config/symbols.txt` | **Names.** Edit freely and rerun `gen.py` |
| `config/decomp_*.txt` | C tiers: verified / tested / untested / failing, plus `decomp_blocklist.txt` |
| `config/regions.yaml`, `pinned.txt`, `ptr_ambiguous.txt`, `replaceable.txt`, `raw_insns.txt` | Byte map and analysis results (see docs) |
| `tools/bfdis/` | The disassembler: `analyze.py` (code discovery), `ptrs.py` (data pointers), `emit.py`, `gen.py`, `verify.py`, `regions.py`, `pinned.py` |
| `tools/wfz/` | WFZ decoder (a port of the game's), compressor, scanner |
| `tools/assets/` | Asset extract/build (`assets.py`), maps (`mapassets.py`), tiles (`gfx.py`), sprites, tables, relocation and splicing (`apply.py`), demo edits |
| `tools/scripts/` | Script bytecode assembler/disassembler (`bfscript.py`), event lists (`events.py`), round-trip self-test |
| `config/script_natives.txt` | Names for script natives and vars (edit freely) |
| `tools/harness/` | Headless mGBA harness and input routes |
| `tools/ghidra/` | `setup.sh` (project), `export.sh` (C export); scripts for memory map, flow fixes (`FixFlow.java`), veneer signatures, C/JSON export |
| `tools/decomp/` | `autodecomp.py` (C pipeline), `cc.sh` (compiler wrapper), `r0live.py` (return-value liveness), `mutation_check.py`, `gamebisect.py` |
| `docs/` | `modding.md`, `rom_map.md`, `toolchain.md`, `shifting.md`, `assets.md`, `decomp.md`, `decomp_scope.md`, `progress.md` |

Naming: known things have names in `config/symbols.txt` (`ScriptVM_Run`, `Wfz_LoadContainer`, `gAreaTable`...).
Everything else is `sub_08XXXXXX` (function), `_08XXXXXX` (local label), `gUnknown_08XXXXXX` (data) or, in C,
Ghidra's `DAT_0300XXXX` (RAM global at that address).

<a name="process"></a>
## 4. How it was made: the process, step by step
Every step below can be rerun from scripts in `tools/`. Details are in the linked docs.

### 4.1 Identify the toolchain (`docs/toolchain.md`)
Fingerprints such as `__rt_sdiv` taking the divisor in r0, 2-byte `__call_via_rN` stubs, `push {r3,lr}` 8-byte stack alignment,
base-relative vtables, an entry-relative ctor vector and strings stored inline in code identify **ARM ADS 1.1/1.2 `tcpp`** (Thumb
C++). It isn't GCC. That decides two things: GNU `as` can rebuild the assembly, and a *byte-matching* C decomp would
need the proprietary ADS compiler (`docs/decomp_scope.md`).

### 4.2 Map every byte (`docs/rom_map.md`, `tools/bfdis/regions.py`)
The ROM splits into header, crt0, Thumb code, ctor vector, veneers, vtables, more code, 7.4 MB of .rodata (13,183 WFZ
containers, each validated by decompressing it to its declared size), the 4 KB RW image and 0xFF padding.
`config/regions.yaml` classifies 100% of bytes.

### 4.3 Find the code (`tools/bfdis/analyze.py`)
This is recursive descent from the crt0 entry, following every `bl`, branch, switch table (the ADS `adr` + `ldrh` + `add pc`
idiom), vtable entry, ctor-vector entry and odd function pointer in data. Seeds have **confidence levels**. A guess (a
`push {..,lr}` prologue found in a gap) is evicted if a stronger trace needs its bytes. Guesses containing `lsrs rX,rY,#32`
are rejected, because that's how the high half of a ROM pointer (0x08xx) decodes. Result: 4,944 functions, about 142k instructions,
4,052 literal pools, 21 switch tables and 693 vtables.

### 4.4 Emit matching assembly (`tools/bfdis/emit.py`, `gen.py`)
Capstone disassembles and the emitter writes GNU `as` syntax. Where GNU `as` would pick a different encoding (ARM
immediates with non-canonical rotations, 5 odd instructions), the emitter writes the exact form or a raw `.inst`.
Literal pools become `.4byte symbol`, vtables become `.4byte sub_X + 1 - vtable` (base-relative), and the ctor vector
`.4byte sub_X + 1 - .`. `make compare` checks the SHA-1.

### 4.5 Make data symbolic (`tools/bfdis/ptrs.py`, `docs/shifting.md`)
Every aligned word in .rodata that looks like a ROM address is classified with evidence: it starts a WFZ container, it's a Thumb
function, a code pool references it, it's in a table of similar pointers, and so on. 81,364 words became symbols. 2,295 stayed numbers
because they're ambiguous, and each is listed with a reason. Lessons that are encoded as rules: text references (`bank|off<<6|len<<21`) can look like
pointers, sound sequences contain pointer-shaped bytes, GNU ld ORs the Thumb bit into even pointers to Thumb symbols, and
83 objects are addressed as `symbol ± constant` (**pinned**: they must not move relative to each other).
The proof: `make shift-test`, where everything after crt0 moves and 39/41 screenshots stay identical (the other 2 come from an
uninitialised stack read in the original title-menu code).

### 4.6 Decompile (`docs/decomp.md`)
1. **Ghidra headless** (`tools/ghidra/setup.sh`) imports `buusfury.elf`, so it knows every function boundary and name, plus a GBA memory
   map. `FixFlow.java` then repairs Ghidra's analysis: the armlink veneers aren't non-returning, and they get fixed argument counts
   computed by `veneer_sigs.py`. `export.sh` writes reference C for every function (`ref/`) and a JSON record per function.
2. **`autodecomp.py tus`** turns each replaceable function into a standalone C file: types header, externs, absolute
   addresses for RAM/IO globals (all `volatile`), and stack slots whose address escapes kept in one frame at their original offsets.
   It rejects output Ghidra wasn't sure of (`unaff_`, `in_r`, unrecovered jump tables, ROM-absolute data) and variadic functions.
3. **`compile`** builds each with `arm-none-eabi-gcc -mthumb -O2 -fwrapv -fsigned-char -fno-strict-aliasing` through
   `tools/decomp/cc.sh`, which rewrites GCC's `pop {r0}; bx r0` returns to ADS-style `pop {pc}`. Each one is linked at a scratch
   address against the ROM's symbols, so its calls go to the original code.
4. **Snapshots.** The harness plays input routes and saves the full CPU and memory state at the entry of every listed
   function (about 4,800 snapshots, 916 functions).
5. **`test`** runs the original and the C version from each snapshot in Unicorn and compares r0 (strictly, even for `void`, unless
   `r0live.py` proves no caller reads it), callee-saved registers, SP and **every byte** of RAM, IO, palette, VRAM and OAM. A second run with
   noise on the free stack catches agreement by luck. It also records how many of the original's instructions were executed (coverage).
   `fixthis` turns "void" C++ constructors back into `return this`.
6. **`mutation_check.py`** proves the tester is strict: deliberately broken C must fail (22 of 30 caught; the survivors changed dead
   values or untested branch boundaries).
7. **Whole-game check.** The verified and tested sets are linked into one ROM and played through `tools/harness/decomp_route.txt`
   and `decomp_long.txt`. All 66 screenshots must match the original. Time in these routes is counted in **game-loop passes**
   (`syncpc`), because C code runs at a different speed and shifts lag frames. When a screenshot doesn't match, **`gamebisect.py`** finds the
   culprit functions by building ROMs from halves of the list, and they go into `config/decomp_blocklist.txt`.
8. **`emit`** writes `src/**/*.c` with a header comment and sorts the functions into tiers.

Every bug the whole-game check found, and the fix it led to, is listed in `docs/decomp.md`.

In the build, each replaceable function's assembly is wrapped in `.ifndef DECOMP_<name> ... .else <long jump> .endif`.
In a decomp build the function's address holds a 16-byte jump to the C version, which is linked into free space at the end of the ROM,
and the rest of its bytes become padding. No other byte moves, so any behaviour change comes from the C itself.

### 4.7 Assets and modding tools (`docs/assets.md`, `docs/modding.md`)
Formats were worked out from the code (the reference C in `ref/` makes this quick) and checked by round trips and in-game edits:
* **Script VM**: 31 opcodes read from the handler table, and all 3,890 event steps reassemble byte for byte.
* **Events**: found through the global script table and a scan for step lists.
* **Maps**: all 427 records point at one global tile-page table. Collision masks are 1 bit per cell.
* **Sprites**: a 20-byte frame record holds OAM shape and size plus a pointer to 8bpp pixels.
* **Tables**: matched against the strings the game shows.

The WFZ decoder was ported from the ARM routine at 0x03000040. The compressor is its inverse (within 2.8% of the original size, and every
output is verified by decoding it). Edited assets become overrides: if a new version is the same size or smaller, it goes in place. If it's larger, it's appended at the end of
.rodata under the same label, so every symbolic pointer follows it. Pinned objects are refused.

<a name="tutorials"></a>
## 5. Tutorials

### 5.1 Name a function
```sh
echo "sub_0803F922 Bitmap_BlitTransparent" >> config/symbols.txt
python3 tools/bfdis/gen.py baserom.gba
make compare            # names don't change bytes, so this must still print OK
```
Rename `src/.../sub_0803F922.c` and its entry in the `config/decomp_*.txt` lists to match. To find the function, `grep -rn sub_0803F922 asm/ src/`.

### 5.2 Change code in assembly
Edit `asm/code_*.s` directly (for example, change an immediate). `make` gives a ROM that differs only there. Because everything is
symbolic, you can also insert or delete instructions and everything after them moves correctly (that's what `make shift-test` proves). Use the harness to check that the game still runs.

### 5.3 Mod the game: scripts, maps, graphics, text, tables
```sh
make extract                                  # -> assets/ (never commit it)
$EDITOR assets/scripts/gUnknown_0877CBF0.evt  # the intro cutscene
$EDITOR assets/maps/w01_a01_Snakeway/L1.csv   # a map layer
gimp assets/gfx/sprites/anim_50C148/*.png      # sprites (keep the size)
make modern                                   # -> buusfury_modern.gba
```
The full guide, with syntax, rules and examples for every kind, is `docs/modding.md`. `python3 tools/assets/demo_edits.py` applies a sample edit of each kind.

### 5.4 Write new code in C
Put a `.c` file under `src/` and add `file/function` to a list (or a new tier file). It's compiled with the same flags.
Call it from assembly with `bl MyFunction`, or point a table entry at `MyFunction + 1`. GCC and ADS share the ATPCS
convention for plain C functions (arguments r0-r3, result r0, r4-r11 preserved). Don't throw C++ exceptions or use RTTI across the boundary.

### 5.5 Improve a decompiled function
1. Open `src/<file>/<func>.c`. Ghidra's reference for neighbouring code is in `.analysis/ghidra/c/` after `tools/ghidra/export.sh`.
2. Make it readable: rename `param_1`, add a struct for `*(int *)(param_1 + 0x28)`, and so on.
3. Recompile and test only that function:
   ```sh
   python3 tools/decomp/autodecomp.py compile && python3 tools/decomp/autodecomp.py test --only sub_0803F922
   ```
   (The test copies the C from `.analysis/decomp/tu/`. Edit there, or copy your `src` version back.)
4. `make decomp` and play a route (5.7).

### 5.6 Decompile a function that's still assembly
If it's in `config/replaceable.txt` but in no tier, Ghidra's output was rejected (see `.analysis/decomp/status.json` for the
reason). Write the C by hand from `.analysis/ghidra/c/`, save it as `.analysis/decomp/tu/<name>.c`, then run `compile` and
`test --only <name>`. If it isn't in `replaceable.txt` at all, read why in `docs/decomp.md` ("What can't be replaced").

### 5.7 Run and debug with the harness
```sh
make harness
tools/harness/harness buusfury.gba tools/harness/long.txt out/         # screenshots + frame hashes
```
Route files are plain text (`tap A 30`, `run 600`, `shot name`; `syncpc ADDR` switches to game-loop time). The header of `tools/harness/harness.c` lists all commands.
`hist N` finds hangs, `bp ADDR` and `mem` inspect state, `guard` catches jumps into garbage, and `capture` makes test snapshots.

<a name="verify"></a>
## 6. Verifying anything yourself
| Claim | Command |
|---|---|
| The source rebuilds the original ROM | `make compare` |
| Nothing depends on absolute layout | `make shift-test` |
| A C function matches the original | `python3 tools/decomp/autodecomp.py test --only NAME` (needs snapshots: `.analysis/snaps`, made with the harness `capture` command) |
| The tester catches mistakes | `python3 tools/decomp/mutation_check.py` |
| The decomp ROM plays like the original | `make decomp`, then run `tools/harness/harness ROM tools/harness/decomp_long.txt out/` on `buusfury.gba` and `buusfury_decomp.gba` and compare the `shot` hashes (all 41 must match; same for `decomp_route.txt`) |
| Find which C function breaks the game | `python3 tools/decomp/gamebisect.py config/decomp_tested.txt tools/harness/decomp_long.txt 2` |

<a name="limits"></a>
## 7. Known limits
* The C isn't byte-matching (that needs ARM ADS 1.2, see `docs/decomp_scope.md`). The matching build stays assembly-based.
* Functions in the *untested* tier have never been executed against the original, and a ROM with all of them linked doesn't play
  correctly. Battles, late chapters, shops and saving need more capture routes. Treat that C as a first draft.
* The biggest blocker for promoting more functions is r0 in "void" C++ methods. Callers through vtables can't be enumerated, so a
  difference in r0 counts as a failure (about 1,000 test results). Recovering real return types is the next step.
* Functions shorter than the 16-byte jump, functions entered in the middle (shared epilogues) and ARM/library code can't be swapped. They stay assembly, and Ghidra's reference C still covers them.
* Ghidra-style C: no recovered C++ classes yet, generic names, casts instead of structs. Naming and typing are the main work left
  for contributors, and the equivalence tester makes that safe.

See `docs/progress.md` for the current numbers and suggested next steps.
