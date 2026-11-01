/* sub_0801A10A  (original: 0x0801A10A-0x0801A1EE in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802141C();
extern int sub_0801FC9C();
extern int sub_08006E0A();
extern int sub_08005D6C();
extern int sub_08013BF4();
extern int sub_080068CA();
extern undefined volatile gUnknown_086DB2D4;
extern int volatile DAT_0300109c;
extern undefined volatile gUnknown_086FE048;
extern int volatile DAT_030010a4;
extern int volatile DAT_030010a0;
extern int volatile DAT_030010a8;
extern undefined volatile gUnknown_080E15B0;
extern undefined4 volatile DAT_03001100;
extern undefined volatile DAT_03001120;
extern undefined volatile DAT_03002c80;


void sub_0801A10A(int param_1,int param_2)

{
  int iVar1;
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
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar1;
  *(undefined **)(param_1 + 0x18) = &gUnknown_086FE048 + (iVar1 * 0x10000000 >> 0x1f) * -0xc;
  sub_08013BF4(param_1);
  if ((((DAT_0300109c < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x28) < DAT_030010a4)) &&
      (DAT_030010a0 < *(int *)(param_1 + 0x34))) && (*(int *)(param_1 + 0x2c) < DAT_030010a8)) {
    iVar1 = sub_08005D6C((undefined4 *)(param_1 + 0x28),DAT_03001100);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        return;
      }
      uStack_28 = *(undefined4 *)(param_1 + 0x1c);
      uStack_34 = *(undefined1 *)(param_1 + 0x14);
      puStack_2c = &gUnknown_086DB2D4;
      uStack_30 = 0x400;
      uStack_44 = *(undefined4 *)(param_1 + 0x28);
      uStack_40 = *(undefined4 *)(param_1 + 0x2c);
      uStack_3c = *(undefined4 *)(param_1 + 0x30);
      uStack_38 = *(undefined4 *)(param_1 + 0x34);
      auStack_48[0] = 0;
      iStack_18 = param_1;
      iVar1 = sub_08006E0A(&DAT_03001120,0,auStack_48);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = sub_0802141C(3);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
      sub_080068CA(&DAT_03001120,param_1);
      return;
    }
  }
  sub_080068CA(&DAT_03001120,param_1);
  return;
}

