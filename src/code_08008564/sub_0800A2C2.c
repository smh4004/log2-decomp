/* sub_0800A2C2  (original: 0x0800A2C2-0x0800A346 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int __16__rt_sdiv();
extern int sub_0800E04C();
extern int sub_08009370();
extern undefined4 volatile DAT_030020f8;
extern undefined volatile _08025528;


void sub_0800A2C2(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar7 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  iVar5 = param_1[iVar4 + -1];
  *param_1 = iVar4 + -3;
  iVar6 = param_1[iVar4 + -2];
  *param_1 = iVar4 + -4;
  iVar8 = param_1[iVar4 + -3];
  *param_1 = iVar4 + -5;
  uVar1 = sub_08009370(param_1[iVar4 + -4]);
  puVar2 = (undefined4 *)sub_0801F08C(0x24);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &_08025528;
    puVar2[2] = iVar8;
    puVar2[3] = iVar6;
    puVar2[4] = iVar5;
    puVar2[5] = iVar7;
    puVar2[7] = iVar7 >> 1;
    puVar2[6] = iVar7;
    uVar3 = __16__rt_sdiv(iVar7 >> 1,0x100);
    puVar2[8] = uVar3;
  }
  sub_0800E04C(&DAT_030020f8,puVar2,uVar1);
  return;
}

