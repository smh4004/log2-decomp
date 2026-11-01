/* sub_08006618  (original: 0x08006618-0x08006664 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 10/10 snapshots, 84% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08006618(undefined1 *param_1,int param_2)

{
  if ((byte)param_1[param_2 * 10 + 0x69d] == 0xff) {
    *param_1 = param_1[param_2 * 10 + 0x69c];
  }
  else {
    param_1[(uint)(byte)param_1[param_2 * 10 + 0x69d] * 10 + 0x69c] = param_1[param_2 * 10 + 0x69c];
  }
  if ((byte)param_1[param_2 * 10 + 0x69c] != 0xff) {
    param_1[(uint)(byte)param_1[param_2 * 10 + 0x69c] * 10 + 0x69d] = param_1[param_2 * 10 + 0x69d];
  }
  return;
}

