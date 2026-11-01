/* sub_0800793A  (original: 0x0800793A-0x08007974 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


int * sub_0800793A(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 0x158) >> 8;
  iVar4 = *(int *)(param_2 + 0x15c) >> 8;
  bVar1 = *(byte *)(param_2 + 0x154);
  bVar2 = *(byte *)(param_2 + 0x155);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar3 + (uint)bVar1;
  param_1[3] = iVar4 + (uint)bVar2;
  return param_1 + 4;
}

