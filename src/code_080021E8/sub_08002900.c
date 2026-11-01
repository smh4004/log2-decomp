/* sub_08002900  (original: 0x08002900-0x08002928 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_04000053;
extern undefined1 volatile REG_BLDALPHA;


void sub_08002900(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x118) == 0) {
    REG_BLDALPHA = (char)(param_2 >> 1);
  }
  else {
    REG_BLDALPHA = (char)param_2 + -0x10;
    DAT_04000053 = ' ' - (char)param_2;
    if (param_2 < 0x11) {
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    }
  }
  return;
}

