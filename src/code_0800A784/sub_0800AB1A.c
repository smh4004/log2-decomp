/* sub_0800AB1A  (original: 0x0800AB1A-0x0800AB44 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080104C0();
extern int sub_080068B8();
extern int sub_08009370();
extern undefined volatile DAT_03001120;


void sub_0800AB1A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = sub_08009370(param_1[iVar2]);
  uVar1 = sub_080104C0(0,uVar1,0,100,param_4);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}

