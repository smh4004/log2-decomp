/* sub_0800AF72  (original: 0x0800AF72-0x0800AFA0 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03000e90;
extern undefined1 volatile DAT_03000ea4;
extern undefined volatile gUnknown_081D967C;


void sub_0800AF72(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (&gUnknown_081D967C)[(uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14];
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = bVar1 & 1;
  return;
}

