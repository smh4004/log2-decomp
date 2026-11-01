/* sub_0800892E  (original: 0x0800892E-0x08008944 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800763C();
extern undefined4 volatile DAT_03001f64;


void sub_0800892E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x168) = 1;
  sub_0800763C(param_1,&DAT_03001f64,0x168,param_4,param_4);
  return;
}

