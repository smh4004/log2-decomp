/* sub_0800DEA4  (original: 0x0800DEA4-0x0800DEBC in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern ushort volatile DAT_030022b0;


undefined4 sub_0800DEA4(void)

{
  if (((DAT_030022b0 & 1) == 0) && (-1 < (int)((uint)DAT_030022b0 << 0x1e))) {
    return 0;
  }
  return 1;
}

