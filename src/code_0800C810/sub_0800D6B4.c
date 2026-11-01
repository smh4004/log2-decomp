/* sub_0800D6B4  (original: 0x0800D6B4-0x0800D6C8 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined * volatile gUnknown_083ED21C;


bool sub_0800D6B4(int param_1,int param_2)

{
  return *(undefined **)(param_1 + 0x18) == (&gUnknown_083ED21C)[param_2];
}

