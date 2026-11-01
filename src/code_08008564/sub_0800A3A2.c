/* sub_0800A3A2  (original: 0x0800A3A2-0x0800A3E8 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800E04C();
extern int sub_08009370();
extern undefined4 volatile DAT_030020f8;
extern undefined volatile _0802521C;


void sub_0800A3A2(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar4 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  uVar1 = sub_08009370(param_1[iVar3 + -1]);
  puVar2 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0802521C;
    puVar2[1] = 0;
    puVar2[3] = iVar4;
    puVar2[2] = 0;
    puVar2[4] = iVar4 + -8;
  }
  sub_0800E04C(&DAT_030020f8,puVar2,uVar1);
  return;
}

