/* sub_080117C2  (original: 0x080117C2-0x080117E0 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 1/1 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0800BF6E();
extern undefined4 volatile DAT_03001fe0;


undefined4 sub_080117C2(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x10);
  __call_via_r1(*(int **)(param_1 + 0x10),*(int *)(iVar1 + 0x28) + iVar1);
  sub_0800BF6E(&DAT_03001fe0,param_1);
  return 1;
}

