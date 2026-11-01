/* sub_0800DC08  (original: 0x0800DC08-0x0800DC38 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@04000000.
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_0800DB18();


bool sub_0800DC08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x404) + 1;
  *(int *)(param_1 + 0x404) = iVar1;
  uVar2 = __16__rt_sdiv(*(undefined4 *)(param_1 + 0x408),iVar1 * 0x100,param_3,param_4,param_4);
  sub_0800DB18(param_1,uVar2);
  return *(int *)(param_1 + 0x408) <= *(int *)(param_1 + 0x404);
}

