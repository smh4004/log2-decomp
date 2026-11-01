/* sub_080170D8  (original: 0x080170D8-0x0801710E in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080265C4();


void sub_080170D8(undefined4 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x160) = 100;
  *(undefined1 *)(param_2 + 0x161) = 100;
  *(undefined1 *)(param_2 + 0x162) = 100;
  *(undefined1 *)(param_2 + 0x163) = 0x80;
  *(undefined1 *)(param_2 + 0x164) = 0x80;
  sub_080265C4(param_2 + 0x188,0x40000000);
  sub_080265C4(param_2 + 0x18c,0x40500000);
  *(undefined4 *)(param_2 + 0x184) = 0;
  return;
}

