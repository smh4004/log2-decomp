/* sub_0800DF74  (original: 0x0800DF74-0x0800DF98 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_0800DF74(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 == 0) ||
     (iVar2 = __call_via_r2(param_2,iVar2,*(int *)(*param_2 + 0x2c) + *param_2,iVar2,param_4),
     iVar2 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

