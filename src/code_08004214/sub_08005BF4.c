/* sub_08005BF4  (original: 0x08005BF4-0x08005C0A in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08000CA8();
extern undefined1 volatile REG_BLDALPHA;


void sub_08005BF4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) < 2) {
    sub_08000CA8();
  }
  else {
    REG_BLDALPHA = (char)(param_2 >> 1);
  }
  return;
}

