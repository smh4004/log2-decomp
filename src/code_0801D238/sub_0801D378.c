/* sub_0801D378  (original: 0x0801D378-0x0801D3A4 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 90% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08020E5C();
extern int sub_0801F08C();
extern undefined volatile _08023764;


undefined4 * sub_0801D378(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x40), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023764;
  sub_08020E5C(param_1 + 2,0xf0,0xa0);
  param_1[1] = 0;
  return param_1;
}

