/* sub_08020184  (original: 0x08020184-0x080201F8 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 86% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087FC93C;


void sub_08020184(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x5e);
  }
  bVar1 = *(byte *)(param_1 + 0x4a);
  if (-1 < (int)((uint)bVar1 << 0x1d)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x58) & 0x11) == 0) {
    if (-1 < (int)((uint)bVar1 << 0x1c)) goto _080201E0;
  }
  else {
    if (*(byte *)(param_1 + 0x5a) == 0xff) goto _080201E0;
    *(undefined4 *)(param_1 + 0x44) =
         *(undefined4 *)(&gUnknown_087FC93C + (uint)*(byte *)(param_1 + 0x5a) * 4);
    *(byte *)(param_1 + 0x4a) = bVar1 | 8;
  }
  if (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x54) = 0x8020143;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  }
_080201E0:
  if ((*(byte *)(param_1 + 0x58) & 0x44) != 0) {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x5c);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  }
  return;
}

