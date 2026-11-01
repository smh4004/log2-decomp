/* sub_0801E722  (original: 0x0801E722-0x0801E776 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800DF98();
extern int sub_0801F08C();
extern int sub_0800763C();
extern undefined4 volatile DAT_03001fa8;
extern undefined volatile _08024A64;
extern undefined volatile _08023DB8;
extern undefined volatile _0802549C;


void sub_0801E722(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(undefined * *)((char *)__frame + 0x0))
#define local_1c (*(int * *)((char *)__frame + 0x4))
#define local_18 (*(undefined4 *)((char *)__frame + 0x8))
  local_18 = DAT_03001fa8;
  local_20 = &_08024A64;
  local_1c = (int *)0x0;
  sub_0800DF98(&local_20,param_2);
  uVar2 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802549C;
    puVar1[1] = param_1;
    puVar1[2] = 0;
    puVar1[3] = uVar2;
  }
  sub_0800763C(param_2,puVar1);
  local_20 = &_08023DB8;
  if (local_1c != (int *)0x0) {
    __call_via_r2(local_1c,1,*(int *)*local_1c + *local_1c);
  }
  return;
}

