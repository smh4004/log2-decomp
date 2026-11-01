/* sub_0801BB1C  (original: 0x0801BB1C-0x0801BB5A in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800763C();
extern int __call_via_r2();
extern int sub_0800DF98();
extern undefined4 volatile DAT_03001fa8;
extern undefined4 volatile DAT_03002218;
extern undefined volatile _08024A64;
extern undefined volatile _08023DB8;


void sub_0801BB1C(undefined4 param_1,undefined4 param_2)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(undefined * *)((char *)__frame + 0x0))
#define local_14 (*(int * *)((char *)__frame + 0x4))
#define local_10 (*(undefined4 *)((char *)__frame + 0x8))
  local_14 = (int *)0x0;
  local_10 = DAT_03001fa8;
  local_18 = &_08024A64;
  sub_0800DF98(&local_18,param_2);
  sub_0800763C(param_2,&DAT_03002218);
  local_18 = &_08023DB8;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,*(int *)*local_14 + *local_14);
  }
  return;
}

