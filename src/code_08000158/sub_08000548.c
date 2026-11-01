/* sub_08000548  (original: 0x08000548-0x0800055E in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 70% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08000CA8();
extern undefined1 volatile REG_BLDALPHA;


void sub_08000548(int param_1,int param_2)

{
  if (*(char *)(param_1 + 9) == '\x03') {
    REG_BLDALPHA = (char)(param_2 >> 1);
  }
  else {
    sub_08000CA8();
  }
  return;
}

