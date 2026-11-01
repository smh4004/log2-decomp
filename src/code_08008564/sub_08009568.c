/* sub_08009568  (original: 0x08009568-0x0800957A in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 1/1 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0802141C();


void sub_08009568(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_0802141C(param_1[iVar2]);
  param_1[iVar2] = iVar1;
  return;
}

