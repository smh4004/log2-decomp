/* sub_08010B08  (original: 0x08010B08-0x08010B60 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08020E5C();
extern int sub_08006F4A();
extern undefined volatile _08023BD8;
extern undefined4 volatile DAT_03001fa8;
extern undefined volatile _080247A8;
extern undefined volatile DAT_03001120;


undefined4 * sub_08010B08(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xd8), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = &_080247A8;
    param_1[2] = 0;
    sub_08020E5C(param_1 + 0x14,0x20,0x20);
    param_1[0x22] = &_08023BD8;
    param_1[0x27] = &_08023BD8;
    param_1[0x2c] = &_08023BD8;
    param_1[0x31] = &_08023BD8;
    param_1[0x13] = DAT_03001fa8;
    sub_08006F4A(&DAT_03001120);
    *(undefined1 *)((int)param_1 + 0x49) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  return param_1;
}

