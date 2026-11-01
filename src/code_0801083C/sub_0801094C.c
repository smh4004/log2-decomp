/* sub_0801094C  (original: 0x0801094C-0x08010976 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08025A98;


void sub_0801094C(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x1c), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &_08025A98;
    param_1[4] = param_2;
    uVar1 = param_3[1];
    param_1[5] = *param_3;
    param_1[6] = uVar1;
  }
  return;
}

