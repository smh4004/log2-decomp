/* sub_08001A66  (original: 0x08001A66-0x08001A8A in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08001A66(int param_1,int param_2,int param_3)

{
  if ((*(uint *)(*(int *)(param_2 * 0x18 + param_1 + param_3 * 4 + 0x42c) + 0x14) & 2) != 0) {
    return 1;
  }
  return 0;
}

