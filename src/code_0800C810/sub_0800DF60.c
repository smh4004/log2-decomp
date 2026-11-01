/* sub_0800DF60  (original: 0x0800DF60-0x0800DF74 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800DF60(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,*(undefined4 *)(param_1 + 8),*(int *)(*param_2 + 0x28) + *param_2,param_1,
                param_4);
  return;
}

