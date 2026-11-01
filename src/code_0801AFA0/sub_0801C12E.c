/* sub_0801C12E  (original: 0x0801C12E-0x0801C2AC in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800763C();
extern int __16__rt_sdiv();
extern int sub_0800793A();
extern int sub_0800E45E();
extern int sub_0800E310();
extern int volatile DAT_03001fa8;
extern undefined4 volatile DAT_03002244;


undefined4 sub_0801C12E(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  unsigned int __frame[19];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_4c (*(int *)((char *)__frame + 0x0))
#define iStack_48 (*(int *)((char *)__frame + 0x4))
#define iStack_44 (*(int *)((char *)__frame + 0x8))
#define iStack_40 (*(int *)((char *)__frame + 0xc))
#define iStack_3c (*(int *)((char *)__frame + 0x10))
#define iStack_38 (*(int *)((char *)__frame + 0x14))
#define iStack_34 (*(int *)((char *)__frame + 0x18))
#define iStack_30 (*(int *)((char *)__frame + 0x1c))
#define iStack_2c (*(int *)((char *)__frame + 0x20))
#define iStack_28 (*(int *)((char *)__frame + 0x24))
#define iStack_24 (*(int *)((char *)__frame + 0x28))
#define iStack_20 (*(int *)((char *)__frame + 0x2c))
#define iStack_1c (*(int *)((char *)__frame + 0x30))
#define iStack_18 (*(int *)((char *)__frame + 0x34))
  if (DAT_03001fa8 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800793A(&iStack_4c);
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800793A(&iStack_34,param_2);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_18 = iStack_38 - (iStack_30 + iStack_28 >> 1);
    iStack_24 = iStack_1c;
    if (iStack_1c < 0) {
      iStack_24 = -iStack_1c;
    }
    iStack_20 = iStack_18;
    if (iStack_18 < 0) {
      iStack_20 = -iStack_18;
    }
    if (iStack_20 < iStack_24) {
      uVar1 = 2;
      if (-1 < iStack_1c) {
        uVar1 = 3;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar1;
      iVar4 = iStack_24;
    }
    else {
      *(byte *)(param_2 + 0x10) = (byte)((uint)iStack_18 >> 0x1f);
      iVar4 = iStack_20;
    }
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      if (*(undefined4 **)(param_2 + 0x18) != &DAT_03002244) {
        sub_0800763C(param_2);
      }
      sub_0800E310(param_2,1);
      iStack_24 = iStack_1c * 0x100;
      iStack_20 = iStack_18 * 0x100;
      iStack_48 = *(int *)(param_1 + 4) * iStack_20 >> 8;
      iStack_4c = *(int *)(param_1 + 4) * iStack_24 >> 8;
      piVar5 = (int *)(param_2 + 0x158);
      iStack_44 = iStack_4c;
      iStack_40 = iStack_48;
      iVar3 = __16__rt_sdiv(iVar4 * 0x100,iStack_4c << 8);
      iStack_38 = __16__rt_sdiv(iVar4 * 0x100,iStack_40 << 8);
      iStack_4c = *piVar5 - iVar3;
      iStack_48 = *(int *)(param_2 + 0x15c) - iStack_38;
      piVar6 = (int *)(param_2 + 0x15c);
      iStack_3c = iVar3;
      iStack_34 = iStack_4c;
      iStack_30 = iStack_48;
      iStack_2c = iStack_4c;
      iStack_28 = iStack_48;
      iVar4 = sub_0800E45E(param_2,&iStack_2c);
      if (iVar4 == 0) {
        iStack_34 = iStack_2c;
        iStack_30 = *(int *)(param_2 + 0x15c);
        iVar4 = sub_0800E45E(param_2,&iStack_34);
        if (iVar4 == 0) {
          iStack_34 = *piVar5;
          iStack_30 = iStack_28;
          iVar4 = sub_0800E45E(param_2,&iStack_34);
          if (iVar4 != 0) {
            *piVar5 = iStack_34;
            *piVar6 = iStack_30;
          }
        }
        else {
          *piVar5 = iStack_34;
          *piVar6 = iStack_30;
        }
      }
      else {
        *piVar5 = iStack_2c;
        *piVar6 = iStack_28;
      }
      sub_0800E310(param_2,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}

