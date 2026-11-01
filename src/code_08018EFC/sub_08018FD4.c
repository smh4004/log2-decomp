/* sub_08018FD4  (original: 0x08018FD4-0x08019010 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08018FD4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(*(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x10) * 4);
  *(char **)(param_1 + 0x3c) = pcVar1;
  *(uint *)(param_1 + 0x150) = (0x28 - (uint)((byte)pcVar1[2] >> 1)) - (int)*pcVar1;
  if ((byte)pcVar1[3] < 0x21) {
    *(undefined4 *)(param_1 + 0x154) = 0x30;
  }
  else {
    *(uint *)(param_1 + 0x154) = (0x28 - (uint)((byte)pcVar1[3] >> 1)) - (int)pcVar1[1];
  }
  return;
}

