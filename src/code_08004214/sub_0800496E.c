/* sub_0800496E  (original: 0x0800496E-0x0800498C in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_DISPCNT;
extern undefined1 volatile REG_BLDALPHA;


void sub_0800496E(int param_1,int param_2)

{
  REG_BLDALPHA = '\x10' - (char)(param_2 >> 1);
  if (0xf < param_2) {
    REG_DISPCNT = 0xf00;
    *(undefined1 *)(param_1 + 4) = 0x20;
  }
  return;
}

