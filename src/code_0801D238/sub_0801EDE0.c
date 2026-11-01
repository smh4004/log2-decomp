/* sub_0801EDE0  (original: 0x0801EDE0-0x0801EDFA in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _080237C0;


void sub_0801EDE0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080237C0;
    param_1[1] = 0;
  }
  return;
}

