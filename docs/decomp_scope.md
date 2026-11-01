# Phase 4: scoping a C/C++ decompilation

## Short answer
* **A matching decomp needs ARM ADS 1.1/1.2 `tcpp`** (Thumb C++). It's the only compiler that will reproduce this code. It's
  proprietary, Windows-only and not on decomp.me, so you'd need your own licensed copy running under Wine. GCC/agbcc
  can't match it.
* **For Legacy of Goku 4 it isn't worth it.** The shiftable disassembly already lets you change code and data at the source level.
  New mechanics are easier to write in C with the free GCC toolchain and link next to the existing assembly
  (non-matching "modern" path), hooking in through the symbolic `bl`/vtable/table entries.

## What I tried

The SDT 2.51 compilers (the generation before ADS) exist as Linux binaries in the 3DO homebrew devkit
(`github.com/trapexit/3do-devkit`, `bin/compiler/linux/{armcc,armcpp,tcc,tcpp}`). I compiled the first three script-VM
opcode handlers from my C reconstruction (`decomp/vmops.c`, output `decomp/vmops_sdt251.s`):

| Function | Original (ROM) | SDT 2.51 `tcc -O2` | Difference |
|---|---|---|---|
| `ScriptOp_00` push u8 (0x08003C74, 11 insns) | `... adds r2,r1,#1 / str r2,[r0] / lsls r1,r1,#2 ...` | `... ADD r2,r1,#1 / LSL r1,#2 / STR r2,[r0] ...` | one pair of instructions scheduled differently, otherwise identical |
| `ScriptOp_01` push varint (0x08003C8A) | uses `r4`, `bmi` loop test | uses `r7`, `LSR #8 / BCS` loop test | register allocation and condition idiom |
| `ScriptOp_02` call native (0x08003CBE) | `push {r3, lr} ... bl __call_via_r1 / pop {r3, pc}` | `PUSH {lr} ... BL __call_via_r1 / POP {r3} / BX r3` | ADS 8-byte stack alignment (dummy `r3`) and `pop {pc}` return |

Every difference is a known change between SDT 2.5x and ADS 1.1+ (PRESERVE8 stack alignment, new scheduler and
register allocator). The C itself is right. The runtime helpers line up too: `__call_via_rN` (0x08046AA0) and
`__rt_sdiv` with the divisor in r0. So the original toolchain is **ADS 1.1 or 1.2 `tcpp`**, probably `-O2`, without
`/interwork` for Thumb-to-Thumb returns (it pops straight into `pc`).

## If you ever do it
1. **Compiler:** ADS 1.2 (build 848 is the common one) `tcpp.exe` under Wine. Write a `cc` wrapper that runs it and converts its
   AOF objects to ELF. ADS `fromelf`/`armlink` can produce ELF, or you can compare against the disassembly with objdiff
   using the `-S` assembly output.
2. **Workflow:** per-function matching like decomp.me, but local: `objdiff` (supports ARM ELF) against
   `build/asm/code_*.o`. Replace a function's `asm` body with a `.incbin`-free C object one function at a time, then rerun
   `make compare`.
3. **C++ specifics:** vtables are base-relative and the ctor vector is entry-relative. Classes need their member layouts
   recovered from constructors, which store vptrs at known offsets (the 693 vtables in `asm/code_0804*`).
4. **Effort:** about 4,700 functions / 300 KB of Thumb. With a working ADS setup, small leaf functions take minutes and
   large C++ methods take hours. A full decomp is a multi-person, multi-month project. A *partial* decomp of the systems you care about (script natives,
   battle math, menus) is a few weeks of focused work.

## Recommended path for the hack (no decomp needed)
* Keep the game's code as the shiftable disassembly (it already supports inserting or removing code and data).
* Write new code in C with `arm-none-eabi-gcc -mthumb -mthumb-interwork -O2`, add the object to the link, and call it
  from assembly (`bl MyNewFunction`) or plug it into a table (native script functions at `gScriptNativeFuncs`, vtables).
  GCC and ADS agree on the ATPCS calling convention for plain C functions. Don't throw C++ exceptions or use RTTI across the boundary.
* Use `make compare` while refactoring to make sure an edit didn't change anything unintended. Use `make modern` for builds with your changes.

**[ASK]** Do you want me to set up the "new code in C" path next, with a sample native script function linked into the
ROM, or would you rather invest in an ADS-based matching decomp (only if you can get a licensed ADS 1.2)?
