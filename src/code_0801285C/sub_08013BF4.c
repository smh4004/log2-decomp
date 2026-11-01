/* sub_08013BF4  (original: 0x08013BF4-0x08013C22 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08013BF4(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  iVar3 = (*(int *)(param_1 + 0x20) >> 8) - (int)*pcVar2;
  *(int *)(param_1 + 0x28) = iVar3;
  iVar4 = (*(int *)(param_1 + 0x24) >> 8) - (int)pcVar2[1];
  *(int *)(param_1 + 0x2c) = iVar4;
  bVar1 = pcVar2[2];
  iVar4 = iVar4 + (uint)(byte)pcVar2[3];
  *(int *)(param_1 + 0x34) = iVar4;
  *(uint *)(param_1 + 0x30) = iVar3 + (uint)bVar1;
  *(int *)(param_1 + 4) = iVar4;
  return;
}

