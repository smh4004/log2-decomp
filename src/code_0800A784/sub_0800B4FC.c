/* sub_0800B4FC  (original: 0x0800B4FC-0x0800B520 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 14/14 snapshots, 87% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006DA6();
extern int sub_0801F110();
extern undefined4 volatile DAT_03001fdc;
extern undefined volatile DAT_03001120;


void sub_0800B4FC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_03001fdc = 0;
  sub_08006DA6(&DAT_03001120,0xe,0,param_4,param_4);
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

