/* sub_0800CCE6  (original: 0x0800CCE6-0x0800CCFA in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800CCE6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1[2] != 0) {
    iVar1 = *(int *)(*param_1 + 0x14);
    __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  }
  return;
}

