/* sub_0801B5C0  (original: 0x0801B5C0-0x0801B622 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_0801B5C0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 4) < *(int *)(param_1 + 8)) {
    piVar2 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
    iVar3 = *piVar2;
    iVar3 = __call_via_r2(piVar2,param_2,*(int *)(iVar3 + 4) + iVar3,param_4,param_4);
    if (iVar3 != 0) {
      piVar2 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
      iVar3 = *piVar2;
      __call_via_r2(piVar2,param_2,*(int *)(iVar3 + 8) + iVar3);
      iVar3 = *(int *)(param_1 + 4) + 1;
      *(int *)(param_1 + 4) = iVar3;
      if (*(int *)(param_1 + 8) <= iVar3) {
        return 1;
      }
      piVar2 = *(int **)(iVar3 * 4 + param_1 + 0xc);
      piVar4 = (int *)*piVar2;
      __call_via_r2(piVar2,param_2,*piVar4 + (int)piVar4);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

