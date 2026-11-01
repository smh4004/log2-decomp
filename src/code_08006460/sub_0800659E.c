/* sub_0800659E  (original: 0x0800659E-0x08006618 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 86% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0800659E(undefined1 *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  
  uVar2 = (undefined1)param_2;
  *(short *)(param_1 + param_2 * 10 + 0x698) =
       *(short *)(param_1 + param_2 * 10 + 0x698) + *(short *)(param_1 + param_3 * 10 + 0x698);
  param_1[param_2 * 10 + 0x69a] = param_1[param_3 * 10 + 0x69a];
  if ((byte)param_1[param_3 * 10 + 0x69a] != 0xff) {
    param_1[(uint)(byte)param_1[param_3 * 10 + 0x69a] * 10 + 0x69b] = uVar2;
  }
  param_1[param_2 * 10 + 0x69d] = param_1[param_3 * 10 + 0x69d];
  if ((byte)param_1[param_3 * 10 + 0x69d] == 0xff) {
    *param_1 = uVar2;
  }
  else {
    param_1[(uint)(byte)param_1[param_3 * 10 + 0x69d] * 10 + 0x69c] = uVar2;
  }
  param_1[param_2 * 10 + 0x69c] = param_1[param_3 * 10 + 0x69c];
  if ((byte)param_1[param_3 * 10 + 0x69c] != 0xff) {
    param_1[(uint)(byte)param_1[param_3 * 10 + 0x69c] * 10 + 0x69d] = uVar2;
  }
  param_1[param_3 * 10 + 0x694] = 0xff;
  param_1[param_3 * 10 + 0x69b] = 0xff;
  bVar1 = param_1[1];
  param_1[param_3 * 10 + 0x69a] = bVar1;
  if (bVar1 != 0xff) {
    param_1[(uint)bVar1 * 10 + 0x69b] = (char)param_3;
  }
  param_1[1] = (char)param_3;
  return;
}

