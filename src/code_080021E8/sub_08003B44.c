/* sub_08003B44  (original: 0x08003B44-0x08003B72 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 11/11 snapshots, 31% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800379C();
extern int sub_08003520();
extern int sub_08003684();


void sub_08003B44(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    sub_0800379C();
  }
  else if (param_3 == 1) {
    sub_08003684();
  }
  else if (param_3 == 2) {
    sub_08003520(param_1,param_2,0,param_4,param_4);
  }
  else if (param_3 == 3) {
    sub_08003520(param_1,param_2,1,param_4,param_4);
  }
  return;
}

