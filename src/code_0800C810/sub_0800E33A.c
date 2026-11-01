/* sub_0800E33A  (original: 0x0800E33A-0x0800E39C in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080063E0();
extern int sub_0801A9FA();
extern int __call_via_r1();
extern int sub_0800793A();
extern int sub_08019B48();
extern int sub_0801F110();
extern undefined4 volatile DAT_03001104;
extern undefined volatile _080252A4;


void sub_0800E33A(undefined4 *param_1,int param_2)

{
  int *piVar1;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_20 ((undefined1 *)((char *)__frame + 0x0))
  *param_1 = &_080252A4;
  if (*(char *)((int)param_1 + 0x18d) == '\0') {
    sub_0800793A(auStack_20,param_1);
    sub_080063E0(auStack_20,DAT_03001104,1);
  }
  sub_0801A9FA(param_1 + 0x67,0);
  piVar1 = (int *)param_1[100];
  if (piVar1 != (int *)0x0) {
    __call_via_r1(piVar1,*(int *)(*piVar1 + 4) + *piVar1);
  }
  sub_08019B48(param_1,0);
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

