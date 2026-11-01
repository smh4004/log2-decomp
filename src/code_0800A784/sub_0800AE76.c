/* sub_0800AE76  (original: 0x0800AE76-0x0800AEB8 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800E04C();
extern int sub_08009370();
extern undefined4 volatile DAT_030020f8;
extern undefined volatile _08025244;


void sub_0800AE76(int *param_1)

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
  puVar2 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &_08025244;
    puVar2[2] = iVar4;
  }
  sub_0800E04C(&DAT_030020f8,puVar2,uVar1);
  return;
}

