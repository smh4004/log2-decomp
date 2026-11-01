/* sub_08002928  (original: 0x08002928-0x08002962 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_0801F2CE();
extern int __call_via_r1();


undefined4 sub_08002928(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[0x46];
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    if (iVar2 == 1) {
      iVar2 = *(int *)(*param_1 + 0x4c);
      __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
      sub_0801F2CE();
    }
    else if (iVar2 == 2) {
      iVar2 = *(int *)(*param_1 + 0x50);
      __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
      sub_0801F2CE();
    }
    uVar1 = 0;
  }
  return uVar1;
}

