/* sub_0801FE20  (original: 0x0801FE20-0x0801FEB0 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 66% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030026d4;
extern undefined volatile gUnknown_087FC93C;


void sub_0801FE20(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x58);
  if ((bVar1 & 0x11) == 0) {
    if ((bVar1 & 0x44) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x5c);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
    }
  }
  else if (*(byte *)(param_1 + 0x5a) == 0xff) {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfb;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
    uVar2 = *(undefined4 *)(&gUnknown_087FC93C + (uint)*(byte *)(param_1 + 0x5a) * 4);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined1 *)(param_1 + 0x4a) = 4;
    if ((int)((uint)bVar1 << 0x1a) < 0) {
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x17;
    }
    else {
      *(uint *)(param_1 + 0x28) = *(int *)(DAT_030026d4 + 8) + (uint)*(byte *)(param_1 + 0x5b) * 0xc
      ;
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x1f;
    }
  }
  return;
}

