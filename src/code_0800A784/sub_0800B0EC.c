/* sub_0800B0EC  (original: 0x0800B0EC-0x0800B11A in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000ea0;
extern undefined volatile DAT_03000ea2;


void sub_0800B0EC(int param_1)

{
  int iVar1;
  
  iVar1 = (uint)DAT_03000e90 * 0x1c;
  if (*(short *)(&DAT_03000ea2 + iVar1) < param_1) {
    *(undefined2 *)(&DAT_03000ea0 + iVar1) = *(undefined2 *)(&DAT_03000ea2 + iVar1);
    return;
  }
  if (param_1 < 0) {
    *(undefined2 *)(&DAT_03000ea0 + iVar1) = 0;
    return;
  }
  *(short *)(&DAT_03000ea0 + iVar1) = (short)param_1;
  return;
}

