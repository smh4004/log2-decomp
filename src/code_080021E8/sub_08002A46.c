/* sub_08002A46  (original: 0x08002A46-0x08002A5A in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 11/11 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_08002A46(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r3(param_1,param_2,param_1[0x48],*(int *)(*param_1 + 100) + *param_1,param_4);
  return;
}

