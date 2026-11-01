/* sub_0800DBE2  (original: 0x0800DBE2-0x0800DC08 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_0800BE6C();


undefined4 sub_0800DBE2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  __16__rt_sdiv(*(undefined4 *)(param_1 + 8),iVar1 * 0x100);
  sub_0800BE6C();
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}

