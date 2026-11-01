/* sub_08001DC8  (original: 0x08001DC8-0x08001DDA in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FD56();
extern undefined volatile DAT_03002c80;


void sub_08001DC8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  sub_0801FD56(&DAT_03002c80);
  return;
}

