/* sub_080097B4  (original: 0x080097B4-0x08009814 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800793A();
extern int sub_0800DF1C();
extern int sub_0801F2F4();
extern int sub_08009370();


void sub_080097B4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(int *)((char *)__frame + 0x0))
#define local_1c (*(int *)((char *)__frame + 0x4))
#define local_18 (*(int *)((char *)__frame + 0x8))
#define local_14 (*(int *)((char *)__frame + 0xc))
#define local_10 (*(int *)((char *)__frame + 0x10))
#define local_c (*(int *)((char *)__frame + 0x14))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  uVar1 = sub_08009370(param_1[iVar2 + -1]);
  sub_0800793A(&local_20,uVar1);
  iVar2 = local_1c + local_14 >> 1;
  iVar3 = local_20 + local_18 >> 1;
  local_10 = iVar3 + -0x78;
  local_c = iVar2 + -0x50;
  sub_0800DF1C(0,&local_10,iVar4,local_14,iVar3,iVar2);
  sub_0801F2F4();
  return;
}

