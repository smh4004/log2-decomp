/* sub_0801EFF4  (original: 0x0801EFF4-0x0801F01C in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030022b4;


void sub_0801EFF4(int param_1)

{
  if (DAT_030022b4 == 0) {
    *(undefined2 *)(param_1 + 8) = 0;
  }
  else {
    *(short *)(param_1 + 8) = (short)(DAT_030022b4 + -0x2000000 >> 2);
    *(short *)(DAT_030022b4 + 10) = (short)(param_1 + -0x2000000 >> 2);
  }
  *(undefined2 *)(param_1 + 10) = 0;
  DAT_030022b4 = param_1;
  return;
}

