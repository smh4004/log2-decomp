/* sub_0800AA7C  (original: 0x0800AA7C-0x0800AAAE in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03000eb0;


void sub_0800AA7C(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  (&DAT_03000eb0)[param_1[iVar2 + -1] * 7] =
       (&DAT_03000eb0)[param_1[iVar2 + -1] * 7] | 4 << (uVar1 & 0xff);
  return;
}

