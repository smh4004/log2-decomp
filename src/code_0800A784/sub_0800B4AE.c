/* sub_0800B4AE  (original: 0x0800B4AE-0x0800B4FC in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 14/14 snapshots, 86% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08006DA6();
extern undefined4 volatile DAT_03001fd8;
extern undefined4 volatile DAT_03001fdc;
extern undefined volatile DAT_03001120;


undefined4 *
sub_0800B4AE(undefined4 *param_1,undefined4 param_2,undefined2 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x1c), param_1 != (undefined4 *)0x0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    uVar1 = param_4[1];
    param_1[3] = *param_4;
    param_1[4] = uVar1;
    param_1[6] = 0;
    param_1[5] = param_5;
    DAT_03001fd8 = 0;
    *(undefined2 *)(param_1 + 2) = *param_3;
    DAT_03001fdc = 1;
    sub_08006DA6(&DAT_03001120,0xd,0);
  }
  return param_1;
}

