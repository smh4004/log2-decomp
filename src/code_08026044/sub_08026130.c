/* sub_08026130  (original: 0x08026130-0x08026144 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 8/8 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08026130(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}

