/* sub_0801A078  (original: 0x0801A078-0x0801A0A4 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080076EE();
extern int sub_080076BC();
extern undefined volatile gUnknown_086FDFBC;


void sub_0801A078(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 4) - 1;
  *(byte *)(param_1 + 4) = bVar1;
  if (bVar1 == 0) {
    sub_080076BC();
  }
  else if (*(int *)(param_2 + 0x28) != *(int *)(&gUnknown_086FDFBC + (uint)(bVar1 >> 2) * 4)) {
    sub_080076EE();
  }
  return;
}

