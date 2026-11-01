# Original toolchain: ARM ADS 1.x (armcpp/tcpp + armlink), not GCC

**Verdict:** Buu's Fury was compiled with ARM's own C++ compiler from the ARM Developer Suite (most likely ADS 1.1/1.2,
`tcpp` for Thumb code) and linked with `armlink` against the ARM C library. It was not built with GCC/devkitadv.
This decides Phase 4: a matching C/C++ decompilation needs the proprietary ADS compiler, not agbcc or a GCC.

Every item below was checked against `baserom.gba`. Addresses are bus addresses.

## Evidence

| # | Observation | Where | Why it points to ADS |
|---|---|---|---|
| 1 | Signed divide is ARM-mode code entered via `bx pc; nop`. It takes the **divisor in r0 and the dividend in r1** and uses the unrolled `rsbs ip, r0, r1, lsr #n` ladder | `0x08046E58` (Thumb stub) -> ARM `0x08046E5C` | This is ARM's `__rt_sdiv`/`__16__rt_sdiv`. libgcc's `__divsi3` takes (dividend, divisor) and is Thumb code with a different loop |
| 2 | Word-fill memset (`and r3,r1,#0xff; orr r2,r3,r3,lsl #8; orr r2,r2,r2,lsl #16`) | `0x08046E44` | ARM C library `__rt_memset`/`_memset_w` pattern |
| 3 | String literals sit **inside the code area**, right after the functions that use them (`T:\Source\ByteCodeInterpreter\ByteCodeInterpreter.cpp` at 0x08004160, `GameData.cpp` 0x08004818, ...) | text | armcc/tcc places constant data in the code AREA. GCC puts it in `.rodata`, which the linker gathers after all `.text` |
| 4 | Thumb functions push a dummy `r3` to keep the stack 8-byte aligned: `push {r3, lr}` x721, odd-sized push lists ending in r3 x1449 | everywhere | ADS 1.1+/RVCT ATPCS "PRESERVE8" stack alignment. GCC 2.9x/3.x never does this |
| 5 | Switches compile to `cmp rI,#N; bhs d; adr rT,tbl; [add rT,rT,rI; ldrh | ldrb] rT,[rT,rI]; lsl rT,#1; add pc,rT` with halfword or byte offset tables | 21 tables, e.g. 0x08005AC8 | The armcc Thumb switch idiom. GCC 2.9x Thumb uses a word table of absolute addresses with `ldr`/`mov pc` |
| 6 | Indirect calls go through 2-byte stubs `bx r0; bx r1; ... bx r7` packed back to back (no `nop` between) | `0x08046AA0`, 1,266 call sites | ADS `__call_via_rN`. libgcc's `_call_via_rN` are 4 bytes each (`bx rN; nop`) |
| 7 | Interworking veneers: `bx pc; mov r8,r8; ldr pc,[pc,#-4]; .word T` (Thumb->ARM long), `bx pc; mov r8,r8; b T` (short), `ldr ip,[pc]; bx ip; .word T+1` (ARM->Thumb), all in one block | `0x08049114-0x080491EF` | armlink veneers, collected into one area between objects. GNU ld of 2004 (binutils 2.1x in devkitadv) emitted `__x_from_thumb` glue in a `.glue_7t` section instead. Modern ld has a similar long stub, so this row is supporting evidence only |
| 8 | C++ static constructors listed in a table of **entry-relative** offsets | `0x08048ED8-0x08049113` (143 entries) | ADS `C$$pi_ctorvec` walked by `__cpp_initialise` |
| 9 | C++ vtables hold **base-relative** offsets (`target = vptr + entry`, bit 0 = Thumb). Calls: `ldr r1,[obj]; ldr r2,[r1,#k]; add r1,r2,r1; bl __call_via_r1` | `0x080491F0-0x0804E48F`, 693 vtables | armcpp's position-independent vtable layout. GCC 2.9x/3.x vtables hold absolute addresses |
| 10 | Multiple-inheritance thunks in ARM: `ldr ip,[pc,#8]; sub r0,r0,#k; add ip,pc,ip; bx ip; .word rel` | e.g. 0x0804993C | armcpp this-adjusting thunk |
| 11 | ARM immediates use non-canonical rotations (`mov r0,#64 ror 12` instead of `#1 ror 6`) | crt0, ARM library | `armasm`/armcc encoding choice. GNU as always picks the smallest rotation |
| 12 | crt0 is Nintendo's AGB SDK `crt0.s` (IRQ/SYS stack setup, WAITCNT=0x4014, DMA3 clears IWRAM bss and copies the RW image `0x087B79A4 -> 0x03000000`, size 0x1004, then branches to `AgbMain` through a veneer) | 0x080000C0 | Shipped with both toolchains, so neutral. The RW-image layout (RO code, RO data, then a single RW region) is armlink's default scatter layout |

No GCC or libgcc fingerprints were found: no `GCC:` ident strings, no `__divsi3`/`__udivsi3`/`_call_via_rX` and no `.ctors` arrays.

## Consequences for this project

* **Assembly matching:** GNU `as` reproduces almost every instruction. Exceptions:
  * ARM immediates with non-canonical rotation. Emitted as `#imm8, rot`, which gas encodes verbatim.
  * Two Thumb `adds rD, rD, #imm3` (format-2 encoding where gas picks format 3).
  * Two `bx r8` with non-zero SBZ bits.
  * One false-positive ARM decode inside the vtable area.

  The last three are emitted raw and listed in `config/raw_insns.txt`.
* **Pointers:** vtable and ctor entries and thunk literals are relative. They are emitted as `sym+1 - base`, `sym+1 - .` and
  `sym - anchor`, so they stay correct when code moves.
* **Decompilation (Phase 4):** needs ADS 1.2 `tcpp` (Windows, runs under Wine) with flags of the form `-O2 -Otime/-Ospace -apcs /interwork`.
  GCC-based decomp tooling (agbcc, decomp.me GBA presets) cannot match this code. See `docs/decomp_scope.md`.

## Compiler experiment (Phase 4)
The previous generation, ARM SDT 2.51 (`tcc`/`tcpp` Linux builds from the 3DO homebrew devkit), compiles a C reconstruction
of the script-VM opcode handlers to code that is identical except for instruction scheduling, register choice and the
ADS-only details: `push {r3, lr}` stack alignment and `pop {.., pc}` returns. It also uses the same `__call_via_rN` and
`__rt_sdiv` helpers. That confirms an ARM Norcroft-family compiler, specifically **ADS 1.1/1.2**. See `docs/decomp_scope.md`.

## Not yet pinned down
* Exact ADS version (1.1 vs 1.2) and flags. Matching a few functions with an ADS `tcpp` would settle it.
