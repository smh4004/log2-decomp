/* sub_0801E8B4  (original: 0x0801E8B4-0x0801E9C4 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800793A();
extern int sub_080079B8();
extern int volatile DAT_03001fa8;


undefined4 sub_0801E8B4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  if ((DAT_03001fa8 == 0) || (*(int *)(DAT_03001fa8 + 0x168) == 0)) {
    uVar1 = 0;
  }
  else {
    sub_080079B8(&iStack_24);
    sub_080079B8(&iStack_34,param_2);
    iStack_38 = iStack_30 + iStack_28 >> 1;
    iStack_44 = iStack_34 + iStack_2c >> 1;
    iStack_4c = iStack_34 + 2;
    iStack_28 = iStack_28 + -6;
    if ((iStack_4c < iStack_1c) &&
       (((iStack_24 < iStack_2c + -3 && (iStack_30 + 2 < iStack_18)) && (iStack_20 < iStack_28)))) {
      iVar3 = iStack_24 + iStack_1c >> 1;
      iStack_40 = iStack_20 + iStack_18 >> 1;
      iVar2 = iVar3 - iStack_44;
      iVar5 = iStack_40 - iStack_38;
      iVar4 = iVar2;
      if (iVar2 < 0) {
        iVar4 = -iVar2;
      }
      iVar6 = iVar5;
      if (iVar5 < 0) {
        iVar6 = -iVar5;
      }
      iStack_48 = iStack_28;
      if (iVar6 < iVar4) {
        iStack_30 = iStack_38;
        if (iVar2 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 2;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 3;
          iStack_4c = iStack_44;
          iStack_44 = iStack_2c + -3;
        }
      }
      else {
        iStack_4c = iVar2;
        iStack_48 = iVar5;
        iStack_3c = iStack_44;
        iStack_44 = iVar3;
        sub_0800793A(&iStack_4c,param_2);
        if (iVar5 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 1;
          iStack_30 = iStack_30 + 3;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 0;
          iStack_48 = iStack_28;
        }
      }
      if (((iStack_4c < iStack_1c) && (iStack_24 < iStack_44)) &&
         ((iStack_30 < iStack_18 && (iStack_20 < iStack_48)))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

