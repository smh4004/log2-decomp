/* sub_08009688  (original: 0x08009688-0x080096AA in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080062C0();
extern undefined volatile DAT_03001090;


void sub_08009688(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_080062C0(&DAT_03001090,param_1[iVar1 + -1],iVar2,param_4,param_4);
  return;
}

