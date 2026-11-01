/* sub_0800891C  (original: 0x0800891C-0x0800892E in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800763C();
extern undefined4 volatile DAT_03001f5c;


void sub_0800891C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x168) = 0;
  sub_0800763C(param_1,&DAT_03001f5c,0x168,param_4,param_4);
  return;
}

