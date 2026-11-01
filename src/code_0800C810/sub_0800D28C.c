/* sub_0800D28C  (original: 0x0800D28C-0x0800D2C8 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 70% of instructions covered.
 */
#include "ghidra_types.h"


bool sub_0800D28C(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  
  piVar2 = (int *)(param_2 + 0x158);
  *piVar2 = *piVar2 + *(int *)(param_1 + 4);
  *(int *)(param_2 + 0x15c) = *(int *)(param_2 + 0x15c) + *(int *)(param_1 + 8);
  sVar3 = *(short *)(param_1 + 0x10) + -1;
  *(short *)(param_1 + 0x10) = sVar3;
  if (sVar3 == 0) {
    sVar1 = *(short *)(param_1 + 0xe);
    *piVar2 = (int)*(short *)(param_1 + 0xc) << 8;
    *(int *)(param_2 + 0x15c) = (int)sVar1 << 8;
  }
  return sVar3 == 0;
}

