/* sub_08011AA0  (original: 0x08011AA0-0x08011AE2 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800DF98();
extern undefined volatile _08024A64;
extern undefined volatile _08023DB8;


void sub_08011AA0(int param_1,int *param_2)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(undefined * *)((char *)__frame + 0x0))
#define local_14 (*(int * *)((char *)__frame + 0x4))
#define local_10 (*(undefined4 *)((char *)__frame + 0x8))
  local_10 = *(undefined4 *)(param_1 + 0xc);
  local_14 = (int *)0x0;
  local_18 = &_08024A64;
  sub_0800DF98(&local_18,param_2);
  __call_via_r2(param_2,5,*(int *)(*param_2 + 0x28) + *param_2);
  local_18 = &_08023DB8;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,*(int *)*local_14 + *local_14);
  }
  return;
}

