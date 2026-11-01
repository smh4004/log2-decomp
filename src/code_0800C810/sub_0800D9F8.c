/* sub_0800D9F8  (original: 0x0800D9F8-0x0800DA68 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800793A();
extern int sub_080062E8();
extern int volatile DAT_03001094;
extern int volatile DAT_03001098;
extern undefined volatile DAT_03001090;


void sub_0800D9F8(int param_1)

{
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(int *)((char *)__frame + 0x0))
#define local_18 (*(int *)((char *)__frame + 0x4))
#define local_14 (*(int *)((char *)__frame + 0x8))
#define local_10 (*(int *)((char *)__frame + 0xc))
#define local_c (*(int *)((char *)__frame + 0x10))
#define local_8 (*(int *)((char *)__frame + 0x14))
  sub_0800793A(&local_14,*(undefined4 *)(param_1 + 4));
  local_1c = ((((local_14 + local_c) / 2 + -0x78) * 0x400 - DAT_03001094) * 3 >> 6) + DAT_03001094;
  local_18 = ((((local_10 + local_8) / 2 + -0x54) * 0x400 - DAT_03001098) * 9 >> 7) + DAT_03001098;
  sub_080062E8(&DAT_03001090,&local_1c);
  return;
}

