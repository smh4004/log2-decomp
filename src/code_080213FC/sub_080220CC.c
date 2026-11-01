/* sub_080220CC  (original: 0x080220CC-0x080220EE in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int __call_via_r7();


void sub_080220CC(int param_1,int param_2,int param_3)

{
  if (param_1 != param_2) {
    do {
      __call_via_r7(param_1);
      param_1 = param_1 + param_3;
    } while (param_1 != param_2);
  }
  return;
}

