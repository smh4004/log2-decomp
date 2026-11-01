/* sub_0800D490  (original: 0x0800D490-0x0800D584 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E41C();
extern int sub_0800793A();
extern int sub_0800E438();
extern int __call_via_r2();
extern int sub_0800E310();


undefined4 sub_0800D490(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
#define local_30 (*(undefined1 * *)((char *)__frame + 0x10))
#define auStack_2c ((undefined1 *)((char *)__frame + 0x14))
#define local_1c (*(int * *)((char *)__frame + 0x24))
#define local_18 (*(int * *)((char *)__frame + 0x28))
  sub_0800793A(auStack_2c);
  local_18 = (int *)(param_1 + 4);
  piVar4 = param_2 + 0x56;
  local_1c = (int *)(param_1 + 8);
  *piVar4 = *piVar4 + *(int *)(param_1 + 4);
  param_2[0x57] = param_2[0x57] + *local_1c;
  local_30 = auStack_2c;
  sub_0800793A(auStack_40,param_2);
  sub_0800E41C(param_2,local_30,1);
  iVar2 = sub_0800E438(param_2,auStack_40);
  if (iVar2 == 0) {
    sub_0800E41C(param_2,local_30,0);
    iVar2 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x2c) + *param_2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    *piVar4 = *piVar4 - *local_18;
    param_2[0x57] = param_2[0x57] - *local_1c;
    uVar3 = 0;
  }
  else {
    iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x2c) + *param_2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x12);
    sub_0800E41C(param_2,auStack_40,0);
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 == 0) {
      sub_0800E310(param_2,1);
      sVar1 = *(short *)(param_1 + 0xe);
      *piVar4 = (int)*(short *)(param_1 + 0xc) << 8;
      param_2[0x57] = (int)sVar1 << 8;
      sub_0800E310(param_2,0);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

