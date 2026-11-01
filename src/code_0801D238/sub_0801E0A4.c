/* sub_0801E0A4  (original: 0x0801E0A4-0x0801E0C6 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _080254B0;


void sub_0801E0A4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080254B0;
    param_1[1] = param_3;
    param_1[2] = param_2;
    param_1[3] = 0;
  }
  return;
}

