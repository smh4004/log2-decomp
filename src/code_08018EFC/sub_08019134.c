/* sub_08019134  (original: 0x08019134-0x0801915C in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08004FF8();
extern int sub_0801F08C();
extern undefined volatile _0802517C;


undefined4 * sub_08019134(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_0802517C;
  }
  return param_1;
}

