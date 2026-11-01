/* sub_0800B0CA  (original: 0x0800B0CA-0x0800B0EC in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000e9c;
extern undefined volatile DAT_03000e9e;


void sub_0800B0CA(short param_1)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_03000e90;
  *(short *)(&DAT_03000e9e + uVar1 * 0x1c) = param_1;
  if (param_1 < *(short *)(&DAT_03000e9c + uVar1 * 0x1c)) {
    *(short *)(&DAT_03000e9c + uVar1 * 0x1c) = param_1;
  }
  return;
}

