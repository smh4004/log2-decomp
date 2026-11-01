/* sub_0800B734  (original: 0x0800B734-0x0800B75C in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 8/8 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080063E0();
extern int sub_0800793A();
extern undefined4 volatile DAT_030010fc;
extern undefined4 volatile DAT_03001104;


void sub_0800B734(undefined4 param_1)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_18 ((undefined1 *)((char *)__frame + 0x0))
  sub_0800793A(auStack_18,param_1);
  sub_080063E0(auStack_18,DAT_030010fc,1);
  sub_080063E0(auStack_18,DAT_03001104,1);
  return;
}

