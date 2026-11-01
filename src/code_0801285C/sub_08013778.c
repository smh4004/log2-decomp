/* sub_08013778  (original: 0x08013778-0x0801379E in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 83% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


undefined4 sub_08013778(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 9) {
    param_1[0x10] = 0;
  }
  else if (param_2 == 10) {
    iVar1 = *(int *)(*param_1 + 8);
    __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  }
  return 0;
}

