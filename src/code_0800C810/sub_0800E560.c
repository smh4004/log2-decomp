/* sub_0800E560  (original: 0x0800E560-0x0800E582 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800F8B6();


void sub_0800E560(int param_1,int param_2)

{
  int iVar1;
  
  sub_0800F8B6();
  param_2 = *(int *)(param_1 + 0x188) + param_2;
  *(int *)(param_1 + 0x188) = param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x180) + 4);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x188) = iVar1;
  }
  return;
}

