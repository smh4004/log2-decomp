/* sub_0800BE84  (original: 0x0800BE84-0x0800BEB6 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0800BE14();


bool sub_0800BE84(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x2c);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + param_1[2];
  sub_0800BE14(0,0,0,0x100 - (iVar1 + param_1[2]));
  return 0xff < param_1[1];
}

