/* sub_08016EBE  (original: 0x08016EBE-0x08016EFA in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030021f4;


undefined4 sub_08016EBE(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x14);
  if ((((*piVar1 < *(int *)(DAT_030021f4 + 0x80a0)) && (*(int *)(DAT_030021f4 + 0x8098) < piVar1[2])
       ) && (piVar1[1] < *(int *)(DAT_030021f4 + 0x80a4))) &&
     (*(int *)(DAT_030021f4 + 0x809c) < piVar1[3])) {
    return 1;
  }
  return 0;
}

