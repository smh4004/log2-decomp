/* sub_0800ABD6  (original: 0x0800ABD6-0x0800AC00 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006D70();
extern int sub_0800C718();
extern undefined volatile DAT_03001120;
extern undefined4 volatile DAT_03001fd0;
extern undefined1 volatile DAT_03002080;


void sub_0800ABD6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    sub_0800C718(&DAT_03002080,iVar2,&DAT_03001fd0);
  }
  return;
}

