/* sub_080100EC  (original: 0x080100EC-0x08010118 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080076BC();
extern int sub_080076EE();
extern undefined volatile gUnknown_086D0DC4;


void sub_080100EC(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 4) - 1;
  *(byte *)(param_1 + 4) = bVar1;
  if (bVar1 == 0) {
    sub_080076BC();
  }
  else if (*(int *)(param_2 + 0x28) != *(int *)(&gUnknown_086D0DC4 + (uint)(bVar1 >> 2) * 4)) {
    sub_080076EE();
  }
  return;
}

