/* sub_0800AB82  (original: 0x0800AB82-0x0800ABA4 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 93% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080040AA();
extern undefined1 volatile DAT_03000e90;


void sub_0800AB82(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_080040AA(&DAT_03000e90,param_1[iVar1] != 0,param_3,param_4,param_4);
  return;
}

