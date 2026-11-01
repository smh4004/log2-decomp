/* sub_08009C56  (original: 0x08009C56-0x08009C7A in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FC22();
extern undefined volatile gUnknown_080E15B0;


void sub_08009C56(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0801FC22(iVar2 + 0x5c4,&gUnknown_080E15B0 + param_1[iVar1] * 0xc,iVar2,param_1[iVar1] * 2,
               param_4);
  return;
}

