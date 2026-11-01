/* sub_0800E590  (original: 0x0800E590-0x0800E5A4 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined * volatile gUnknown_0840DB00;


bool sub_0800E590(int param_1,int param_2)

{
  return *(undefined **)(param_1 + 0x18) == (&gUnknown_0840DB00)[param_2];
}

