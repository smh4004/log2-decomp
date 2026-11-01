/* sub_080085AC  (original: 0x080085AC-0x080085EC in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 53% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern ushort volatile DAT_030022ae;
extern byte volatile DAT_03000e90;
extern undefined4 volatile DAT_03000eb0;


void sub_080085AC(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_2 + 0x28) + *param_2;
  if (((*(int *)(param_1 + 8) != 0) && ((DAT_030022ae & 1) != 0)) &&
     (((&DAT_03000eb0)[(uint)DAT_03000e90 * 7] & 4) != 0)) {
    __call_via_r2(param_2,0x27,iVar1);
    return;
  }
  __call_via_r2(param_2,0,iVar1);
  return;
}

