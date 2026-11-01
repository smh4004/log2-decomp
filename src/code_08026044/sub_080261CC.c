/* sub_080261CC  (original: 0x080261CC-0x080261E0 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/4 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_080261CC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}

