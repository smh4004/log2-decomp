/* sub_0800D818  (original: 0x0800D818-0x0800D838 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern ushort volatile DAT_030022b0;


undefined4 sub_0800D818(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_030022b0 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *param_2;
    uVar1 = __call_via_r3(param_2,param_3,iVar2,*(int *)(iVar2 + 4) + iVar2,param_4);
  }
  return uVar1;
}

