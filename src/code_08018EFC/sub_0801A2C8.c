/* sub_0801A2C8  (original: 0x0801A2C8-0x0801A2F8 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006A38();
extern int sub_08006DA6();
extern int __call_via_r1();
extern int volatile DAT_030020f8;
extern undefined volatile DAT_03001120;


void sub_0801A2C8(int *param_1)

{
  sub_08006A38(&DAT_03001120);
  if (DAT_030020f8 == 0) {
    sub_08006DA6(&DAT_03001120,10,0);
  }
  __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1);
  return;
}

