/* sub_0800BF08  (original: 0x0800BF08-0x0800BF42 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 10/10 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800BF08(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  while (iVar1 = iVar2 + -1, -1 < iVar1) {
    piVar3 = (int *)param_1[iVar2];
    iVar2 = iVar1;
    if (piVar3 != (int *)0x0) {
      __call_via_r2(piVar3,1,*(int *)*piVar3 + *piVar3);
    }
  }
  *param_1 = 0;
  param_1[0x21] = 1;
  param_1[0x23] = 0;
  param_1[0x22] = param_1[0x22] + 1;
  return;
}

