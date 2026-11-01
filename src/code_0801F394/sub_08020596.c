/* sub_08020596  (original: 0x08020596-0x080205DE in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080201F8();
extern int sub_0801FE20();


void sub_08020596(int param_1)

{
  byte bVar1;
  
  sub_0801FE20();
  if ((*(byte *)(param_1 + 0x58) & 0x11) != 0) {
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x5e);
  if ((bVar1 & 0xf) != 0) {
    *(byte *)(param_1 + 0x50) = bVar1 & 0xf;
  }
  if (((uint)bVar1 << 0x18) >> 0x1c != 0) {
    *(byte *)(param_1 + 0x4f) = bVar1 >> 4;
  }
  *(undefined4 *)(param_1 + 0x54) = 0x80201f9;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  sub_080201F8(param_1);
  return;
}

