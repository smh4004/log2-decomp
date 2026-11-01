/* sub_0801EA42  (original: 0x0801EA42-0x0801EA58 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801EA42(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = **(int **)(param_1 + 8);
    iVar2 = *(int *)(iVar1 + 8);
    __call_via_r2(*(int **)(param_1 + 8),param_2,iVar2 + iVar1,iVar2,param_4);
  }
  return;
}

