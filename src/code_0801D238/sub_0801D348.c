/* sub_0801D348  (original: 0x0801D348-0x0801D368 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800BE14();


void sub_0801D348(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (*(int *)(param_1 + 0x1c) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x14) - iVar1;
  }
  sub_0800BE14(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),iVar1 * *(int *)(param_1 + 0x20),param_4);
  return;
}

