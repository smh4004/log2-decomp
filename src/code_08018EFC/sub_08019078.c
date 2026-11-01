/* sub_08019078  (original: 0x08019078-0x0801909E in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800772A();
extern int sub_08018FD4();
extern undefined volatile gUnknown_086FD4F8;


void sub_08019078(int param_1)

{
  int iVar1;
  
  sub_0800772A();
  iVar1 = *(int *)(param_1 + 0x158) + 1;
  *(int *)(param_1 + 0x158) = iVar1;
  *(undefined *)(param_1 + 0x10) = (&gUnknown_086FD4F8)[(uint)(iVar1 * 0x800000) >> 0x1e];
  sub_08018FD4(param_1);
  return;
}

