/* sub_08017802  (original: 0x08017802-0x0801781E in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080069A4();
extern int sub_08006AD8();
extern int __call_via_r1();
extern undefined volatile DAT_03001120;


void sub_08017802(int *param_1)

{
  __call_via_r1(param_1,*(int *)(*param_1 + 0x3c) + *param_1);
  sub_080069A4(&DAT_03001120);
  sub_08006AD8(&DAT_03001120);
  return;
}

