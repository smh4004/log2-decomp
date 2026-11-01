/* sub_080206FC  (original: 0x080206FC-0x0802075C in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FEE8();
extern undefined volatile gUnknown_087FCC1C;


void sub_080206FC(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087FCC1C + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar2 < uVar4) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x801fee9;
    sub_0801FEE8();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) - (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (iVar3 >> 0x18 < 1) {
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}

