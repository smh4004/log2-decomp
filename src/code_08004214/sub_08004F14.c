/* sub_08004F14  (original: 0x08004F14-0x08004F32 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08023C44;


void sub_08004F14(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    *param_1 = &_08023C44;
    param_1[2] = param_3;
  }
  return;
}

