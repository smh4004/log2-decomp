/* sub_0800CF00  (original: 0x0800CF00-0x0800CF34 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E41C();
extern int sub_0800E438();


int sub_0800CF00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  sub_0800E41C(param_2,param_1 + 0x28,1,param_4,param_4);
  iVar1 = sub_0800E438(param_2);
  iVar2 = param_1 + 0x38;
  if (iVar1 == 0) {
    iVar2 = param_1 + 0x28;
  }
  sub_0800E41C(param_2,iVar2,0);
  return iVar1;
}

