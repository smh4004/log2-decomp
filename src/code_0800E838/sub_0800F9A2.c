/* sub_0800F9A2  (original: 0x0800F9A2-0x0800F9C6 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_080092E4();


void sub_0800F9A2(int param_1)

{
  unsigned int __frame[28];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_70 ((undefined4 *)((char *)__frame + 0x0))
#define local_2c (*(undefined4 *)((char *)__frame + 0x44))
#define local_18 (*(undefined4 *)((char *)__frame + 0x58))
#define uStack_14 (*(undefined4 *)((char *)__frame + 0x5c))
#define uStack_10 (*(undefined4 *)((char *)__frame + 0x60))
#define local_c (*(undefined4 *)((char *)__frame + 0x64))
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  local_c = 0;
  local_70[0] = 0;
  local_2c = 0;
  sub_080092E4(local_70,*(undefined4 *)(param_1 + 0xc),&local_18);
  return;
}

