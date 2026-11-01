/* sub_08001D38  (original: 0x08001D38-0x08001D56 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_DISPCNT;
extern undefined1 volatile REG_BLDALPHA;


void sub_08001D38(int param_1,int param_2)

{
  REG_BLDALPHA = '\x10' - (char)(param_2 >> 1);
  if (0xf < param_2) {
    REG_DISPCNT = 8000;
    *(undefined1 *)(param_1 + 4) = 0x20;
  }
  return;
}

