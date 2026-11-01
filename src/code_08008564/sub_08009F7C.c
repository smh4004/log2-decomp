/* sub_08009F7C  (original: 0x08009F7C-0x08009FC4 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800E04C();
extern int sub_08009370();
extern undefined4 volatile DAT_030020f8;
extern undefined volatile _08024A64;


void sub_08009F7C(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar5 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  uVar1 = sub_08009370(param_1[iVar4 + -1]);
  uVar2 = sub_08009370(iVar5);
  puVar3 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = &_08024A64;
    puVar3[2] = uVar2;
  }
  sub_0800E04C(&DAT_030020f8,puVar3,uVar1);
  return;
}

