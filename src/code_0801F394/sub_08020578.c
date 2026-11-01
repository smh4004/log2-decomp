/* sub_08020578  (original: 0x08020578-0x08020596 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801FE20();
extern int __16__rt_sdiv();
extern undefined1 volatile DAT_030026cc;
extern undefined2 volatile DAT_030026ce;


void sub_08020578(int param_1)

{
  sub_0801FE20();
  DAT_030026cc = *(undefined1 *)(param_1 + 0x5e);
  DAT_030026ce = __16__rt_sdiv(DAT_030026cc,40000);
  return;
}

