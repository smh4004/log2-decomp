/* sub_08004AEA  (original: 0x08004AEA-0x08004B1C in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 36% of instructions covered.
 */
#include "ghidra_types.h"


int sub_08004AEA(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x154) < 3) {
      return 1;
    }
    return *(int *)(param_1 + 0x154) + -2;
  }
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x2b0) < 3) {
      return 1;
    }
    return *(int *)(param_1 + 0x2b0) + -2;
  }
  return 1;
}

