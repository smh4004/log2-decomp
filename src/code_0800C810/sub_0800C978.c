/* sub_0800C978  (original: 0x0800C978-0x0800C9C4 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 97% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800C8D8();
extern int sub_080067AC();
extern int sub_0801F08C();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _08024D40;


undefined4 * sub_0800C978(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0xf00;
    uVar1 = sub_080067AC(&DAT_03001120,0xf00);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08024D40;
    param_1[5] = param_2;
    *(undefined1 *)(param_1 + 2) = 2;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0xf0;
    sub_0800C8D8(param_1);
  }
  return param_1;
}

