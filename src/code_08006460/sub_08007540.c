/* sub_08007540  (original: 0x08007540-0x08007552 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 2/2 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08007540(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}

