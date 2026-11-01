/* sub_0800BA84  (original: 0x0800BA84-0x0800BAB4 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 29% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_0800BA84(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x30) = iVar1;
  if (7 < iVar1) {
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
    if (**(char **)(param_1 + 0x10) == '^') {
      *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xb4) = 0x800b9d7;
  }
  return 0;
}

