/* sub_0801C5D8  (original: 0x0801C5D8-0x0801C6DE in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_0800763C();
extern int sub_0800793A();
extern int sub_08026414();
extern int volatile DAT_03001fa8;
extern undefined4 volatile DAT_03002250;


void sub_0801C5D8(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  unsigned int __frame[20];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_50 ((undefined1 *)((char *)__frame + 0x0))
#define local_40 (*(int *)((char *)__frame + 0x10))
#define local_3c (*(int *)((char *)__frame + 0x14))
#define iStack_38 (*(int *)((char *)__frame + 0x18))
#define iStack_34 (*(int *)((char *)__frame + 0x1c))
#define iStack_30 (*(int *)((char *)__frame + 0x20))
#define iStack_2c (*(int *)((char *)__frame + 0x24))
#define local_28 (*(int *)((char *)__frame + 0x28))
#define local_24 (*(int *)((char *)__frame + 0x2c))
#define local_20 (*(int *)((char *)__frame + 0x30))
#define local_1c (*(int *)((char *)__frame + 0x34))
#define iStack_18 (*(int *)((char *)__frame + 0x38))
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (DAT_03001fa8 != 0) {
    sub_0800793A(auStack_50);
    sub_08026414(&local_40,auStack_50);
    sub_0800793A(&iStack_38,param_2);
    sub_08026414(&local_28,&iStack_38);
    local_40 = local_40 - local_28;
    iVar3 = local_3c - local_24;
    iVar4 = local_40;
    if (local_40 < 0) {
      iVar4 = -local_40;
    }
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = -iVar3;
    }
    if (iVar1 < iVar4) {
      uVar2 = 3;
      if (local_40 < 1) {
        uVar2 = 2;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar2;
      iVar1 = iVar4;
    }
    else {
      *(bool *)(param_2 + 0x10) = iVar3 < 1;
    }
    piVar6 = (int *)(param_1 + 0x10);
    local_28 = local_40 * 0x100;
    local_24 = iVar3 * 0x100;
    piVar5 = (int *)(param_1 + 0x14);
    local_20 = local_40;
    local_1c = iVar3;
    if (iVar1 == 0) {
      *piVar6 = local_28;
      *piVar5 = local_24;
    }
    else {
      iStack_18 = iVar1 << 8;
      local_3c = __16__rt_sdiv(iStack_18,local_40 * 0x10000);
      iVar4 = __16__rt_sdiv(iStack_18,local_24 << 8);
      *piVar6 = local_3c;
      *piVar5 = iVar4;
    }
    iVar4 = *(int *)(param_1 + 4) * *piVar5;
    iStack_34 = iVar4 >> 8;
    iStack_38 = *(int *)(param_1 + 4) * *piVar6 >> 8;
    *(int *)(param_1 + 0x18) = iStack_38;
    *(int *)(param_1 + 0x1c) = iStack_34;
    iStack_30 = iStack_38;
    iStack_2c = iStack_34;
    sub_0800763C(param_2,&DAT_03002250,iStack_34,iVar4,local_40,iVar3);
  }
  return;
}

