/* sub_08009728  (original: 0x08009728-0x08009740 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08003E74();
extern undefined1 volatile DAT_03000e90;


void sub_08009728(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08003E74(&DAT_03000e90,param_1[iVar1],param_3,param_4,param_4);
  return;
}

