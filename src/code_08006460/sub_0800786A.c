/* sub_0800786A  (original: 0x0800786A-0x080078A2 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 70% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


int sub_0800786A(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  
  if (param_2 == 5) {
    if (*(int *)(param_1 + 0x48) != param_3) {
      param_1 = 0;
    }
  }
  else if (param_2 == 9) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    param_1 = 0;
  }
  else if (param_2 == 0xd) {
    piVar1 = *(int **)(param_1 + 0x18);
    __call_via_r2(piVar1,param_1,*(int *)(*piVar1 + 0x10) + *piVar1,piVar1,param_4);
    param_1 = 0;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}

