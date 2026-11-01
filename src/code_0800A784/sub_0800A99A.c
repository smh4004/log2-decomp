/* sub_0800A99A  (original: 0x0800A99A-0x0800A9B6 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800C2F8();
extern undefined4 volatile DAT_03001fd8;


void sub_0800A99A(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  if (*(int *)(*(int *)(param_1 + 0x24) + 0x8c) != 0) {
    param_3 = &DAT_03001fd8;
    DAT_03001fd8 = 1;
  }
  sub_0800C2F8(*(undefined4 *)(param_1 + 0x10),0,param_3,param_4,param_4);
  return;
}

