/* sub_080019F6  (original: 0x080019F6-0x08001A0C in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


int sub_080019F6(int param_1,int param_2)

{
  return 1 - (((int)((uint)*(byte *)(param_2 * 0x164 + param_1 + 1) << 0x1f) >> 0x1f) + 1);
}

