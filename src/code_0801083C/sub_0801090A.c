/* sub_0801090A  (original: 0x0801090A-0x08010940 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 54% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();


void sub_0801090A(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0xc);
  iVar1 = __call_via_r2(*(int **)(param_1 + 0xc),param_2,*(int *)(iVar1 + 8) + iVar1,param_4,param_4
                       );
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    __call_via_r1(param_2,*(int *)(*param_2 + 0x34) + *param_2);
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

