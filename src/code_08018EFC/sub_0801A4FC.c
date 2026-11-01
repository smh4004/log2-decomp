/* sub_0801A4FC  (original: 0x0801A4FC-0x0801A568 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08020E5C();
extern int sub_0801F08C();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _08025C60;
extern undefined1 volatile gUnknown_08028724;


undefined4 * sub_0801A4FC(undefined4 *param_1)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x50), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x400;
    uVar1 = sub_080067AC(&DAT_03001120,0x400);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08025C60;
    sub_08020E5C(param_1 + 6,0x80,8);
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 3;
    param_1[9] = &gUnknown_08028724;
    *(undefined1 *)((int)param_1 + 0x41) = 2;
    *(undefined1 *)(param_1 + 0x10) = 1;
    param_1[0xe] = 0x8020ec3;
    *(undefined1 *)(param_1 + 6) = 1;
    param_1[7] = 0x40;
    param_1[8] = 7;
  }
  return param_1;
}

