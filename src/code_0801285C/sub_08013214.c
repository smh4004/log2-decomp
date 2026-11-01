/* sub_08013214  (original: 0x08013214-0x0801322C in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08013214(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -2;
  __call_via_r2(param_2,0x30,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}

