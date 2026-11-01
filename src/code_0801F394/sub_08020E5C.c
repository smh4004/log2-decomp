/* sub_08020E5C  (original: 0x08020E5C-0x08020EAA in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 86% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F58C();
extern int sub_0801F08C();


int sub_08020E5C(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x4))
#define iStack_1c (*(int *)((char *)__frame + 0x8))
#define iStack_18 (*(int *)((char *)__frame + 0xc))
  if ((param_1 != 0) || (param_1 = sub_0801F08C(0x38), param_1 != 0)) {
    uStack_24 = 0;
    uStack_20 = 0;
    iStack_1c = param_2;
    iStack_18 = param_3;
    sub_0801F58C(param_1,0,&uStack_24);
    *(int *)(param_1 + 0x2c) = param_2;
    *(int *)(param_1 + 0x30) = param_3;
    *(int *)(param_1 + 0x34) = param_3 * param_2;
    uVar1 = sub_0801F08C(param_3 * param_2);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = 0x8020d91;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return param_1;
}

