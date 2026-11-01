/* sub_0800E946  (original: 0x0800E946-0x0800EA3A in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 69% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08013BF4();
extern int sub_0802141C();
extern int sub_0801FC9C();
extern int sub_08013C22();
extern int sub_08005D6C();
extern int sub_08006E0A();
extern int sub_080068CA();
extern undefined volatile gUnknown_086DB2E4;
extern undefined4 volatile DAT_03001100;
extern undefined volatile DAT_03001120;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_0840E53C;
extern undefined volatile gUnknown_080E15B0;


void sub_0800E946(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_48 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_44 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_3c (*(undefined4 *)((char *)__frame + 0xc))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x10))
#define uStack_34 (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_30 (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_2c (*(undefined * *)((char *)__frame + 0x1c))
#define uStack_28 (*(undefined4 *)((char *)__frame + 0x20))
#define iStack_18 (*(int *)((char *)__frame + 0x30))
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
    iVar1 = *(int *)(param_1 + 0x48) + 1;
    iVar2 = iVar1 >> 3;
    *(int *)(param_1 + 0x48) = iVar1;
    if (3 < iVar2) {
      iVar2 = 2 - ((iVar2 << 0x1f) >> 0x1f);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x50) + iVar2 * 0xc;
    sub_08013BF4(param_1);
    iVar1 = sub_08013C22(param_1);
    if (iVar1 == 0) {
      sub_080068CA(&DAT_03001120,param_1);
    }
    else {
      iVar1 = sub_08005D6C((undefined4 *)(param_1 + 0x28),DAT_03001100);
      if (iVar1 == 0) {
        *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
        *(undefined4 *)(param_1 + 0x4c) = 0x10;
      }
      else if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
        uStack_28 = *(undefined4 *)(param_1 + 0x1c);
        uStack_34 = *(undefined1 *)(param_1 + 0x14);
        puStack_2c = &gUnknown_086DB2E4;
        uStack_30 = 0x400;
        uStack_44 = *(undefined4 *)(param_1 + 0x28);
        uStack_40 = *(undefined4 *)(param_1 + 0x2c);
        uStack_3c = *(undefined4 *)(param_1 + 0x30);
        uStack_38 = *(undefined4 *)(param_1 + 0x34);
        auStack_48[0] = *(undefined1 *)(param_1 + 0x15);
        iStack_18 = param_1;
        iVar1 = sub_08006E0A(&DAT_03001120,0,auStack_48);
        if (iVar1 != 0) {
          iVar1 = sub_0802141C(3);
          sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
          *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
          *(undefined4 *)(param_1 + 0x4c) = 0x10;
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) + -1;
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 == 0) {
      sub_080068CA(&DAT_03001120,param_1);
    }
  }
  return;
}

