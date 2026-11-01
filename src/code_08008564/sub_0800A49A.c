/* sub_0800A49A  (original: 0x0800A49A-0x0800A4DA in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800E04C();
extern int sub_08009370();
extern undefined4 volatile DAT_030020f8;
extern undefined volatile _08024BF0;


void sub_0800A49A(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  uVar1 = sub_08009370(param_1[iVar3]);
  puVar2 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &_08024BF0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  sub_0800E04C(&DAT_030020f8,puVar2,uVar1);
  return;
}

