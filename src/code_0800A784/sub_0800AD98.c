/* sub_0800AD98  (original: 0x0800AD98-0x0800ADB6 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_03000ea0;


void sub_0800AD98(int *param_1)

{
  param_1[*param_1] = (int)*(short *)(&DAT_03000ea0 + param_1[*param_1] * 0x1c);
  return;
}

