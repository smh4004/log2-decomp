/* sub_0800B710  (original: 0x0800B710-0x0800B734 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800B5C0();
extern int sub_08009324();


void sub_0800B710(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_08009324(*(undefined4 *)(param_1 + 0x10));
  sub_0800B5C0(0,uVar1,*(undefined4 *)(param_1 + 0xc),param_1 + 0x14,param_1 + 8);
  return;
}

