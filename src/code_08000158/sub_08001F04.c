/* sub_08001F04  (original: 0x08001F04-0x08001F54 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08020E5C();
extern undefined volatile _08023790;


undefined4 * sub_08001F04(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x54), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = &_08023790;
    sub_08020E5C(param_1 + 7,0xf0,0x40);
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = param_2;
    *(undefined1 *)((int)param_1 + 0x45) = 2;
    *(undefined1 *)(param_1 + 0x11) = 1;
    param_1[0xf] = 0x8020ec3;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return param_1;
}

