/* sub_0800775A  (original: 0x0800775A-0x08007772 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0800775A(int param_1)

{
  *(uint *)(param_1 + 0x3c) =
       *(int *)(*(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x10) * 4) +
       (uint)*(ushort *)(param_1 + 0x14) * 0xc;
  return 1;
}

