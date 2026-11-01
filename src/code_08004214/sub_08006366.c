/* sub_08006366  (original: 0x08006366-0x0800638C in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08005D6C();


void sub_08006366(int param_1,int *param_2,byte *param_3)

{
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
#define local_c (*(int *)((char *)__frame + 0x8))
#define local_8 (*(int *)((char *)__frame + 0xc))
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = local_14 + (uint)*param_3;
  local_8 = local_10 + (uint)param_3[1];
  sub_08005D6C(&local_14,*(undefined4 *)(param_1 + 0x6c));
  return;
}

