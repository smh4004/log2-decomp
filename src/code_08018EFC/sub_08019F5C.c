/* sub_08019F5C  (original: 0x08019F5C-0x08019F9A in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019B30();
extern int sub_0801F08C();
extern undefined4 volatile DAT_03001f34;
extern undefined volatile _0802564C;


undefined4 * sub_08019F5C(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x154), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08019B30(param_1,param_2,&DAT_03001f34);
  *param_1 = &_0802564C;
  uVar1 = param_3[1];
  param_1[0x10] = *param_3;
  param_1[0x11] = uVar1;
  param_1[1] = param_3[1];
  *(undefined1 *)(param_1 + 2) = 0x18;
  return param_1;
}

