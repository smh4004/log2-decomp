/* sub_080265AC  (original: 0x080265AC-0x080265C2 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 1/1 snapshots, 81% of instructions covered.
 */
#include "ghidra_types.h"


void sub_080265AC(short *param_1,int param_2)

{
  if ((int)param_1[1] < *param_1 + param_2) {
    *param_1 = param_1[1];
    return;
  }
  *param_1 = (short)(*param_1 + param_2);
  return;
}

