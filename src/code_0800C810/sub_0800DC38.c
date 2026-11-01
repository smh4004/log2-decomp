/* sub_0800DC38  (original: 0x0800DC38-0x0800DC64 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 90% of instructions covered.
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_0800BE7A();


undefined4 sub_0800DC38(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  iVar1 = __16__rt_sdiv(*(undefined4 *)(param_1 + 8),iVar1 * 0x100);
  sub_0800BE7A(0x100 - iVar1);
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}

