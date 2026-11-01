/* sub_08007662  (original: 0x08007662-0x08007688 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08007662(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x1c);
  __call_via_r2(*(int **)(param_1 + 0x1c),param_1,*(int *)(iVar1 + 0xc) + iVar1,param_4,param_4);
  *(int **)(param_1 + 0x1c) = param_2;
  __call_via_r2(param_2,param_1,*(int *)*param_2 + *param_2);
  return;
}

