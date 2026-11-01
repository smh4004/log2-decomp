/* sub_0800907C  (original: 0x0800907C-0x08009096 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 3/3 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0800907C(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)(*puVar1 != puVar1[1]);
  return;
}

