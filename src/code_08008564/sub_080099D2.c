/* sub_080099D2  (original: 0x080099D2-0x08009A88 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int __call_via_r2();
extern int sub_0800C584();
extern int sub_0802664C();
extern int sub_0801F2F4();
extern undefined4 volatile DAT_03001fd8;
extern int * volatile DAT_03001fa8;
extern undefined1 volatile DAT_03002080;
extern undefined volatile _08023990;


void sub_080099D2(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(undefined2 *)((char *)__frame + 0x0))
#define local_12 (*(undefined2 *)((char *)__frame + 0x2))
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_12 = (undefined2)param_1[iVar3];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_14 = (undefined2)param_1[iVar3];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  *param_1 = iVar3 + -2;
  iVar4 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  iVar3 = param_1[iVar3 + -2];
  DAT_03001fd8 = 1;
  if (DAT_03001fa8 != (int *)0x0) {
    __call_via_r2(DAT_03001fa8,0,*(int *)(*DAT_03001fa8 + 0x28) + *DAT_03001fa8);
  }
  sub_0802664C(0,0x40);
  sub_0801F2F4();
  piVar1 = (int *)sub_0800C584(&DAT_03002080,iVar3,iVar4,&local_14);
  __call_via_r2(piVar1,0x26,*(int *)(*piVar1 + 0x28) + *piVar1);
  puVar2 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08023990;
    puVar2[1] = 0;
    puVar2[2] = 4;
  }
  sub_0801F2F4();
  __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
  return;
}

