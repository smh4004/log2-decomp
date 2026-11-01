/* sub_0801A6E0  (original: 0x0801A6E0-0x0801A706 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


undefined4 sub_0801A6E0(undefined4 param_1,int *param_2,undefined1 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_2 + 99) = *param_3;
    uVar1 = __call_via_r3(param_2,param_3 + 0x10,param_3,*(int *)(*param_2 + 0x38) + *param_2,
                          param_4);
  }
  return uVar1;
}

