/* sub_08006250  (original: 0x08006250-0x08006264 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080051C2();
extern int sub_08005292();
extern undefined4 volatile DAT_03000ff8;
extern undefined4 volatile DAT_0300107c;


void sub_08006250(undefined4 param_1)

{
  sub_08005292(&DAT_0300107c,param_1);
  sub_080051C2(&DAT_03000ff8);
  return;
}

