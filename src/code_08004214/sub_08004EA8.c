/* sub_08004EA8  (original: 0x08004EA8-0x08004EDC in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006AD8();
extern int __call_via_r1();
extern int * volatile DAT_03000ff4;
extern undefined volatile DAT_03001120;


void sub_08004EA8(int *param_1)

{
  __call_via_r1(DAT_03000ff4,*(int *)*DAT_03000ff4 + *DAT_03000ff4);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x1c) + *param_1);
  sub_08006AD8(&DAT_03001120);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x20) + *param_1);
  return;
}

