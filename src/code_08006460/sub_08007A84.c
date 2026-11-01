/* sub_08007A84  (original: 0x08007A84-0x08007B08 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 97% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030010ac;
extern int volatile DAT_030010b0;
extern int volatile DAT_030010a4;
extern int volatile DAT_0300109c;
extern int volatile DAT_030010a8;
extern int volatile DAT_030010a0;


undefined4 sub_08007A84(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(*(int *)(*(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x10) * 4) +
                   (uint)*(ushort *)(param_1 + 0x14) * 0xc);
  *(char **)(param_1 + 0x3c) = pcVar7;
  iVar4 = (*(int *)(param_1 + 0x158) >> 8) + (int)*pcVar7;
  bVar1 = pcVar7[2];
  bVar2 = pcVar7[3];
  iVar5 = (*(int *)(param_1 + 0x15c) >> 8) + (int)pcVar7[1];
  iVar6 = iVar5 - DAT_030010b0;
  *(int *)(param_1 + 0x40) = iVar4 - DAT_030010ac;
  *(int *)(param_1 + 0x44) = iVar6;
  *(uint *)(param_1 + 4) = iVar5 + (uint)bVar2;
  if ((((iVar4 < DAT_030010a4) && (DAT_0300109c < (int)(iVar4 + (uint)bVar1))) &&
      (iVar5 < DAT_030010a8)) && (DAT_030010a0 < (int)(iVar5 + (uint)bVar2))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

