/* sub_0800B7E6  (original: 0x0800B7E6-0x0800B84E in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080236CC();


void sub_0800B7E6(int param_1)

{
  int a0;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(undefined4 *)((char *)__frame + 0x0))
#define local_20 (*(undefined4 *)((char *)__frame + 0x4))
#define local_1c (*(undefined4 *)((char *)__frame + 0x8))
#define local_18 (*(undefined4 *)((char *)__frame + 0xc))
  a0 = param_1 + 0x7c;
  local_1c = 0x40;
  local_18 = 0x40;
  local_24 = 0;
  local_20 = 0;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000,(int)&local_24);
  local_24 = 0x40;
  local_1c = 0x80;
  local_20 = 0;
  local_18 = 0x40;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011000,(int)&local_24);
  local_20 = 0;
  local_24 = 0x80;
  local_1c = 0xa0;
  local_18 = 0x40;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6012000,(int)&local_24);
  return;
}

