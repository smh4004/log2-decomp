/* sub_08019C50  (original: 0x08019C50-0x08019CA2 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08020E5C();
extern int sub_0801F08C();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _08025E84;


undefined4 * sub_08019C50(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x50), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    uVar1 = sub_080067AC(&DAT_03001120,0x100);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08025E84;
    sub_08020E5C(param_1 + 4,0x20,8);
    param_1[0x12] = 0x80000000;
    param_1[0x13] = param_2;
    *(undefined1 *)(param_1 + 2) = 8;
    param_1[1] = 0;
  }
  return param_1;
}

