/* sub_0801E700  (original: 0x0801E700-0x0801E722 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _0802549C;


void sub_0801E700(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0802549C;
    param_1[1] = param_2;
    param_1[3] = param_3;
    param_1[2] = 0;
  }
  return;
}

