/* sub_08006E0A  (original: 0x08006E0A-0x08006E64 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 55% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r3();


int sub_08006E0A(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4) + -1;
  if (-1 < iVar3) {
    param_4 = param_1 + 4;
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_4 + 4);
      iVar2 = *piVar1;
      iVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar2 + 0x24) + iVar2);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x40c);
  do {
    if (iVar3 + -1 < 0) {
      return 0;
    }
    piVar1 = (int *)((int *)(param_1 + 0x40c))[iVar3];
    iVar2 = *piVar1;
    iVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar2 + 0x24) + iVar2,param_4);
    iVar3 = iVar3 + -1;
  } while (iVar2 == 0);
  return iVar2;
}

