/* sub_0800E078  (original: 0x0800E078-0x0800E0AC in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int __call_via_r3();


void sub_0800E078(undefined4 param_1,int *param_2,int *param_3)

{
  param_3[0x54] = param_2[1];
  param_2[1] = 0;
  if (param_2 != (int *)0x0) {
    __call_via_r2(param_2,1,*(int *)*param_2 + *param_2);
  }
  __call_via_r3(param_3,0xb,0,*(int *)(*param_3 + 0x24) + *param_3);
  return;
}

