/* sub_08018FA4  (original: 0x08018FA4-0x08018FC6 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080076EE();
extern undefined * volatile gUnknown_086FD4D8;


void sub_08018FA4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 4) + 1;
  *(char *)(param_1 + 4) = (char)iVar1;
  if (*(undefined **)(param_2 + 0x28) != (&gUnknown_086FD4D8)[(uint)(iVar1 * 0x8000000) >> 0x1d]) {
    sub_080076EE();
  }
  return;
}

