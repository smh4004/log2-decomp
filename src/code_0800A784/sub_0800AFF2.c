/* sub_0800AFF2  (original: 0x0800AFF2-0x0800B00C in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08003D58();
extern undefined1 volatile DAT_03000e90;


void sub_0800AFF2(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + -1;
  sub_08003D58(&DAT_03000e90,DAT_03000e90,param_2[iVar1],param_4,param_4);
  return;
}

