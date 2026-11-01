/* sub_08003C6E  (original: 0x08003C6E-0x08003CA0 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0802141C();


void sub_08003C6E(ushort *param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sub_0802141C(param_2 * (((uint)param_1[1] - (uint)*param_1) + 1));
  uVar2 = iVar1 + param_2 * (uint)*param_1 + (uint)*param_3;
  *param_3 = (ushort)uVar2;
  if (0x6400 < (uVar2 & 0xffff)) {
    *param_3 = 0x6400;
  }
  return;
}

