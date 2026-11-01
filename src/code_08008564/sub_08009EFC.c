/* sub_08009EFC  (original: 0x08009EFC-0x08009F3C in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800E04C();
extern int sub_08009370();
extern undefined4 volatile DAT_030020f8;
extern undefined volatile _08025E34;


void sub_08009EFC(int *param_1)

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
    *puVar2 = &_08025E34;
    *(char *)(puVar2 + 2) = (char)iVar4;
  }
  sub_0800E04C(&DAT_030020f8,puVar2,uVar1);
  return;
}

