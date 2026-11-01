/* sub_080056B0  (original: 0x080056B0-0x08005724 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08020E5C();
extern undefined1 volatile gUnknown_08028724;
extern undefined volatile gUnknown_081D6B1C;
extern undefined volatile _08023EE8;


undefined4 * sub_080056B0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x8c), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = &_08023EE8;
    sub_08020E5C(param_1 + 7,0xa0,0x90);
    sub_08020E5C(param_1 + 0x15,0xa0,0x18);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 0x15) = 1;
    param_1[0x18] = &gUnknown_081D6B1C;
    *(undefined1 *)((int)param_1 + 0x7d) = 2;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    param_1[0x1d] = 0x8020ec3;
    param_1[0x16] = 0x50;
    param_1[0x17] = 0x10;
    param_1[10] = &gUnknown_08028724;
    *(undefined1 *)(param_1 + 0x11) = 1;
    param_1[0xf] = 0x8020ec3;
  }
  return param_1;
}

