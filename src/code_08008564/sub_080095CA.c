/* sub_080095CA  (original: 0x080095CA-0x080095E4 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08003E42();
extern undefined1 volatile DAT_03000e90;


void sub_080095CA(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_08003E42(&DAT_03000e90,param_1[iVar2]);
  param_1[iVar2] = 1 - iVar1;
  return;
}

