/* sub_0800AAC6  (original: 0x0800AAC6-0x0800AB1A in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern int sub_0800791A();
extern int sub_0800C75C();
extern int sub_08009370();
extern int volatile DAT_030021f8;
extern undefined4 volatile DAT_03001fd8;
extern undefined volatile DAT_03001120;
extern undefined1 volatile DAT_03002080;


void sub_0800AAC6(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_1c ((undefined1 *)((char *)__frame + 0x0))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08009370(param_1[iVar2 + -1]);
  if (iVar2 == DAT_030021f8) {
    DAT_03001fd8 = 1;
  }
  sub_0800791A(auStack_1c,iVar2);
  uVar1 = *(undefined1 *)(iVar2 + 0x10);
  sub_080068CA(&DAT_03001120,iVar2);
  sub_0800C75C(&DAT_03002080,iVar3,auStack_1c,uVar1);
  return;
}

