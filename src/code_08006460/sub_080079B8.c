/* sub_080079B8  (original: 0x080079B8-0x08007A26 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_080079B8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_2 + 0x48) + (uint)*(byte *)(param_2 + 0x10) * 0x10;
  iVar5 = *(int *)(param_2 + 0x158) >> 8;
  iVar3 = *(int *)(param_2 + 0x15c) >> 8;
  iVar6 = *(int *)(iVar1 + 0x10);
  iVar4 = *(int *)(iVar1 + 0x14);
  iVar2 = *(int *)(iVar1 + 0x18);
  *param_1 = *(int *)(iVar1 + 0xc) + iVar5;
  param_1[1] = iVar6 + iVar3;
  param_1[2] = iVar4 + iVar5;
  param_1[3] = iVar2 + iVar3;
  return;
}

