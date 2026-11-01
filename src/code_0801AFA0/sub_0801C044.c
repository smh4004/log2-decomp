/* sub_0801C044  (original: 0x0801C044-0x0801C05A in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801C044(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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

