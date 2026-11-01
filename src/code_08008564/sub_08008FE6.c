/* sub_08008FE6  (original: 0x08008FE6-0x08009000 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08008FE6(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)(puVar1[1] != 0 || *puVar1 != 0);
  return;
}

