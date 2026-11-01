/* sub_080135B8  (original: 0x080135B8-0x080135E0 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080135B8(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = *(char **)(param_1 + 0x3c);
  iVar3 = *(int *)(param_1 + 0x10) - (int)*pcVar2;
  *(int *)(param_1 + 0x20) = iVar3;
  iVar4 = *(int *)(param_1 + 0x14) - (int)pcVar2[1];
  *(int *)(param_1 + 0x24) = iVar4;
  bVar1 = pcVar2[2];
  *(uint *)(param_1 + 0x2c) = iVar4 + (uint)(byte)pcVar2[3];
  *(uint *)(param_1 + 0x28) = iVar3 + (uint)bVar1;
  return;
}

