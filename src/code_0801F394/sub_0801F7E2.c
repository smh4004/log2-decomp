/* sub_0801F7E2  (original: 0x0801F7E2-0x0801F7FC in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_0801F7E2(int param_1,undefined4 param_2)

{
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(undefined4 *)((char *)__frame + 0x0))
#define local_8 (*(int *)((char *)__frame + 0x4))
  local_c = *(undefined4 *)(param_1 + 4);
  local_8 = *(int *)(param_1 + 8) + -0xc;
  __call_via_r3(param_1,param_2,&local_c,*(undefined4 *)(param_1 + 0x20));
  return;
}

