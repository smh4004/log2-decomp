/* sub_08009392  (original: 0x08009392-0x080093A4 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 3/3 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_03001fb0;


void sub_08009392(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001fb0;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

