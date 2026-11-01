/* sub_0800E39C  (original: 0x0800E39C-0x0800E3EE in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800793A();
extern int sub_0801F08C();
extern int volatile DAT_03001730;
extern undefined volatile DAT_03001734;
extern undefined volatile _080238FC;


void sub_0800E39C(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_2c ((int *)((char *)__frame + 0x0))
#define local_24 (*(int *)((char *)__frame + 0x8))
#define local_20 (*(undefined4 *)((char *)__frame + 0xc))
#define iStack_1c (*(int *)((char *)__frame + 0x10))
#define local_18 (*(undefined4 *)((char *)__frame + 0x14))
  iStack_1c = param_1;
  local_18 = param_2;
  sub_0800793A(local_2c,param_1);
  uVar3 = *(undefined4 *)(param_1 + 0x184);
  puVar1 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = local_18;
    *puVar1 = &_080238FC;
    puVar1[4] = uVar3;
    puVar1[2] = local_2c[0] + local_24 >> 1;
    puVar1[3] = local_20;
  }
  iVar2 = DAT_03001730 * 4;
  DAT_03001730 = DAT_03001730 + 1;
  *(undefined4 **)(&DAT_03001734 + iVar2) = puVar1;
  return;
}

