/* sub_08020142  (original: 0x08020142-0x08020184 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087FCC1C;


void sub_08020142(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(&gUnknown_087FCC1C + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar3;
  *(uint *)(param_1 + 0x30) = uVar3;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar2 < uVar3) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf4;
  }
  return;
}

