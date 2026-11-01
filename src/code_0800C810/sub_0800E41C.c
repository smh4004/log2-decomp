/* sub_0800E41C  (original: 0x0800E41C-0x0800E438 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080063E0();
extern undefined4 volatile DAT_03001104;


void sub_0800E41C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x18d) == '\0') {
    sub_080063E0(param_2,DAT_03001104,param_3,param_1 + 0x180,param_4);
  }
  return;
}

