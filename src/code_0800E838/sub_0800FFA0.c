/* sub_0800FFA0  (original: 0x0800FFA0-0x0800FFC0 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


void sub_0800FFA0(undefined4 param_1,int *param_2)

{
  __call_via_r1(param_2,*(int *)(*param_2 + 0x30) + *param_2);
  sub_080068CA(&DAT_03001120,param_2);
  return;
}

