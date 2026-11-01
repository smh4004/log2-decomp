/* sub_0800B0A0  (original: 0x0800B0A0-0x0800B0CA in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000e9c;
extern undefined volatile DAT_03000e9e;


void sub_0800B0A0(int param_1)

{
  short *psVar1;
  
  psVar1 = (short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c);
  if (*(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c) < param_1) {
    *psVar1 = *(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c);
    return;
  }
  if (param_1 < 0) {
    *psVar1 = 0;
    return;
  }
  *psVar1 = (short)param_1;
  return;
}

