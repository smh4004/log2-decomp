/* sub_08006078  (original: 0x08006078-0x080060B0 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08006078(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 8) = param_2[1];
  iVar1 = *param_2;
  iVar2 = param_2[1];
  *(int *)(param_1 + 0xc) = iVar1 >> 10;
  *(int *)(param_1 + 0x10) = iVar2 >> 10;
  *(int *)(param_1 + 0x14) = (iVar1 >> 10) + 0xf0;
  *(int *)(param_1 + 0x18) = (iVar2 >> 10) + 0xa0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x24) >> 10;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x28) >> 10;
  return;
}

