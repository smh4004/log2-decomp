/* sub_08009BFA  (original: 0x08009BFA-0x08009C22 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FC9C();
extern undefined volatile gUnknown_080E15B0;


void sub_08009BFA(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0801FC9C(iVar2 + 0x5c4,&gUnknown_080E15B0 + param_1[iVar1] * 0xc,0x40,0);
  return;
}

