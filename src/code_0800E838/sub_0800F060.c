/* sub_0800F060  (original: 0x0800F060-0x0800F0CA in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0802141C();


void sub_0800F060(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x20) + -1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      puVar2 = *(undefined4 **)(iVar1 + 0x14);
      uVar4 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined4 *)(iVar1 + 0x18) = *puVar2;
      *(undefined4 *)(iVar1 + 0x1c) = uVar4;
      *(undefined4 *)(iVar1 + 0x20) = uVar8;
      *(undefined4 *)(iVar1 + 0x24) = uVar9;
    }
    else if (-1 < iVar1 * 0x40000000) {
      iVar1 = sub_0802141C(5);
      iVar3 = sub_0802141C(3);
      iVar5 = *(int *)(param_1 + 0x28);
      piVar6 = *(int **)(iVar5 + 0x14);
      iVar10 = piVar6[1];
      iVar11 = piVar6[2];
      iVar7 = piVar6[3];
      *(int *)(iVar5 + 0x18) = *piVar6 + iVar1 + -2;
      *(int *)(iVar5 + 0x1c) = iVar10 + iVar3 + -1;
      *(int *)(iVar5 + 0x20) = iVar11 + iVar1 + -2;
      *(int *)(iVar5 + 0x24) = iVar7 + iVar3 + -1;
    }
  }
  return;
}

