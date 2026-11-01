/* sub_08009E30  (original: 0x08009E30-0x08009E80 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800E04C();
extern int sub_08009370();
extern undefined4 volatile DAT_030020f8;
extern undefined volatile _08024864;


void sub_08009E30(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar5 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar4 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  uVar1 = sub_08009370(param_1[iVar3 + -2]);
  puVar2 = (undefined4 *)sub_0801F08C(0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = iVar4;
    puVar2[5] = iVar5;
    *puVar2 = &_08024864;
  }
  sub_0800E04C(&DAT_030020f8,puVar2,uVar1);
  return;
}

