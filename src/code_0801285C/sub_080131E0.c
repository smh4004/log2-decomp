/* sub_080131E0  (original: 0x080131E0-0x080131F8 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_080131E0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -2;
  __call_via_r2(param_2,0x22,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}

