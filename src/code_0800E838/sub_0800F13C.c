/* sub_0800F13C  (original: 0x0800F13C-0x0800F162 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08006942();
extern undefined volatile DAT_03001120;


void sub_0800F13C(int *param_1)

{
  sub_08006942(&DAT_03001120,param_1,param_1[10]);
  param_1[10] = 0;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

