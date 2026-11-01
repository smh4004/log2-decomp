/* sub_0801EFBC  (original: 0x0801EFBC-0x0801EFF4 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 78% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030022b4;
extern undefined volatile DAT_02000008;


void sub_0801EFBC(int param_1)

{
  ushort uVar1;
  
  *(undefined1 *)(param_1 + 6) = 1;
  uVar1 = *(ushort *)(param_1 + 8);
  if (*(ushort *)(param_1 + 10) == 0) {
    if (uVar1 == 0) {
      DAT_030022b4 = 0;
    }
    else {
      DAT_030022b4 = (uint)uVar1 * 4 + 0x2000000;
    }
  }
  else {
    *(ushort *)(&DAT_02000008 + (uint)*(ushort *)(param_1 + 10) * 4) = uVar1;
  }
  if (*(ushort *)(param_1 + 8) != 0) {
    *(undefined2 *)((uint)*(ushort *)(param_1 + 8) * 4 + 0x200000a) = *(undefined2 *)(param_1 + 10);
  }
  return;
}

