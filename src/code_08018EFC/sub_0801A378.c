/* sub_0801A378  (original: 0x0801A378-0x0801A39C in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@02000000.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08026020;


void sub_0801A378(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x12c10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08026020;
    param_1[1] = param_2;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}

