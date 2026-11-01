/* sub_0800ADD4  (original: 0x0800ADD4-0x0800ADF2 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_03000ea2;


void sub_0800ADD4(int *param_1)

{
  param_1[*param_1] = (int)*(short *)(&DAT_03000ea2 + param_1[*param_1] * 0x1c);
  return;
}

