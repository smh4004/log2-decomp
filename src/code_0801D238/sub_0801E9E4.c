/* sub_0801E9E4  (original: 0x0801E9E4-0x0801EA42 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801E8B4();


undefined4 sub_0801E9E4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = sub_0801E8B4();
  if (*(int *)(param_1 + 4) == iVar1) {
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = **(int **)(param_1 + 8);
      uVar2 = __call_via_r2(*(int **)(param_1 + 8),param_2,*(int *)(iVar1 + 4) + iVar1);
    }
  }
  else {
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      iVar1 = **(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,*(int *)(iVar1 + 8) + iVar1);
      uVar2 = 0;
    }
    else {
      piVar3 = (int *)**(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,*piVar3 + (int)piVar3);
      iVar1 = **(int **)(param_1 + 8);
      uVar2 = __call_via_r2(*(int **)(param_1 + 8),param_2,*(int *)(iVar1 + 4) + iVar1);
    }
  }
  return uVar2;
}

