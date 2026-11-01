/* sub_0801F394  (original: 0x0801F394-0x0801F3BA in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 70% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080236A8();
extern int sub_08021DF0();


void sub_0801F394(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int a3;
  
  a3 = *param_1;
  if (a3 == 0) {
    sub_08021DF0(param_2,param_1 + 2,param_1[1],0,param_4);
  }
  else if ((a3 == 1) || (a3 == 2)) {
    sub_080236A8(param_2,(int)(param_1 + 2),(int)param_1,a3);
  }
  return;
}

