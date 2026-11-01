/* sub_080078A2  (original: 0x080078A2-0x080078CC in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08006528();


undefined4 sub_080078A2(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0xc);
  iVar2 = __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
  if (iVar2 == 0) {
    if (param_2 < 0xd) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = sub_08006528(param_1,param_2);
  }
  return uVar1;
}

