/* sub_080017F6  (original: 0x080017F6-0x0800180C in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08000CA8();
extern undefined1 volatile REG_BLDALPHA;


void sub_080017F6(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) == 3) {
    sub_08000CA8();
  }
  else {
    REG_BLDALPHA = (char)(param_2 >> 1);
  }
  return;
}

