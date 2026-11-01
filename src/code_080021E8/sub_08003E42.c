/* sub_08003E42  (original: 0x08003E42-0x08003E5E in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 12/12 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_08003E42(int param_1,uint param_2)

{
  if (((uint)*(byte *)(((int)param_2 >> 3) + param_1 + 0xb4) & 1 << (param_2 & 7)) != 0) {
    return 1;
  }
  return 0;
}

