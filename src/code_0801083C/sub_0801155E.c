/* sub_0801155E  (original: 0x0801155E-0x080115BE in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_080113A0();
extern int sub_080067AC();
extern int sub_08020E5C();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined1 volatile gUnknown_08028724;
extern undefined volatile _08025314;


undefined4 * sub_0801155E(undefined4 *param_1)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x4c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x1680;
    uVar1 = sub_080067AC(&DAT_03001120,0x1680);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08025314;
    sub_08020E5C(param_1 + 4,0x90,0x28);
    param_1[7] = &gUnknown_08028724;
    *(undefined1 *)(param_1 + 0xe) = 1;
    param_1[0xc] = 0x8020ec3;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[0x12] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    sub_080113A0(param_1);
  }
  return param_1;
}

