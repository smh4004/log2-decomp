/* sub_080060B0  (original: 0x080060B0-0x080060FE in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 94% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006078();


undefined4 sub_080060B0(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(int *)((char *)__frame + 0x0))
#define local_14 (*(int *)((char *)__frame + 0x4))
  uVar2 = *param_2;
  uVar3 = param_2[1];
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x5c) < (int)uVar2) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x5c);
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x5e) < (int)uVar3) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x5e);
  }
  local_18 = uVar2 << 10;
  local_14 = uVar3 << 10;
  sub_08006078(param_1,&local_18);
  if ((uVar2 == *param_2) && (uVar3 == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

