/* sub_08014E86  (original: 0x08014E86-0x08014E98 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 77% of instructions covered.
 */
#include "ghidra_types.h"
extern ushort volatile DAT_030022b0;


void sub_08014E86(int param_1)

{
  if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

