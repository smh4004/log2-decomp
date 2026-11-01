/* sub_0801B622  (original: 0x0801B622-0x0801B63E in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801B622(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) < *(int *)(param_1 + 8)) {
    piVar1 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
    iVar2 = *piVar1;
    iVar3 = *(int *)(iVar2 + 8);
    __call_via_r2(piVar1,param_2,iVar3 + iVar2,iVar3,param_4);
  }
  return;
}

