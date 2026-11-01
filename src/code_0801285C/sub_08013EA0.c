/* sub_08013EA0  (original: 0x08013EA0-0x08013FDA in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802141C();
extern int sub_0801F08C();
extern int sub_0801FC9C();
extern int sub_08013BF4();
extern int sub_080135E0();
extern int sub_080068B8();
extern int sub_08006D70();
extern undefined volatile _08023F24;
extern int volatile DAT_03001730;
extern undefined volatile DAT_03001120;
extern undefined volatile DAT_03001734;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;
extern undefined volatile gUnknown_086E1590;
extern undefined volatile _080240FC;


void sub_08013EA0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
  *(undefined4 *)(param_1 + 0x4c) = 0x10;
  *(undefined1 *)(param_1 + 0x40) = 2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x50) + 0x24;
  sub_08013BF4(param_1);
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    iVar1 = (*(int *)(param_1 + 0x58) << 0xb) >> 8;
    iVar6 = (*(int *)(param_1 + 0x54) << 0xb) >> 8;
    local_1c = *(int *)(param_1 + 0x20) + iVar6;
    local_18 = *(int *)(param_1 + 0x24) + iVar1;
    local_24 = local_1c >> 8;
    local_20 = local_18 >> 8;
    uVar9 = 0x2000;
    uVar10 = 0x400;
    uVar2 = sub_080135E0(0,&local_24,&gUnknown_086E1590,4,0x2000,0x400,0x28,iVar6,iVar1);
    sub_080068B8(&DAT_03001120,uVar2);
    iVar1 = 0;
    do {
      iVar6 = sub_0802141C(0x20);
      iVar3 = sub_0802141C(0x20);
      iVar4 = sub_0802141C(5);
      iVar4 = iVar4 + iVar1 * 8;
      iVar7 = local_24 + iVar6 + -0x10;
      iVar8 = local_20 + iVar3 + -0x10;
      iVar11 = iVar7;
      iVar12 = iVar8;
      puVar5 = (undefined4 *)sub_0801F08C(0x10);
      iVar3 = local_20;
      iVar6 = local_24;
      if (puVar5 != (undefined4 *)0x0) {
        puVar5[1] = iVar4;
        *puVar5 = &_080240FC;
        puVar5[2] = iVar7;
        puVar5[3] = iVar8;
      }
      iVar1 = iVar1 + 1;
      iVar4 = DAT_03001730 * 4;
      DAT_03001730 = DAT_03001730 + 1;
      *(undefined4 **)(&DAT_03001734 + iVar4) = puVar5;
    } while (iVar1 < 6);
    puVar5 = (undefined4 *)sub_0801F08C(0x10);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[1] = 0x18;
      *puVar5 = &_08023F24;
      puVar5[2] = iVar6;
      puVar5[3] = iVar3;
    }
    iVar1 = DAT_03001730 * 4;
    DAT_03001730 = DAT_03001730 + 1;
    *(undefined4 **)(&DAT_03001734 + iVar1) = puVar5;
    iVar1 = sub_0802141C(2);
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x14) * 0xc,0x40,0,uVar9,uVar10,iVar11,
                 iVar12);
  }
  return;
}

