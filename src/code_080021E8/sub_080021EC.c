/* sub_080021EC  (original: 0x080021EC-0x08002220 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08001FE8();
extern int sub_08000B3C();
extern undefined2 volatile REG_BG0HOFS;
extern undefined2 volatile REG_BG0VOFS;
extern undefined2 volatile REG_BG1HOFS;
extern undefined1 volatile DAT_04000053;
extern undefined2 volatile REG_BG1VOFS;
extern undefined2 volatile REG_BG2HOFS;
extern undefined2 volatile REG_BG2VOFS;
extern undefined2 volatile REG_BG3HOFS;
extern undefined2 volatile REG_BG3VOFS;
extern undefined2 volatile REG_BLDCNT;
extern undefined1 volatile REG_BLDALPHA;


void sub_080021EC(undefined4 param_1)

{
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  sub_08000B3C(param_1);
  sub_08001FE8(param_1);
  REG_BLDCNT = 0x2c4f;
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  return;
}

