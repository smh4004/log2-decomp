/* sub_08013BC0  (original: 0x08013BC0-0x08013BF4 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080067AC();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _08024F38;


undefined4 * sub_08013BC0(undefined4 *param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = param_2;
  uVar1 = sub_080067AC(&DAT_03001120);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_08024F38;
  param_1[4] = 0;
  param_1[7] = param_3;
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 0x10);
    *(char *)((int)param_1 + 0x15) = (char)*(undefined4 *)(param_3 + 0x16c);
  }
  return param_1;
}

