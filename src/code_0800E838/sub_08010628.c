/* sub_08010628  (original: 0x08010628-0x0801066A in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


undefined4 sub_08010628(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 9) {
    *(undefined1 *)(param_1 + 5) = 0xff;
    uVar1 = 0;
  }
  else if (param_2 == 10) {
    iVar2 = *(int *)(*param_1 + 8);
    __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
    uVar1 = 0;
  }
  else if (param_2 == 0xf) {
    if (param_1[4] == param_3) {
      param_1[4] = 0;
    }
    uVar1 = 0;
  }
  else if (param_2 == 0x10) {
    *(undefined1 *)((int)param_1 + 0x17) = 0xff;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

