/* sub_0801D6A8  (original: 0x0801D6A8-0x0801D72E in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801D5D0();


void sub_0801D6A8(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sub_0801D5D0();
  if (*(int *)(param_1 + 0x10) == iVar1) {
    if (*(int *)(param_1 + 0x10) == 0) {
      piVar2 = *(int **)(param_1 + 8);
    }
    else {
      piVar2 = *(int **)(param_1 + 0xc);
    }
    __call_via_r2(piVar2,param_2,*(int *)(*piVar2 + 4) + *piVar2);
  }
  else {
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0) {
      iVar1 = **(int **)(param_1 + 0xc);
      __call_via_r2(*(int **)(param_1 + 0xc),param_2,*(int *)(iVar1 + 8) + iVar1);
      piVar2 = (int *)**(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,*piVar2 + (int)piVar2);
      iVar1 = **(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,*(int *)(iVar1 + 4) + iVar1);
    }
    else {
      iVar1 = **(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,*(int *)(iVar1 + 8) + iVar1);
      piVar2 = (int *)**(int **)(param_1 + 0xc);
      __call_via_r2(*(int **)(param_1 + 0xc),param_2,*piVar2 + (int)piVar2);
      iVar1 = **(int **)(param_1 + 0xc);
      __call_via_r2(*(int **)(param_1 + 0xc),param_2,*(int *)(iVar1 + 4) + iVar1);
    }
  }
  return;
}

