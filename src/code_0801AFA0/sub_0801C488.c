/* sub_0801C488  (original: 0x0801C488-0x0801C4AE in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


undefined4 sub_0801C488(int param_1,int *param_2,int param_3)

{
  if (*(int *)(param_3 + 4) == 0) {
    return 0;
  }
  __call_via_r3(param_2,(uint)(*(int *)(param_3 + 0x14) * *(int *)(param_1 + 0xc)) >> 0x10,param_3,
                *(int *)(*param_2 + 0x3c) + *param_2);
  return 0;
}

