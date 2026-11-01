/* sub_0800A346  (original: 0x0800A346-0x0800A3A2 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800E04C();
extern int sub_08009370();
extern undefined4 volatile DAT_030020f8;
extern undefined volatile _08024C04;


void sub_0800A346(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar4 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar6 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  iVar5 = param_1[iVar3 + -2];
  *param_1 = iVar3 + -4;
  uVar1 = sub_08009370(param_1[iVar3 + -3]);
  puVar2 = (undefined4 *)sub_0801F08C(0x1c);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = iVar5;
    puVar2[5] = iVar6;
    *puVar2 = &_08024C04;
    puVar2[6] = iVar4;
  }
  sub_0800E04C(&DAT_030020f8,puVar2,uVar1);
  return;
}

