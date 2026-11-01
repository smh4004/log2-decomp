/* sub_0800D138  (original: 0x0800D138-0x0800D156 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 71% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();


void sub_0800D138(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0xff;
    *param_1 = 0;
    param_1[2] = param_2;
  }
  return;
}

