# Shiftability: moving code and data without breaking pointers

**Status (verified):** a build with 0x100, 0x1234 or 0x20000 bytes inserted right after crt0 boots and plays through
the title, Select Game, New Game, the whole intro cutscene, Snake Way, the pause menu and 60 random walks with A presses.
Every checkpoint after the title screen is **pixel-identical** to the matching build (39 of 41 checkpoints).
The two title checkpoints differ by 4 pixels because of a stack-read quirk in the original code (see "Known risks").
Every byte after 0x08000158 moves in these builds: code, vtables, .rodata and the IWRAM load image.

Run it yourself:

```sh
make shift-test              # SHIFT=0x100, long route (tools/harness/long.txt)
make shift-test SHIFT=0x1234
make SHIFT=0x2000            # just build buusfury_shift.gba
```

## What is symbolic now

| Where | How | Count |
|---|---|---|
| Branches, `bl`, `adr`, `ldr rX,=pool`, switch tables | labels; switch entries are `(target - base) / 2` | all |
| Code literal pools pointing into ROM or the IWRAM image | `.4byte sym`, `sym + 1` for Thumb, `__iwram_lma + n` for the RW load image | all except 2 header offsets (0x08000002, 0x08000014) |
| Thumb function pointers in data inside the code area / IWRAM image (IRQ table, callbacks) | `.4byte sub_X + 1` | all words that point at a traced Thumb function |
| vtables (base-relative) | `.4byte sub_X + 1 - vtbl` | 5,214 |
| ctor vector (entry-relative) | `.4byte sub_X + 1 - .` | 143 |
| MI thunk literals | `.4byte sub_X + 1 - anchor` | all |
| .rodata pointers | `.4byte gUnknown_08XXXXXX` / `sub_X + 1`, with labels placed between `incbin` pieces | 81,364 |

The RW image (`asm/iwram.s`) is linked at 0x03000000 and loaded at `__iwram_lma`. crt0 uses `__iwram_lma`, so the image can move.

## How .rodata pointers are found (`tools/bfdis/ptrs.py`)

A word is a **candidate** if it is 4-aligned, lies outside a WFZ container, and its value is inside the ROM image
(0x08000000-0x087B89A7). In the scans, every real pointer was 4-aligned. Unaligned hits (95) were all coincidences that straddled two real pointers.

| Evidence | Accepted as | Count |
|---|---|---:|
| target is the first byte of a WFZ container | wfz | 17,471 |
| odd value and target-1 is a Thumb instruction, or an ARM function | func | 15,431 |
| target also referenced by a code literal pool | code | 1,466 |
| target is a vtable or labelled data in the code area | label | 8 |
| another candidate within 8 bytes, a regular-stride array, or a target pointed to twice | table | 46,473 |
| odd target (byte streams: scripts, sound sequences) next to a strong pointer or in a stride array | table_odd | 422 |
| isolated word within 0x20 bytes of an object start something points at (e.g. font header) | struct | 93 |

Everything else stays a number and is listed in **`config/ptr_ambiguous.txt`** (2,295 words):

| Reason | Count | What they are |
|---|---:|---|
| inside_wfz | 1,198 | Value points into the middle of compressed data. Can't be a real pointer, so it's noise (PCM audio, bitmap bytes) |
| text_unlabeled | 389 | Even value at a plain instruction address. Byte patterns such as 0x08000800 (= halfwords 0x0800 0x0800) |
| odd | 368 | Odd value with no supporting neighbour, mostly in audio sample data (0x2B8C38-0x36FFFF) |
| isolated | 173 | Single pointer-like word far from any object start |
| textref | 112 | Packed dialogue reference in a step record `{u16 id, 5, speaker, ref}`. Refs with length 64-67 look exactly like ROM pointers |
| in_bytestream | 55 | Pointer-like word inside a sound sequence (see below) |

## How missed pointers were found
`tools/harness/harness` (headless mGBA) has `guard`, `bp`, `until`, `watch`, `mem` and `hist`. `tools/harness/ramdiff.py`
compares RAM dumps of the two builds: a ROM pointer must differ by exactly SHIFT, so a ROM-range word with the **same**
value in both runs is stale. Three classes were found this way and fixed in the generator:
1. **IWRAM initialised data**: IRQ handler table and callbacks (Thumb pointers emitted as raw bytes). The first crash.
2. **Sound sample table** (12-byte records with odd pointers, at 0x08319xxx). Notes got stuck; fixed by stride detection for odd pointers.
3. **Font header** `{glyph table ptr, 0, 0, RAM ptr}` at 0x082B9BA0 (an isolated pointer). The Select Game screen overflowed the stack; fixed by the object-start rule.

The remaining "stale" RAM words after the long route are byte data that happens to look like ROM addresses
(0x08080808, 0x08090B0F ...) or values inside decompressed buffers. None of them is ever dereferenced on the route.

## Moving data *inside* .rodata (Phase 3 findings)
Moving everything after crt0 keeps every object's neighbours. Edits move or resize single objects, which exposed three
more classes of dependency. All three are handled now:
1. **False pointers in byte streams.** A sound-sequence word at 0x083AE370 looked like a pointer to 0x082BD918.
   Converting it changed music command bytes when data moved, and the game crashed in the sound command dispatcher. Words inside
   odd-start objects in the sound region (0x2B8C38-0x3BFFFF) are no longer converted (`in_bytestream`, 55 words).
2. **Symbol ± constant in code.** Some blobs are members of fixed-layout structs (e.g. code reads `0x0807248C - 0xC` and
   `0x0807248C + 0x38`). `tools/bfdis/pinned.py` finds these and writes `config/pinned.txt`. The asset build never grows or moves them.
3. **Sizes from pointer differences.** Records such as the map record at 0x08250A20 hold consecutive object pointers, and
   the game derives sizes from `next - this`. Inserting a *gap* between such objects breaks them. Replacing an object (what
   edits do) doesn't. That's why the test inserts padding only at the start of rodata or after crt0, not between arbitrary labels.

**Stress test:** every one of the 13,183 WFZ containers was replaced by this repo's own compressor output (most change size).
In relocate mode (9,284 objects to the appendix) and in shift mode (everything after each object moves), the long route
is identical to the original except the 2 title-menu checkpoints.

## Known risks and open items
* **Coverage is what the route exercises.** Battles, shops, saving, other worlds and the multiplayer menu have not been
  played on a shifted build yet. A pointer used only there and classified as ambiguous would break. Extend
  `tools/harness/long.txt` (or record inputs) to cover more before relying on large moves.
* **Title-menu outline pixels:** the outline-text renderer (0x0803F7BE-0x0803F860) builds row masks in a stack array
  and reads one slot it never initialised. Leftover stack words (including return addresses) leak into the outline bits,
  so 4 pixels on the title menu change whenever code moves. It's an original-game quirk, not a relocation bug: all RAM besides that bitmap, plus OAM, palette and IO, is identical.
* **Pointers hidden in non-word form** would not be found by this scan: varint constants in script bytecode, 16-bit
  offsets plus a hard-coded base, or pointers inside WFZ-compressed blobs. None showed up on the tested route.
* **Even pointers to Thumb functions** are left as numbers on purpose. GNU ld ORs the Thumb bit into `R_ARM_ABS32`
  against a `.thumb_func` symbol, so a symbol would change the value. The 17 such words in .rodata look like noise.
* Words in `config/ptr_ambiguous.txt` that you know to be real pointers can be promoted by adding a rule in
  `tools/bfdis/ptrs.py`, or later by giving the structure a real definition in Phase 3.
