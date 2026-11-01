/* sub_0800DE20  (original: 0x0800DE20-0x0800DE48 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08006DA6();
extern undefined volatile DAT_03001120;
extern undefined volatile _08025150;


undefined4 * sub_0800DE20(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(4), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08025150;
  sub_08006DA6(&DAT_03001120,0xb,0);
  return param_1;
}

