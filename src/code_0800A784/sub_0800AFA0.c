/* sub_0800AFA0  (original: 0x0800AFA0-0x0800AFC2 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080040EE();
extern undefined1 volatile DAT_03000e90;


void sub_0800AFA0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_080040EE(&DAT_03000e90,param_1[iVar1 + -1],iVar2,param_4,param_4);
  return;
}

