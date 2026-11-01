/* sub_08013D68  (original: 0x08013D68-0x08013DA0 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 81% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_08013D68(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == 9) {
    param_1[4] = 0;
  }
  else if (param_2 == 10) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1,10,param_4);
  }
  else if ((param_2 == 0xf) && (param_1[7] == param_3)) {
    param_1[7] = 0;
  }
  return 0;
}

