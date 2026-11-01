/* sub_08010730  (original: 0x08010730-0x08010752 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080076EE();
extern undefined * volatile gUnknown_086D760C;


void sub_08010730(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 4) + 1;
  *(char *)(param_1 + 4) = (char)iVar1;
  if (*(undefined **)(param_2 + 0x28) != (&gUnknown_086D760C)[(uint)(iVar1 * 0x10000000) >> 0x1e]) {
    sub_080076EE();
  }
  return;
}

