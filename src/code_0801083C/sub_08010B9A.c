/* sub_08010B9A  (original: 0x08010B9A-0x08010BCE in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03000eb0;


int sub_08010B9A(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return -1;
    }
  } while (((&DAT_03000eb0)[*(int *)(iVar1 * 8 + param_1 + 0xc) * 7] & 2) == 0);
  return iVar1;
}

