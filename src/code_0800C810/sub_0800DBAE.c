/* sub_0800DBAE  (original: 0x0800DBAE-0x0800DBE2 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@04000000.
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_0800DA96();


bool sub_0800DBAE(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x404) + 1;
  *(int *)(param_1 + 0x404) = iVar1;
  iVar1 = __16__rt_sdiv(*(undefined4 *)(param_1 + 0x408),iVar1 * 0x100,param_3,param_4,param_4);
  sub_0800DA96(param_1,0x100 - iVar1);
  return *(int *)(param_1 + 0x408) <= *(int *)(param_1 + 0x404);
}

