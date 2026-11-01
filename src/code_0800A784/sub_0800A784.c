/* sub_0800A784  (original: 0x0800A784-0x0800A794 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08003ED4();
extern int sub_0800A680();
extern undefined1 volatile DAT_03000e90;


void sub_0800A784(void)

{
  sub_0800A680();
  sub_08003ED4(&DAT_03000e90);
  return;
}

