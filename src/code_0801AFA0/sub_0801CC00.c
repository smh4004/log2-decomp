/* sub_0801CC00  (original: 0x0801CC00-0x0801CC96 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800763C();
extern int __call_via_r2();
extern int sub_0800DF98();
extern int sub_0801F08C();
extern int sub_0800791A();
extern undefined4 volatile DAT_03001fa8;
extern undefined volatile _08024A64;
extern undefined volatile _08025208;
extern undefined volatile _08023DB8;


void sub_0801CC00(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  unsigned int __frame[13];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_34 (*(int *)((char *)__frame + 0x0))
#define local_30 (*(int *)((char *)__frame + 0x4))
#define local_2c (*(int *)((char *)__frame + 0x8))
#define local_28 (*(int *)((char *)__frame + 0xc))
#define local_24 ((int *)((char *)__frame + 0x10))
#define local_1c (*(undefined * *)((char *)__frame + 0x18))
#define local_18 (*(int * *)((char *)__frame + 0x1c))
#define local_14 (*(undefined4 *)((char *)__frame + 0x20))
  local_14 = DAT_03001fa8;
  local_1c = &_08024A64;
  local_18 = (int *)0x0;
  sub_0800DF98(&local_1c,param_2);
  sub_0800791A(&local_34,DAT_03001fa8);
  sub_0800791A(&local_2c,param_2);
  local_24[0] = local_34 - local_2c;
  local_24[1] = local_30 - local_28;
  local_24[1 < *(byte *)(param_2 + 0x10)] = 0;
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08025208;
    puVar1[1] = local_24[0] * 0x71d >> 8;
    puVar1[2] = local_24[1] * 0x71d >> 8;
  }
  sub_0800763C(param_2,puVar1);
  local_1c = &_08023DB8;
  if (local_18 != (int *)0x0) {
    __call_via_r2(local_18,1,*(int *)*local_18 + *local_18);
  }
  return;
}

