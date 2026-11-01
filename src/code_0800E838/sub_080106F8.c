/* sub_080106F8  (original: 0x080106F8-0x08010722 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080076EE();
extern undefined * volatile gUnknown_086D75F8;


void sub_080106F8(int param_1,int param_2)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 4) < 0x81) {
    bVar1 = *(byte *)(param_1 + 4) + *(char *)(param_1 + 5);
    *(byte *)(param_1 + 4) = bVar1;
    if (*(undefined **)(param_2 + 0x28) != (&gUnknown_086D75F8)[bVar1 >> 5]) {
      sub_080076EE(param_2);
    }
  }
  return;
}

