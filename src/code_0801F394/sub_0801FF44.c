/* sub_0801FF44  (original: 0x0801FF44-0x0801FFC8 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0801FE20();
extern int sub_0801FEE8();
extern int sub_0801FF16();


void sub_0801FF44(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  sub_0801FE20();
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 0x5e);
  }
  bVar1 = *(byte *)(param_1 + 0x4c);
  if ((bVar1 & 0xf) == 0) {
    *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
    *(undefined4 *)(param_1 + 0x54) = 0x801ff17;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    if (*(char *)(param_1 + 0x4b) == '\x0f') {
      sub_0801FF16(param_1);
    }
  }
  else {
    uVar2 = (uint)bVar1 << 0x18;
    if (uVar2 >> 0x1c != 0) {
      if ((~(uint)bVar1 & 0xf) == 0) {
        *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
        sub_0801FF16(param_1);
      }
      else if (uVar2 >> 0x1c == 0xf) {
        *(byte *)(param_1 + 0x4b) = bVar1 & 0xf;
        sub_0801FEE8(param_1);
        return;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x54) = 0x801fee9;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    if (*(char *)(param_1 + 0x4b) == '\x0f') {
      sub_0801FEE8(param_1);
      return;
    }
  }
  return;
}

