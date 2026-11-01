/* sub_080186A0  (original: 0x080186A0-0x080186D6 in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080185F0();


void sub_080186A0(int param_1)

{
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(int *)((char *)__frame + 0x0))
#define local_8 (*(int *)((char *)__frame + 0x4))
  local_c = *(int *)(*(int *)(param_1 + 0x408) + 0xc10) >> 8;
  local_8 = *(int *)(*(int *)(param_1 + 0x408) + 0xc14) >> 8;
  sub_080185F0(param_1,&local_c);
  return;
}

