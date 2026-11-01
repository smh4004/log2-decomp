/* sub_0801DA52  (original: 0x0801DA52-0x0801DB66 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800F910();
extern int __call_via_r2();
extern int sub_080076BC();
extern int sub_0802141C();
extern int sub_0801F08C();
extern int sub_0801FC9C();
extern int * volatile DAT_03001fa8;
extern undefined4 volatile DAT_0300227c;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;
extern undefined volatile gUnknown_086DB2DC;
extern undefined volatile _08024A3C;


/* WARNING: Removing unreachable block (ram,0x0801daf6) */

void sub_0801DA52(undefined4 param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  unsigned int __frame[12];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_30 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_2c (*(undefined4 *)((char *)__frame + 0x4))
#define puStack_28 (*(undefined * *)((char *)__frame + 0x8))
#define piStack_24 (*(int * *)((char *)__frame + 0xc))
#define auStack_20 ((undefined1 *)((char *)__frame + 0x10))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x18))
  piVar1 = DAT_03001fa8;
  if ((DAT_03001fa8 == (int *)0x0) || ((undefined4 *)DAT_03001fa8[6] != &DAT_0300227c)) {
    sub_080076BC(param_2);
    if (7 < *(ushort *)((int)param_2 + 0x12)) {
      *(undefined2 *)((int)param_2 + 0x12) = 8;
    }
    *(undefined2 *)(param_2 + 5) = 3;
    sVar2 = *(short *)((int)param_2 + 0x12) + -1;
    *(short *)((int)param_2 + 0x12) = sVar2;
    if (sVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  else {
    uVar3 = *(short *)((int)param_2 + 0x12) + 1;
    *(ushort *)((int)param_2 + 0x12) = uVar3;
    if (uVar3 < 8) {
      *(ushort *)(param_2 + 5) = uVar3 >> 2;
    }
    else {
      piStack_24 = param_2;
      if (uVar3 == 8) {
        iVar4 = sub_0802141C(3);
        sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar4 + 0x22) * 0xc,0x40,0);
        sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0,0x40,0);
        puVar5 = (undefined4 *)sub_0801F08C(8);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = &_08024A3C;
          *(undefined1 *)(puVar5 + 1) = 0;
        }
        sub_08007662(puVar5);
        uStack_2c = 0x100;
        auStack_30[0] = (undefined1)param_2[4];
        puStack_28 = &gUnknown_086DB2DC;
        sub_0800F910(piVar1,auStack_30);
        __call_via_r2(piVar1,auStack_20,*(int *)(*piVar1 + 0x40) + *piVar1);
      }
      else if ((uVar3 & 0xf) == 0) {
        uStack_2c = 0x80;
        auStack_30[0] = (undefined1)param_2[4];
        puStack_28 = &gUnknown_086DB2DC;
        sub_0800F910(piVar1,auStack_30);
        __call_via_r2(piVar1,auStack_20,*(int *)(*piVar1 + 0x40) + *piVar1);
        __call_via_r2(param_2,uStack_18,*(int *)(*param_2 + 0x3c) + *param_2);
      }
    }
  }
  return;
}

