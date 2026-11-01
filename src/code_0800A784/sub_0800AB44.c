/* sub_0800AB44  (original: 0x0800AB44-0x0800AB82 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080104C0();
extern int sub_080068B8();
extern int sub_08009370();
extern undefined volatile DAT_03001120;


void sub_0800AB44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  uVar1 = sub_08009370(param_1[iVar2 + -2]);
  uVar1 = sub_080104C0(0,uVar1,iVar3,iVar4,param_4);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}

