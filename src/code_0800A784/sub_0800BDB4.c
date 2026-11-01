/* sub_0800BDB4  (original: 0x0800BDB4-0x0800BDCC in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006A38();
extern int sub_0800B520();
extern undefined volatile DAT_03001120;


void sub_0800BDB4(int param_1)

{
  sub_08006A38(&DAT_03001120);
  sub_0800B520(*(undefined4 *)(param_1 + 4));
  return;
}

