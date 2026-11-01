/* sub_0801F412  (original: 0x0801F412-0x0801F43C in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0801F412(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  do {
    uVar1 = 0x1000;
    if (param_4 < 0x1000) {
      uVar1 = param_4;
    }
    param_4 = param_4 - uVar1;
    *param_1 = param_3;
    param_1[1] = param_2;
    *(short *)(param_1 + 2) = (short)(uVar1 >> 2);
    *(undefined2 *)((int)param_1 + 10) = 0x8400;
    param_2 = param_2 + uVar1;
    param_3 = param_3 + uVar1;
  } while (param_4 != 0);
  return;
}

