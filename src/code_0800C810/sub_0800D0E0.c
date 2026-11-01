/* sub_0800D0E0  (original: 0x0800D0E0-0x0800D0FC in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800CD56();


void sub_0800D0E0(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  sub_0800CD56(0,param_1);
  return;
}

