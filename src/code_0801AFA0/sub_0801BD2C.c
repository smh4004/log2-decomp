/* sub_0801BD2C  (original: 0x0801BD2C-0x0801BE78 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800793A();
extern int sub_0802141C();
extern int sub_080079B8();
extern int __call_via_r3();
extern int sub_0801FC9C();
extern int * volatile DAT_03001fa8;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;
extern undefined volatile gUnknown_086DB2DC;


void sub_0801BD2C(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[34];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_88 (*(int *)((char *)__frame + 0x0))
#define local_84 (*(int *)((char *)__frame + 0x4))
#define local_80 (*(int *)((char *)__frame + 0x8))
#define local_7c (*(int *)((char *)__frame + 0xc))
#define auStack_78 ((undefined1 *)((char *)__frame + 0x10))
#define local_74 (*(int *)((char *)__frame + 0x14))
#define local_70 (*(int *)((char *)__frame + 0x18))
#define local_6c (*(int *)((char *)__frame + 0x1c))
#define local_68 (*(int *)((char *)__frame + 0x20))
#define uStack_64 (*(undefined1 *)((char *)__frame + 0x24))
#define uStack_60 (*(undefined4 *)((char *)__frame + 0x28))
#define puStack_5c (*(undefined * *)((char *)__frame + 0x2c))
#define piStack_58 (*(int * *)((char *)__frame + 0x30))
#define local_4c (*(int *)((char *)__frame + 0x3c))
#define local_48 (*(int * *)((char *)__frame + 0x40))
#define local_44 (*(int *)((char *)__frame + 0x44))
#define local_40 (*(int *)((char *)__frame + 0x48))
#define local_3c (*(int *)((char *)__frame + 0x4c))
#define local_38 (*(int *)((char *)__frame + 0x50))
#define local_34 (*(int *)((char *)__frame + 0x54))
#define local_30 (*(int *)((char *)__frame + 0x58))
#define local_2c (*(int *)((char *)__frame + 0x5c))
#define local_28 (*(int *)((char *)__frame + 0x60))
#define local_24 (*(int *)((char *)__frame + 0x64))
#define local_20 (*(int *)((char *)__frame + 0x68))
#define iStack_1c (*(int *)((char *)__frame + 0x6c))
#define piStack_18 (*(int * *)((char *)__frame + 0x70))
  piVar1 = DAT_03001fa8;
  if ((DAT_03001fa8 != (int *)0x0) && (DAT_03001fa8[0x5a] != 0)) {
    iStack_1c = param_1;
    piStack_18 = param_2;
    sub_080079B8(&local_2c,DAT_03001fa8);
    sub_080079B8(&local_3c,param_2);
    local_4c = local_3c + local_34 >> 1;
    local_70 = local_38 + local_30 >> 1;
    local_7c = local_28 + local_20 >> 1;
    local_80 = local_2c + local_24 >> 1;
    local_88 = local_80 - local_4c;
    iVar4 = local_7c - local_70;
    iVar2 = local_88;
    if (local_88 < 0) {
      iVar2 = -local_88;
    }
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = -iVar4;
    }
    local_84 = iVar4;
    local_44 = local_4c;
    local_40 = local_70;
    if (iVar3 < iVar2) {
      local_68 = local_30 + 3;
      if (local_88 < 1) {
        *(undefined1 *)(param_2 + 4) = 2;
        local_74 = local_3c + -4;
        local_6c = local_4c;
      }
      else {
        *(undefined1 *)(param_2 + 4) = 3;
        local_74 = local_4c;
        local_6c = local_34 + 3;
      }
    }
    else {
      local_48 = (int *)local_70;
      sub_0800793A(&local_88,param_2);
      local_74 = local_88;
      local_6c = local_80;
      if (iVar4 < 1) {
        *(undefined1 *)(param_2 + 4) = 1;
        local_70 = local_38;
        local_68 = local_84;
      }
      else {
        *(undefined1 *)(param_2 + 4) = 0;
        local_70 = local_38;
        local_68 = local_30 + -6;
      }
    }
    uStack_64 = (undefined1)param_2[4];
    puStack_5c = &gUnknown_086DB2DC;
    uStack_60 = 0x400;
    auStack_78[0] = 0;
    iVar2 = *piVar1;
    piStack_58 = param_2;
    local_48 = param_2;
    iVar2 = __call_via_r3(piVar1,0,auStack_78,*(int *)(iVar2 + 0x24) + iVar2);
    if (iVar2 != 0) {
      iVar2 = sub_0802141C(3);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
    }
    iVar2 = sub_0802141C(*(undefined4 *)(iStack_1c + 4));
    __call_via_r2(param_2,iVar2 + 6,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

