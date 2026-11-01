/* sub_08002D5C  (original: 0x08002D5C-0x08002D7E in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 94% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_081D8FD4;


void sub_08002D5C(int param_1,undefined4 param_2,undefined1 param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_6 == 0) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  *(undefined **)(param_1 + 0x10) = &gUnknown_081D8FD4 + param_4 * 0x10;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  return;
}

