/* sub_0801E81E  (original: 0x0801E81E-0x0801E836 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801E81E(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (0x5a < *(ushort *)((int)param_2 + 0x12)) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}

