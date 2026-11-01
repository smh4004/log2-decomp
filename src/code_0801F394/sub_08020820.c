/* sub_08020820  (original: 0x08020820-0x0802090C in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08020820(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(char *)(param_1 + 1) + 1;
  *(byte *)(param_1 + 1) = bVar1;
  if (*(byte *)(param_1 + 2) <= bVar1) {
    iVar6 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar6;
    piVar2 = *(int **)(param_1 + 0xc);
    if (*(char *)(piVar2[1] + iVar6) == -1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    puVar3 = *(undefined1 **)(*piVar2 + (uint)*(byte *)(piVar2[1] + *(int *)(param_1 + 0x10)) * 4);
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
    *(undefined1 *)(param_1 + 2) = *puVar3;
  }
  iVar6 = 0;
  do {
    iVar7 = iVar6 * 0x60;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar7 + param_1 + 0x70) = 0;
  } while (iVar6 < 0xf);
  while( true ) {
    pbVar4 = *(byte **)(param_1 + 0x14);
    *(byte **)(param_1 + 0x14) = pbVar4 + 1;
    bVar1 = *pbVar4;
    if (bVar1 == 0) break;
    iVar6 = ((bVar1 & 0xf) - 1) * 0x60 + param_1;
    uVar5 = (uint)(bVar1 >> 4);
    if (uVar5 == 0) {
      *(byte **)(param_1 + 0x14) = pbVar4 + 2;
      bVar1 = pbVar4[1];
      *(byte *)(iVar6 + 0x71) = bVar1;
      *(byte *)(iVar6 + 0x70) = bVar1;
    }
    else if (uVar5 == 1) {
      *(undefined1 *)(iVar6 + 0x70) = *(undefined1 *)(iVar6 + 0x71);
    }
    else {
      *(undefined1 *)(iVar6 + 0x70) =
           *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc) + uVar5 + -2);
    }
    uVar5 = (uint)*(byte *)(iVar6 + 0x70);
    if ((int)(uVar5 << 0x1f) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x72) = *puVar3;
    }
    if ((int)(uVar5 << 0x1e) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x73) = *puVar3;
    }
    if ((int)(uVar5 << 0x1d) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x74) = *puVar3;
    }
    if ((int)(uVar5 << 0x1c) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x75) = *puVar3;
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x76) = *puVar3;
    }
  }
  return;
}

