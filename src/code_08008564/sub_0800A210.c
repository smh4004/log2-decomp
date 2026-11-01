/* sub_0800A210  (original: 0x0800A210-0x0800A276 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800E04C();
extern int sub_08009370();
extern undefined4 volatile DAT_030020f8;
extern undefined volatile _08024A50;


void sub_0800A210(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar6 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar5 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  iVar4 = param_1[iVar3 + -2];
  *param_1 = iVar3 + -4;
  uVar1 = sub_08009370(param_1[iVar3 + -3]);
  puVar2 = (undefined4 *)sub_0801F08C(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = iVar4;
    puVar2[3] = iVar5;
    *puVar2 = &_08024A50;
    puVar2[5] = 0x20;
    puVar2[4] = iVar6 * 0x7ae;
    puVar2[7] = 0;
    puVar2[6] = 0x40;
  }
  sub_0800E04C(&DAT_030020f8,puVar2,uVar1);
  return;
}

