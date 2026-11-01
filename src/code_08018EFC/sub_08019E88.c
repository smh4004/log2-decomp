/* sub_08019E88  (original: 0x08019E88-0x08019ECE in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _08025B2C;


undefined4 * sub_08019E88(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x24), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x40;
  uVar1 = sub_080067AC(&DAT_03001120,0x40);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_08025B2C;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = param_3;
  param_1[8] = 1;
  param_1[4] = param_2;
  param_1[6] = 0xffffffff;
  return param_1;
}

