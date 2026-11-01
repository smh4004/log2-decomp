/* sub_0800DE48  (original: 0x0800DE48-0x0800DE6E in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern int sub_08006DA6();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023720;
extern undefined volatile _08025150;


void sub_0800DE48(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_08025150;
  sub_08006DA6(&DAT_03001120,0xc,0,param_4,param_4);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

