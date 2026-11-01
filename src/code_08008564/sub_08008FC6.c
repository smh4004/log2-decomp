/* sub_08008FC6  (original: 0x08008FC6-0x08008FE6 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 75% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08008FC6(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  param_1 = param_1 + iVar1 + -1;
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  *param_1 = iVar1;
  return;
}

