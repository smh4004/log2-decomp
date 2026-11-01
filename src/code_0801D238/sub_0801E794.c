/* sub_0801E794  (original: 0x0801E794-0x0801E81E in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801CB10();
extern int __call_via_r2();
extern int sub_0800791A();
extern int sub_080143A8();
extern int sub_08006D70();
extern int sub_080068B8();
extern undefined volatile DAT_03001120;


void sub_0801E794(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(int *)((char *)__frame + 0x0))
#define local_1c (*(int *)((char *)__frame + 0x4))
#define local_18 (*(int *)((char *)__frame + 0x8))
#define local_14 (*(int *)((char *)__frame + 0xc))
  sub_0801CB10();
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x2ff < iVar1) {
    sub_0800791A(&local_20,param_2);
    iVar1 = *(int *)(param_1 + 0xc) + (uint)*(byte *)(param_2 + 4) * 8;
    local_18 = local_20 + *(int *)(iVar1 + 0xc);
    local_14 = local_1c + *(int *)(iVar1 + 0x10);
    uVar2 = 0x28;
    if ((char)param_2[4] != '\x01') {
      uVar2 = 0x27;
    }
    iVar1 = sub_080143A8(0,&local_18,uVar2,param_2,0x3000,0);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) goto _0801E80C;
    sub_080068B8(&DAT_03001120,iVar1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
_0801E80C:
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  return;
}

