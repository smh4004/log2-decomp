/* sub_0800AAAE  (original: 0x0800AAAE-0x0800AAC6 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800C73A();
extern undefined1 volatile DAT_03002080;


void sub_0800AAAE(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0800C73A(&DAT_03002080,param_1[iVar1],param_3,param_4,param_4);
  return;
}

