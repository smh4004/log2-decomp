/* sub_08018B60  (original: 0x08018B60-0x08018BAA in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080236CC();


void sub_08018B60(int param_1)

{
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(undefined4 *)((char *)__frame + 0x0))
#define local_18 (*(undefined4 *)((char *)__frame + 0x4))
#define local_14 (*(undefined4 *)((char *)__frame + 0x8))
#define local_10 (*(int *)((char *)__frame + 0xc))
  local_1c = 0;
  local_18 = *(undefined4 *)(param_1 + 0x7c);
  local_14 = 0xa0;
  local_10 = *(int *)(param_1 + 0x7c) + 0x40;
  sub_080236CC(*(int *)(param_1 + 0x84),0x6009800,(int)&local_1c);
  *(uint *)(*(int *)(param_1 + 0x8c) + 0x20) = (uint)(0 < *(int *)(param_1 + 0x7c));
  *(uint *)(*(int *)(param_1 + 0x90) + 0x20) =
       (uint)(*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x80));
  return;
}

