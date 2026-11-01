/* sub_08009C22  (original: 0x08009C22-0x08009C54 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FC9C();
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;


void sub_08009C22(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + param_1[iVar1 + -1] * 0xc,iVar2,0);
  return;
}

