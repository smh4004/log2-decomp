/* sub_0800D93C  (original: 0x0800D93C-0x0800D9C2 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800C84C();
extern int sub_0800C88A();
extern int sub_0800791A();
extern int sub_0800C584();
extern int sub_0801F2F4();
extern ushort volatile DAT_030022ae;
extern undefined1 volatile DAT_03002080;


bool sub_0800D93C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(undefined2 *)((char *)__frame + 0x0))
#define local_1e (*(undefined2 *)((char *)__frame + 0x2))
#define local_1c (*(int *)((char *)__frame + 0x4))
#define local_18 (*(int *)((char *)__frame + 0x8))
  bVar3 = (DAT_030022ae & *(byte *)(param_1 + 0x11)) != 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0x14);
    sub_0800791A(&local_1c,param_2);
    local_1c = ((int)*(short *)(iVar2 + 0x14) - (int)*(short *)(iVar2 + 8)) + local_1c;
    local_18 = ((int)*(short *)(iVar2 + 0x16) - (int)*(short *)(iVar2 + 10)) + local_18;
    local_20 = (undefined2)local_1c;
    local_1e = (undefined2)local_18;
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_1 + 0x10);
    sub_0800C84C(0,param_2);
    sub_0801F2F4();
    iVar1 = sub_0800C584(&DAT_03002080,*(undefined1 *)(iVar2 + 0x11),*(undefined1 *)(iVar2 + 0x12),
                         &local_20);
    *(undefined1 *)(iVar1 + 0x10) = *(undefined1 *)(iVar2 + 0x10);
    sub_0800C88A(0);
    sub_0801F2F4();
  }
  return bVar3;
}

