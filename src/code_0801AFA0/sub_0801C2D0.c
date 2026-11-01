/* sub_0801C2D0  (original: 0x0801C2D0-0x0801C430 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int __call_via_r2();
extern int sub_0800793A();
extern int sub_0800E45E();
extern int sub_0800E310();
extern int volatile DAT_03001fa8;


bool sub_0801C2D0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
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
    bVar4 = false;
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
      uVar3 = 2;
      if (iStack_1c < 1) {
        uVar3 = 3;
      }
      *(undefined1 *)(param_2 + 4) = uVar3;
      iStack_18 = 0;
      iVar2 = iStack_24;
    }
    else {
      *(bool *)(param_2 + 4) = 0 < iStack_18;
      iStack_1c = 0;
      iVar2 = iStack_20;
    }
    if (iVar2 == 0) {
      bVar4 = false;
    }
    else {
      iVar1 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x2c) + *param_2);
      if (iVar1 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
      sub_0800E310(param_2,1);
      iStack_24 = iStack_1c * 0x100;
      iStack_20 = iStack_18 * 0x100;
      iStack_48 = *(int *)(param_1 + 4) * iStack_20 >> 8;
      iStack_4c = *(int *)(param_1 + 4) * iStack_24 >> 8;
      iStack_44 = iStack_4c;
      iStack_40 = iStack_48;
      iVar1 = __16__rt_sdiv(iVar2 * 0x100,iStack_4c << 8);
      iStack_38 = __16__rt_sdiv(iVar2 * 0x100,iStack_40 << 8);
      iStack_4c = param_2[0x56] - iVar1;
      iStack_48 = param_2[0x57] - iStack_38;
      iStack_3c = iVar1;
      iStack_34 = iStack_4c;
      iStack_30 = iStack_48;
      iStack_2c = iStack_4c;
      iStack_28 = iStack_48;
      iVar2 = sub_0800E45E(param_2,&iStack_2c);
      bVar4 = iVar2 == 0;
      if (!bVar4) {
        param_2[0x56] = iStack_2c;
        param_2[0x57] = iStack_28;
      }
      sub_0800E310(param_2,0);
    }
  }
  return bVar4;
}

