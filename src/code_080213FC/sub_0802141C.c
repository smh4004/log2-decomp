/* sub_0802141C  (original: 0x0802141C-0x0802142E in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080213FC();


uint sub_0802141C(int param_1)

{
  uint uVar1;
  
  uVar1 = sub_080213FC();
  return param_1 * (uVar1 & 0xffff) >> 0x10;
}

