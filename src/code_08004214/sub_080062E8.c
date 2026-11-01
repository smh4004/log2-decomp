/* sub_080062E8  (original: 0x080062E8-0x0800634A in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 93% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006078();


undefined4 sub_080062E8(int param_1,int *param_2)

{
  undefined4 uVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  local_14 = *param_2;
  local_10 = param_2[1];
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (local_10 < 0) {
    local_10 = 0;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x5c) < local_14 >> 10) {
    local_14 = (uint)*(ushort *)(param_1 + 0x5c) << 10;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x5e) < local_10 >> 10) {
    local_10 = (uint)*(ushort *)(param_1 + 0x5e) << 10;
  }
  sub_08006078(param_1,&local_14);
  if ((local_14 == *param_2) && (local_10 == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

