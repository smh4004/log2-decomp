/* sub_080207C0  (original: 0x080207C0-0x08020804 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 69% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined * volatile gUnknown_087FCB1C;


void sub_080207C0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x4a) >> 2;
  *(byte *)(param_1 + 0x4a) = bVar1 << 2;
  if (((int)((uint)bVar1 << 0x1f) < 0) && (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x40))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x40);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  if (*(byte *)(param_1 + 0x58) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x5d);
    if ((*(byte *)(param_1 + 0x58) & 0x88) == 0) {
      uVar2 = 0;
    }
    __call_via_r1(param_1,(&gUnknown_087FCB1C)[uVar2],&gUnknown_087FCB1C,0x88,param_4);
  }
  return;
}

