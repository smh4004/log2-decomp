/* sub_0801647A  (original: 0x0801647A-0x080164CC in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_0300109c;
extern int volatile DAT_030010a4;
extern int volatile DAT_030010a0;
extern int volatile DAT_030010a8;


undefined4 sub_0801647A(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pcVar3 = *(char **)(param_1 + 0x10);
  iVar5 = (*(int *)(param_1 + 0x18) >> 8) - (int)*pcVar3;
  *(int *)(param_1 + 0x28) = iVar5;
  iVar6 = (*(int *)(param_1 + 0x1c) >> 8) - (int)pcVar3[1];
  *(int *)(param_1 + 0x2c) = iVar6;
  bVar1 = pcVar3[2];
  iVar4 = iVar6 + (uint)(byte)pcVar3[3];
  *(int *)(param_1 + 0x34) = iVar4;
  *(uint *)(param_1 + 0x30) = iVar5 + (uint)bVar1;
  *(int *)(param_1 + 4) = iVar4;
  if ((((DAT_0300109c < (int)(iVar5 + (uint)bVar1)) && (iVar5 < DAT_030010a4)) &&
      (DAT_030010a0 < iVar4)) && (iVar6 < DAT_030010a8)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

