/* sub_0800D8B8  (original: 0x0800D8B8-0x0800D8EA in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int volatile DAT_03002064;


undefined4 sub_0800D8B8(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = DAT_03002064 == *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = DAT_03002064;
  if (bVar2) {
    return 0;
  }
  uVar1 = __call_via_r3(param_2,param_3,param_3,*(int *)(*param_2 + 4) + *param_2);
  return uVar1;
}

