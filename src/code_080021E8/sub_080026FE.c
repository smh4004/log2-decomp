/* sub_080026FE  (original: 0x080026FE-0x08002724 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 11/11 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_080026FE(int *param_1)

{
  __call_via_r2(param_1,param_1[0x45],*(int *)(*param_1 + 0x3c) + *param_1);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

