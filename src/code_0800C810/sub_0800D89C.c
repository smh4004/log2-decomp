/* sub_0800D89C  (original: 0x0800D89C-0x0800D8AE in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 1/1 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_0800D89C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  __call_via_r3(param_2,param_3,iVar1,*(int *)(iVar1 + 4) + iVar1,param_4);
  return;
}

