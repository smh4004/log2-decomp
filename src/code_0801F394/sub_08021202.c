/* sub_08021202  (original: 0x08021202-0x080212F2 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08021202(int param_1,int *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_2[2] - *param_2;
  iVar7 = param_2[3] - param_2[1];
  iVar2 = *(int *)(param_1 + 0x2c) - iVar6;
  puVar1 = (undefined1 *)
           (*(int *)(param_1 + 0x2c) * (param_2[1] + -3) + *(int *)(param_1 + 0x24) + *param_2 + -1)
  ;
  iVar3 = iVar6 + 2;
  iVar4 = iVar3;
  do {
    *puVar1 = param_3;
    puVar1 = puVar1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar1[iVar2 + -3] = param_3;
  puVar1[iVar2 + -2] = param_3;
  puVar1 = puVar1 + iVar2 + -1;
  iVar4 = iVar6;
  do {
    puVar5 = puVar1;
    *puVar5 = param_4;
    iVar4 = iVar4 + -1;
    puVar1 = puVar5 + 1;
  } while (iVar4 != 0);
  puVar5[1] = param_3;
  puVar5[2] = param_3;
  puVar5[iVar2 + -2] = param_3;
  puVar5[iVar2 + -1] = param_3;
  puVar5[iVar2] = param_4;
  puVar1 = puVar5 + iVar2 + 1;
  iVar4 = iVar6;
  do {
    puVar5 = puVar1;
    *puVar5 = param_3;
    iVar4 = iVar4 + -1;
    puVar1 = puVar5 + 1;
  } while (iVar4 != 0);
  puVar5[1] = param_4;
  puVar5[2] = param_3;
  puVar5[3] = param_3;
  puVar5 = puVar5 + iVar2 + -2;
  iVar4 = 0;
  if (0 < iVar7) {
    do {
      *puVar5 = param_3;
      puVar5[1] = param_4;
      puVar5[2] = param_3;
      puVar5 = puVar5 + iVar6 + 3;
      *puVar5 = param_3;
      puVar5[1] = param_4;
      puVar5[2] = param_3;
      puVar5 = puVar5 + iVar2 + -3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
  *puVar5 = param_3;
  puVar5[1] = param_3;
  puVar5[2] = param_4;
  puVar1 = puVar5 + 3;
  iVar4 = iVar6;
  do {
    puVar5 = puVar1;
    *puVar5 = param_3;
    iVar4 = iVar4 + -1;
    puVar1 = puVar5 + 1;
  } while (iVar4 != 0);
  puVar5[1] = param_4;
  puVar5[2] = param_3;
  puVar5[3] = param_3;
  puVar5[iVar2 + -1] = param_3;
  puVar5[iVar2] = param_3;
  puVar1 = puVar5 + iVar2 + 1;
  do {
    puVar5 = puVar1;
    *puVar5 = param_4;
    iVar6 = iVar6 + -1;
    puVar1 = puVar5 + 1;
  } while (iVar6 != 0);
  puVar5[1] = param_3;
  puVar5[2] = param_3;
  puVar5 = puVar5 + iVar2;
  do {
    *puVar5 = param_3;
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

