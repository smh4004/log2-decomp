/* sub_0800CE60  (original: 0x0800CE60-0x0800CEA4 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080063E0();
extern int sub_0800793A();
extern undefined4 volatile DAT_030010fc;
extern undefined4 volatile DAT_03001104;


void sub_0800CE60(int param_1,undefined4 param_2)

{
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_24 ((undefined1 *)((char *)__frame + 0x0))
  sub_080063E0(param_1 + 0x38,DAT_030010fc,1);
  sub_080063E0(param_1 + 0x38,DAT_03001104,1);
  sub_0800793A(auStack_24,param_2);
  sub_080063E0(auStack_24,DAT_030010fc,0);
  sub_080063E0(auStack_24,DAT_03001104,0);
  return;
}

