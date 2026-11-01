/* sub_08000640  (original: 0x08000640-0x080006DC in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_080220CC();
extern int sub_08020E5C();
extern undefined1 volatile DAT_03000e88;
extern undefined1 volatile gUnknown_08028724;
extern undefined1 volatile DAT_03000e89;
extern undefined1 volatile DAT_03000e8a;
extern undefined1 volatile DAT_03000e8b;
extern undefined volatile _08024304;
extern undefined volatile gUnknown_081D6B1C;


undefined4 *
sub_08000640(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xf4), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = &_08024304;
    sub_08020E5C(param_1 + 3,0x60,0x40);
    sub_08020E5C(param_1 + 0x11,8,0x10);
    sub_08020E5C(param_1 + 0x1f,0xa0,0x18);
    sub_080220CC(param_1 + 0x2d,param_1 + 0x3c,0x14,0x80265e9,param_4);
    *(undefined1 *)(param_1 + 0x3c) = DAT_03000e88;
    *(undefined1 *)((int)param_1 + 0xf1) = DAT_03000e89;
    *(undefined1 *)((int)param_1 + 0xf2) = DAT_03000e8a;
    *(undefined1 *)((int)param_1 + 0xf3) = DAT_03000e8b;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    param_1[0x22] = &gUnknown_081D6B1C;
    *(undefined1 *)((int)param_1 + 0xa5) = 2;
    *(undefined1 *)(param_1 + 0x29) = 1;
    param_1[0x27] = 0x8020ec3;
    param_1[0x20] = 0x50;
    param_1[0x21] = 0x10;
    param_1[6] = &gUnknown_08028724;
    *(undefined1 *)(param_1 + 0xd) = 1;
    param_1[0xb] = 0x8020ec3;
  }
  return param_1;
}

