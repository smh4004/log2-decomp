/* sub_0800EB20  (original: 0x0800EB20-0x0800EB4C in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 57% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080092E4();


int sub_0800EB20(int param_1,int param_2)

{
  unsigned int __frame[23];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_5c (*(undefined4 *)((char *)__frame + 0x0))
#define iStack_58 (*(int *)((char *)__frame + 0x4))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x44))
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      param_2 = 1;
    }
    else {
      uStack_5c = 0;
      uStack_18 = 0;
      sub_080092E4(&uStack_5c,*(undefined4 *)(param_1 + 0x28),0);
      param_2 = iStack_58;
    }
  }
  return param_2;
}

