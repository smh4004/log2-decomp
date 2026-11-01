/* sub_08009710  (original: 0x08009710-0x08009728 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 3/3 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08003E5E();
extern undefined1 volatile DAT_03000e90;


void sub_08009710(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08003E5E(&DAT_03000e90,param_1[iVar1],param_3,param_4,param_4);
  return;
}

