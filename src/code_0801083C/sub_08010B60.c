/* sub_08010B60  (original: 0x08010B60-0x08010B9A in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03000eb0;


int sub_08010B60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(param_1 + 8) <= iVar1) {
      return -1;
    }
  } while (((&DAT_03000eb0)[*(int *)(iVar1 * 8 + param_1 + 0xc) * 7] & 2) == 0);
  return iVar1;
}

