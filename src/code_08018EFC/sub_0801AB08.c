/* sub_0801AB08  (original: 0x0801AB08-0x0801AB2A in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801A9CC();


void sub_0801AB08(undefined4 *param_1)

{
  int iVar1;
  
  sub_0801A9CC();
  iVar1 = *(int *)param_1[param_1[1] * 2];
  __call_via_r2((int *)param_1[param_1[1] * 2],*param_1,*(int *)(iVar1 + 4) + iVar1);
  return;
}

