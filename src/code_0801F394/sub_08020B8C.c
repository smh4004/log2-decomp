/* sub_08020B8C  (original: 0x08020B8C-0x08020BAC in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int WaitForVBlank();
extern undefined2 volatile REG_SOUNDCNT_X;
extern undefined2 volatile DAT_040000d2;
extern undefined2 volatile DAT_04000102;
extern undefined4 volatile DAT_03000e3c;
extern undefined2 volatile DAT_040000c6;


void sub_08020B8C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  WaitForVBlank(&DAT_03000e3c,0x400,param_3,param_4,param_4);
  DAT_04000102 = 0;
  DAT_040000c6 = 0;
  DAT_040000d2 = 0;
  REG_SOUNDCNT_X = 0;
  return;
}

