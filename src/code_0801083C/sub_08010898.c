/* sub_08010898  (original: 0x08010898-0x080108CE in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 8/8 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0800D584();


void sub_08010898(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(undefined4 *)((char *)__frame + 0x0))
#define local_18 (*(undefined2 *)((char *)__frame + 0x4))
#define local_16 (*(undefined2 *)((char *)__frame + 0x6))
#define local_14 (*(undefined2 *)((char *)__frame + 0x8))
  local_1c = 0;
  local_14 = 0x100;
  local_18 = (undefined2)*param_2;
  local_16 = (undefined2)param_2[1];
  __call_via_r1(param_3,*(int *)(*param_3 + 0x30) + *param_3);
  uVar1 = sub_0800D584(&local_1c,param_3);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}

