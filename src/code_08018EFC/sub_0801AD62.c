/* sub_0801AD62  (original: 0x0801AD62-0x0801AD84 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _0802413C;


void sub_0801AD62(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0802413C;
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[4] = 1;
  }
  return;
}

