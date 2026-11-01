/* sub_0801AFA0  (original: 0x0801AFA0-0x0801B15E in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800793A();
extern int sub_0800E45E();
extern int sub_0800E310();
extern int volatile DAT_03001fa8;


undefined4 sub_0801AFA0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
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
    uVar1 = 0;
  }
  else {
    sub_0800793A(&iStack_4c);
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800793A(&iStack_34,param_2);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_18 = iStack_38 - (iStack_30 + iStack_28 >> 1);
    iVar3 = iStack_1c;
    if (iStack_1c < 0) {
      iVar3 = -iStack_1c;
    }
    iVar2 = iStack_18;
    if (iStack_18 < 0) {
      iVar2 = -iStack_18;
    }
    uVar4 = 3;
    iStack_20 = 0;
    iStack_24 = 0;
    if (iVar2 < iVar3) {
      if (iVar2 < 3) {
        iVar3 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x2c) + *param_2);
        if (iVar3 != 0) {
          __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        }
        if (iStack_1c < 1) {
          uVar4 = 2;
        }
        *(undefined1 *)(param_2 + 4) = uVar4;
        return 1;
      }
      if (iStack_18 < 1) {
        *(undefined1 *)(param_2 + 4) = 1;
        iStack_20 = -*(int *)(param_1 + 4);
      }
      else {
        *(undefined1 *)(param_2 + 4) = 0;
        iStack_20 = *(int *)(param_1 + 4);
      }
    }
    else {
      if (iVar3 < 3) {
        iVar3 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x2c) + *param_2);
        if (iVar3 != 0) {
          __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
        }
        *(bool *)(param_2 + 4) = iStack_18 < 1;
        return 1;
      }
      if (iStack_1c < 1) {
        *(undefined1 *)(param_2 + 4) = 2;
        iStack_24 = -*(int *)(param_1 + 4);
      }
      else {
        *(undefined1 *)(param_2 + 4) = 3;
        iStack_24 = *(int *)(param_1 + 4);
      }
    }
    sub_0800E310(param_2,1);
    iStack_3c = param_2[0x56] + iStack_24;
    iStack_38 = param_2[0x57] + iStack_20;
    iStack_34 = iStack_3c;
    iStack_30 = iStack_38;
    iStack_2c = iStack_3c;
    iStack_28 = iStack_38;
    iVar3 = sub_0800E45E(param_2,&iStack_2c);
    if (iVar3 == 0) {
      iVar3 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x2c) + *param_2);
      if (iVar3 != 0) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
      sub_0800E310(param_2,0);
      uVar1 = 1;
    }
    else {
      iVar3 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x2c) + *param_2);
      if (iVar3 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
      param_2[0x56] = iStack_2c;
      param_2[0x57] = iStack_28;
      sub_0800E310(param_2,0);
      uVar1 = 0;
    }
  }
  return uVar1;
}

