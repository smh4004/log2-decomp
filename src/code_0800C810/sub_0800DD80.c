/* sub_0800DD80  (original: 0x0800DD80-0x0800DDA6 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03000ff4;


void sub_0800DD80(int param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(byte *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 8) = DAT_03000ff4;
  *(char *)(param_1 + 5) =
       (char)((int)(((uint)((int)(100 - (uint)param_3) >> 0x1f) >> 0x1c) + (100 - (uint)param_3)) >>
             4) + '\x01';
  *(undefined1 *)(param_1 + 6) = 1;
  DAT_03000ff4 = param_1;
  return;
}

