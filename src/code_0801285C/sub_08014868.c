/* sub_08014868  (original: 0x08014868-0x08014894 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_0300109c;
extern int volatile DAT_030010a0;


undefined4 sub_08014868(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_0300109c;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x20) - DAT_030010a0;
  *(int *)(param_1 + 0x24) = iVar1;
  return 1;
}

