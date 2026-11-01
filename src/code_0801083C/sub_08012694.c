/* sub_08012694  (original: 0x08012694-0x080126C4 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080123E0();
extern int sub_08012520();
extern int sub_0801204E();


void sub_08012694(undefined4 param_1,int param_2)

{
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  local_14 = *(int *)(param_2 + 4) >> 0x12;
  local_10 = *(int *)(param_2 + 8) >> 0x12;
  sub_080123E0(param_1,&local_14);
  sub_0801204E(param_1,param_2);
  sub_08012520(param_1,param_2);
  return;
}

