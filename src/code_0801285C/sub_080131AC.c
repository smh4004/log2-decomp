/* sub_080131AC  (original: 0x080131AC-0x080131C4 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_080131AC(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -6;
  __call_via_r2(param_2,0x2f,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}

