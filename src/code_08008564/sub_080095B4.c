/* sub_080095B4  (original: 0x080095B4-0x080095CA in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 12/12 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08003E42();
extern undefined1 volatile DAT_03000e90;


void sub_080095B4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_08003E42(&DAT_03000e90,param_1[iVar2]);
  param_1[iVar2] = iVar1;
  return;
}

