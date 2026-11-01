/* sub_080078E4  (original: 0x080078E4-0x0800791A in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08019B30();
extern undefined volatile _08024E84;


undefined4 * sub_080078E4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,short *param_4)

{
  short sVar1;
  
  sub_08019B30();
  *param_1 = &_08024E84;
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_1[0x12] + 3);
  *(undefined1 *)((int)param_1 + 0x155) = *(undefined1 *)(param_1[0x12] + 4);
  sVar1 = param_4[1];
  param_1[0x56] = (int)*param_4 << 8;
  param_1[0x57] = (int)sVar1 << 8;
  return param_1;
}

