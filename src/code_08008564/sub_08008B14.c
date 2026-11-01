/* sub_08008B14  (original: 0x08008B14-0x08008B5C in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 94% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _0802408C;


undefined4 * sub_08008B14(undefined4 *param_1)

{
  undefined2 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x28), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x500;
  uVar1 = sub_080067AC(&DAT_03001120,0x500);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_0802408C;
  *(undefined1 *)(param_1 + 2) = 4;
  param_1[1] = 0;
  param_1[9] = 8;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  return param_1;
}

