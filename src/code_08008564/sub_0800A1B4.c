/* sub_0800A1B4  (original: 0x0800A1B4-0x0800A210 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800E04C();
extern int sub_08009370();
extern undefined4 volatile DAT_030020f8;
extern undefined volatile _08024BDC;


void sub_0800A1B4(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar6 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  iVar5 = param_1[iVar4 + -1];
  *param_1 = iVar4 + -3;
  uVar1 = sub_08009370(param_1[iVar4 + -2]);
  uVar2 = sub_08009370(iVar5);
  puVar3 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = &_08024BDC;
    puVar3[2] = 0x20;
    puVar3[3] = uVar2;
    puVar3[4] = iVar6 * 0x7ae;
  }
  sub_0800E04C(&DAT_030020f8,puVar3,uVar1);
  return;
}

