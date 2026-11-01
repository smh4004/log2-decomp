/* sub_08007974  (original: 0x08007974-0x080079B8 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int * sub_08007974(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*(int *)(param_2 + 0x158) >> 8) + (int)**(char **)(param_2 + 0x3c);
  iVar4 = (*(int *)(param_2 + 0x15c) >> 8) + (int)(*(char **)(param_2 + 0x3c))[1];
  bVar1 = *(byte *)(*(int *)(param_2 + 0x3c) + 2);
  bVar2 = *(byte *)(*(int *)(param_2 + 0x3c) + 3);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar3 + (uint)bVar1;
  param_1[3] = iVar4 + (uint)bVar2;
  return param_1 + 4;
}

