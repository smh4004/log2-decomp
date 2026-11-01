/* sub_08021344  (original: 0x08021344-0x0802135C in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080236CC();
extern undefined4 volatile DAT_03003888;
extern undefined4 volatile DAT_0300388c;


void sub_08021344(int param_1,int param_2)

{
  DAT_03003888 = *(undefined4 *)(param_1 + 0x2c);
  DAT_0300388c = *(undefined4 *)(param_1 + 0x30);
  sub_080236CC(param_1,param_2,0x3003880);
  return;
}

