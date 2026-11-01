/* sub_08012A28  (original: 0x08012A28-0x08012A50 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08012A28(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(int *)(*(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x10) * 4) +
                   (uint)*(ushort *)(param_1 + 0x14) * 0xc);
  *(char **)(param_1 + 0x3c) = pcVar1;
  *(int *)(param_1 + 0x40) = *pcVar1 + 0x70;
  *(int *)(param_1 + 0x44) = pcVar1[1] + 0x50;
  return 1;
}

