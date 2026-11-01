/* sub_08003B7E  (original: 0x08003B7E-0x08003B90 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 11/11 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


uint sub_08003B7E(int param_1,int param_2)

{
  return *(int *)(param_2 * 4 + param_1 + 0x158) + 0x30U & 0xffff;
}

