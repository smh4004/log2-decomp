/* sub_08009D00  (original: 0x08009D00-0x08009D4A in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800E04C();
extern int sub_08009370();
extern int volatile DAT_030021f8;
extern undefined volatile _08024A78;
extern undefined4 volatile DAT_03001fd8;
extern undefined4 volatile DAT_030020f8;


void sub_08009D00(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar4 = param_1[iVar3];
  iVar3 = sub_08009370(iVar4);
  if (iVar3 == DAT_030021f8) {
    DAT_03001fd8 = 1;
  }
  uVar1 = sub_08009370(iVar4);
  puVar2 = (undefined4 *)sub_0801F08C(8);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &_08024A78;
  }
  sub_0800E04C(&DAT_030020f8,puVar2,uVar1);
  return;
}

