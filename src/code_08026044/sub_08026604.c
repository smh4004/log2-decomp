/* sub_08026604  (original: 0x08026604-0x08026620 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 60% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _080247D8;


void sub_08026604(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080247D8;
  }
  return;
}

