/* sub_08006E64  (original: 0x08006E64-0x08006ED0 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 36% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r3();


int sub_08006E64(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = 0;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
    iVar3 = *piVar1;
    iVar3 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar3 + 0x24) + iVar3);
    if (iVar3 != 0) {
      iVar5 = iVar5 + 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x40c);
  while (iVar3 = iVar4 + -1, -1 < iVar3) {
    piVar1 = (int *)((int *)(param_1 + 0x40c))[iVar4];
    iVar4 = *piVar1;
    iVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar4 + 0x24) + iVar4);
    iVar4 = iVar3;
    if (iVar2 != 0) {
      iVar5 = iVar5 + 1;
    }
  }
  return iVar5;
}

