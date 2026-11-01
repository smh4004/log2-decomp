/* sub_08011F78  (original: 0x08011F78-0x08011F88 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E130();


void sub_08011F78(undefined4 param_1,int param_2)

{
  sub_0800E130();
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xec;
  return;
}

