/* sub_08004EDC  (original: 0x08004EDC-0x08004F00 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08006250();
extern undefined volatile DAT_03001090;


void sub_08004EDC(int *param_1)

{
  __call_via_r1(param_1,*(int *)(*param_1 + 0x24) + *param_1);
  sub_08006250(&DAT_03001090);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x28) + *param_1);
  return;
}

