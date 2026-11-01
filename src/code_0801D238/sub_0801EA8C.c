/* sub_0801EA8C  (original: 0x0801EA8C-0x0801EB18 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013BF4();
extern int sub_08013BC0();
extern int sub_0802141C();
extern int sub_0801F08C();
extern int sub_0801FC9C();
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_086E0B90;
extern undefined volatile _08025124;
extern undefined volatile gUnknown_080E15B0;


undefined4 *
sub_0801EA8C(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x58), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x400,0);
    *param_1 = &_08025124;
    uVar1 = *param_3;
    param_1[0x12] = param_3[1];
    param_1[0x11] = uVar1;
    param_1[0x10] = param_5;
    iVar2 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x15] = 0;
    param_1[0x13] = &gUnknown_086E0B90 + param_4 * 0x30;
    param_1[0x14] = 0;
    param_1[6] = &gUnknown_086E0B90 + param_4 * 0x30;
    *(undefined1 *)(param_1 + 2) = 0x28;
    sub_08013BF4(param_1);
    iVar2 = sub_0802141C(2);
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0xd) * 0xc,0x40,0);
  }
  return param_1;
}

