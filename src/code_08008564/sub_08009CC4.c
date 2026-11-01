/* sub_08009CC4  (original: 0x08009CC4-0x08009D00 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068B8();
extern int sub_0800D6DE();
extern undefined2 volatile DAT_03000c0c;
extern undefined2 volatile DAT_03000c0e;
extern int volatile DAT_03000c10;
extern undefined volatile DAT_03001120;
extern undefined volatile _03000C04;


void sub_08009CC4(int *param_1)

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
  DAT_03000c10 = param_1[iVar2 + -2];
  DAT_03000c0c = (undefined2)iVar3;
  DAT_03000c0e = (undefined2)iVar4;
  uVar1 = sub_0800D6DE(&_03000C04);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}

