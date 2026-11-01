/* sub_080192D6  (original: 0x080192D6-0x08019320 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080236CC();


void sub_080192D6(int param_1)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(undefined4 *)((char *)__frame + 0x0))
#define local_14 (*(undefined4 *)((char *)__frame + 0x4))
#define local_10 (*(undefined4 *)((char *)__frame + 0x8))
#define local_c (*(int *)((char *)__frame + 0xc))
  local_18 = 0;
  local_14 = *(undefined4 *)(param_1 + 0x6a8);
  local_10 = 0xa0;
  local_c = *(int *)(param_1 + 0x6a8) + 0x40;
  sub_080236CC(*(int *)(param_1 + 0x69c),0x6009800,(int)&local_18);
  *(uint *)(*(int *)(param_1 + 0x68c) + 0x20) = (uint)(0 < *(int *)(param_1 + 0x6a8));
  *(uint *)(*(int *)(param_1 + 0x690) + 0x20) =
       (uint)(*(int *)(param_1 + 0x6a8) < *(int *)(param_1 + 0x6ac));
  return;
}

