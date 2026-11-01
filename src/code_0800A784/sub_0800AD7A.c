/* sub_0800AD7A  (original: 0x0800AD7A-0x0800AD98 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_03000e9c;


void sub_0800AD7A(int *param_1)

{
  param_1[*param_1] = (int)*(short *)(&DAT_03000e9c + param_1[*param_1] * 0x1c);
  return;
}

