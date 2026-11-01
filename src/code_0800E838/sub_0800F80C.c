/* sub_0800F80C  (original: 0x0800F80C-0x0800F832 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 10/10 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080078E4();
extern undefined volatile _08025564;


undefined4 * sub_0800F80C(undefined4 *param_1)

{
  sub_080078E4();
  *param_1 = &_08025564;
  param_1[0x5b] = 1;
  param_1[0x5a] = 1;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  return param_1;
}

