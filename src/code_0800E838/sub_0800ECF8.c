/* sub_0800ECF8  (original: 0x0800ECF8-0x0800ED4E in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030010ac;
extern int volatile DAT_030010b0;


undefined4 sub_0800ECF8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x14) >> 8;
  *(int *)(param_1 + 4) = iVar2;
  iVar3 = (*(int *)(param_1 + 0x10) >> 8) - DAT_030010ac;
  *(int *)(param_1 + 0x24) = iVar2 - DAT_030010b0;
  *(int *)(param_1 + 0x20) = iVar3;
  if ((((*(int *)(param_1 + 0x20) < -7) || (0xef < *(int *)(param_1 + 0x20))) ||
      (*(int *)(param_1 + 0x24) < -7)) || (0x9f < *(int *)(param_1 + 0x24))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

