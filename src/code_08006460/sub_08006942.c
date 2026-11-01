/* sub_08006942  (original: 0x08006942-0x080069A4 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 43% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08026528();


void sub_08006942(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  piVar4 = (int *)(param_1 + 4);
  if (0 < *(int *)(param_1 + 4)) {
    do {
      if (piVar4[iVar2 + 1] == param_2) goto _08006964;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = -1;
_08006964:
  if (iVar2 == -1) {
    piVar1 = (int *)(param_1 + 0x40c);
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *piVar1) {
      do {
        iVar2 = piVar1[iVar3 + 1];
        if (iVar2 == param_2) goto _08006990;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar1);
    }
    iVar3 = -1;
_08006990:
    sub_08026528(piVar1,iVar3,iVar3,iVar2,param_4);
    iVar2 = *piVar4;
    *piVar4 = iVar2 + 1;
    piVar4[iVar2 + 1] = param_3;
  }
  else {
    piVar4[iVar2 + 1] = param_3;
  }
  return;
}

