/* sub_0800E1DC  (original: 0x0800E1DC-0x0800E20E in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0800E1DC(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_2 + 0x30);
  __call_via_r1(param_2,iVar1 + *param_2,iVar1,param_4,param_4);
  param_2[0x56] = *(int *)(param_1 + 8) << 8;
  param_2[0x57] = *(int *)(param_1 + 0xc) << 8;
  __call_via_r1(param_2,*(int *)(*param_2 + 0x34) + *param_2);
  return;
}

