/* sub_0801C834  (original: 0x0801C834-0x0801C85A in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801C834(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x2c) + *param_2);
  if (iVar1 == 0) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

