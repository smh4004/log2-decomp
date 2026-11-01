/* sub_080270C8  (original: 0x080270C8-0x080270E0 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 8/8 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern int sub_080108CE();


void sub_080270C8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_080108CE(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

