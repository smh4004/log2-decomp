/* sub_080220F0  (original: 0x080220F0-0x08022118 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_080220F0(int param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  if (param_2 < param_3) {
    do {
      __call_via_r2(param_1,param_2,param_5);
      param_2 = param_2 + param_4;
      param_1 = param_1 + param_4;
    } while (param_2 < param_3);
  }
  return;
}

