/* sub_0801069A  (original: 0x0801069A-0x080106B2 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080092E4();


void sub_0801069A(int param_1)

{
  unsigned int __frame[23];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_5c ((undefined4 *)((char *)__frame + 0x0))
#define local_18 (*(undefined4 *)((char *)__frame + 0x44))
  local_5c[0] = 0;
  local_18 = 0;
  sub_080092E4(local_5c,*(undefined4 *)(param_1 + 4),0);
  return;
}

