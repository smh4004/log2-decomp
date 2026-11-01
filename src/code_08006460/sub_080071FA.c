/* sub_080071FA  (original: 0x080071FA-0x08007232 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030010a4;
extern int volatile DAT_0300109c;
extern int volatile DAT_030010a8;
extern int volatile DAT_030010a0;


undefined4 sub_080071FA(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if ((((*(int *)(param_1 + 0x18) < DAT_030010a4) && (DAT_0300109c < *(int *)(param_1 + 0x20))) &&
      (*(int *)(param_1 + 0x1c) < DAT_030010a8)) && (DAT_030010a0 < *(int *)(param_1 + 0x24))) {
    return 1;
  }
  return 0;
}

