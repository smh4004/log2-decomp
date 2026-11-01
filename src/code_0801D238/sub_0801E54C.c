/* sub_0801E54C  (original: 0x0801E54C-0x0801E56A in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08024DA8;


void sub_0801E54C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08024DA8;
    param_1[1] = param_2;
    param_1[2] = 0;
  }
  return;
}

