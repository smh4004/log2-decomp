/* sub_080028EC  (original: 0x080028EC-0x08002900 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 80% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_04000053;
extern undefined1 volatile REG_BLDALPHA;


void sub_080028EC(int param_1,int param_2)

{
  REG_BLDALPHA = (char)param_2;
  DAT_04000053 = '\x10' - (char)param_2;
  if (0xf < param_2) {
    *(undefined1 *)(param_1 + 4) = 0x20;
  }
  return;
}

