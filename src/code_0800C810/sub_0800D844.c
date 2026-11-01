/* sub_0800D844  (original: 0x0800D844-0x0800D86E in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern ushort volatile DAT_030022b0;


undefined4 sub_0800D844(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_030022b0 & 1) == 0) || (*(char *)(param_1 + 4) != *(char *)(param_3 + 0x10))) {
    uVar1 = 0;
  }
  else {
    iVar2 = *param_2;
    uVar1 = __call_via_r3(param_2,param_3,iVar2,*(int *)(iVar2 + 4) + iVar2,param_4);
  }
  return uVar1;
}

