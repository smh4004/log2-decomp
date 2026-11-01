/* sub_0801340C  (original: 0x0801340C-0x08013424 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801340C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -0xc;
  __call_via_r2(param_2,0x2c,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}

