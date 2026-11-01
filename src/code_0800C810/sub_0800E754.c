/* sub_0800E754  (original: 0x0800E754-0x0800E77E in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080063E0();
extern int sub_0800793A();
extern undefined4 volatile DAT_03001104;


void sub_0800E754(int param_1)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_18 ((undefined1 *)((char *)__frame + 0x0))
  if (*(char *)(param_1 + 0x18d) == '\0') {
    sub_0800793A(auStack_18,param_1);
    sub_080063E0(auStack_18,DAT_03001104,0);
  }
  return;
}

