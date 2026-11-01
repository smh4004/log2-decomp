/* sub_0801AC16  (original: 0x0801AC16-0x0801ACAC in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E41C();
extern int __call_via_r2();
extern int sub_0800E438();
extern int sub_0800793A();


undefined4 sub_0801AC16(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[15];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_3c ((undefined1 *)((char *)__frame + 0x0))
#define auStack_2c ((undefined1 *)((char *)__frame + 0x10))
#define piStack_1c (*(int * *)((char *)__frame + 0x20))
#define piStack_18 (*(int * *)((char *)__frame + 0x24))
  iVar1 = __call_via_r2(param_2,2,*(int *)(*param_2 + 0x2c) + *param_2);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800793A(auStack_2c,param_2);
    piStack_18 = param_2 + 0x56;
    piStack_1c = (int *)(param_1 + 4);
    *piStack_18 = *piStack_18 + *(int *)(param_1 + 4);
    param_2[0x57] = param_2[0x57] + *(int *)(param_1 + 8);
    sub_0800793A(auStack_3c,param_2);
    sub_0800E41C(param_2,auStack_2c,1);
    iVar1 = sub_0800E438(param_2,auStack_3c);
    if (iVar1 == 0) {
      *piStack_18 = *piStack_18 - *piStack_1c;
      piStack_18[1] = piStack_18[1] - *(int *)(param_1 + 8);
      sub_0800E41C(param_2,auStack_2c,0);
    }
    else {
      sub_0800E41C(param_2,auStack_3c,0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

