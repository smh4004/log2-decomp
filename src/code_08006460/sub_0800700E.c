/* sub_0800700E  (original: 0x0800700E-0x0800712E in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 22% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006AD8();
extern int sub_0801F566();
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_08026528();
extern undefined volatile DAT_030022bc;


void sub_0800700E(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int local_28;
  
  local_28 = 0;
  if (*(int *)(param_1 + 4) == 0x80) {
    iVar3 = 0;
  }
  else {
    uVar7 = 0;
    bVar1 = *param_1;
    while (uVar2 = (uint)bVar1, uVar2 != 0xff) {
      if (uVar7 < *(ushort *)(param_1 + uVar2 * 10 + 0x698)) {
        uVar7 = (uint)*(ushort *)(param_1 + uVar2 * 10 + 0x698);
      }
      bVar1 = param_1[uVar2 * 10 + 0x69c];
    }
    iVar3 = uVar7 << 6;
  }
  if (iVar3 < param_2) {
    pbVar9 = param_1 + 4;
    pbVar4 = param_1 + 0x40c;
    pbVar8 = param_1 + 0x208;
    do {
      iVar3 = *(int *)(param_1 + 4);
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        piVar5 = *(int **)(pbVar9 + iVar3 * 4 + 4);
        iVar6 = __call_via_r2(piVar5,local_28,*(int *)(*piVar5 + 0x18) + *piVar5);
        if (iVar6 == 1) {
          __call_via_r1(piVar5,*(int *)(*piVar5 + 4) + *piVar5);
          sub_08026528(pbVar9,iVar3);
        }
        else if (iVar6 == 2) {
          __call_via_r1(piVar5,*(int *)(*piVar5 + 0x1c) + *piVar5);
          iVar6 = *(int *)pbVar4;
          *(int *)pbVar4 = iVar6 + 1;
          *(int **)(pbVar4 + iVar6 * 4 + 4) = piVar5;
          sub_08026528(pbVar9,iVar3);
        }
      }
      sub_08006AD8(param_1);
      sub_0801F566(&DAT_030022bc);
      iVar3 = *(int *)pbVar8;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        iVar6 = **(int **)(pbVar8 + iVar3 * 4 + 4);
        __call_via_r1(*(int **)(pbVar8 + iVar3 * 4 + 4),*(int *)(iVar6 + 0x14) + iVar6);
      }
      pbVar8[0] = 0;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
      local_28 = local_28 + 1;
      if (*(int *)(param_1 + 4) == 0x80) {
        iVar3 = 0;
      }
      else {
        uVar7 = 0;
        bVar1 = *param_1;
        while (uVar2 = (uint)bVar1, uVar2 != 0xff) {
          if (uVar7 < *(ushort *)(param_1 + uVar2 * 10 + 0x698)) {
            uVar7 = (uint)*(ushort *)(param_1 + uVar2 * 10 + 0x698);
          }
          bVar1 = param_1[uVar2 * 10 + 0x69c];
        }
        iVar3 = uVar7 << 6;
      }
    } while (iVar3 < param_2);
  }
  return;
}

