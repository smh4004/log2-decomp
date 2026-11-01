/* sub_0801EE7E  (original: 0x0801EE7E-0x0801EEB2 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 34% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined1 volatile REG_BLDALPHA;


undefined4 sub_0801EE7E(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 < 0x11) {
    REG_BLDALPHA = (char)iVar1;
    return 0;
  }
  if (iVar1 < 0x97) {
    return 0;
  }
  if (iVar1 < 0xa7) {
    REG_BLDALPHA = -0x5a - (char)iVar1;
    return 0;
  }
  if (iVar1 < 0xb4) {
    return 0;
  }
  return 1;
}

