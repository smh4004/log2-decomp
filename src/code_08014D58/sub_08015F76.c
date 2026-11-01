/* sub_08015F76  (original: 0x08015F76-0x08015FC2 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080135E0();
extern int sub_080068CA();
extern int sub_08006D70();
extern int sub_080068B8();
extern undefined volatile DAT_03001120;
extern undefined volatile gUnknown_086E53DC;


void sub_08015F76(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[4];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_10 (*(int *)((char *)__frame + 0x0))
#define local_c (*(int *)((char *)__frame + 0x4))
  local_10 = *(int *)(param_1 + 0x20) >> 8;
  local_c = *(int *)(param_1 + 0x24) >> 8;
  sub_080068CA(&DAT_03001120,param_1);
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    uVar2 = sub_080135E0(0,&local_10,&gUnknown_086E53DC,4,0x2000,0x400,0x28);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  return;
}

