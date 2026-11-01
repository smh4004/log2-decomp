/* sub_0800F832  (original: 0x0800F832-0x0800F8B6 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08010124();
extern int sub_080079B8();
extern int sub_080102A2();
extern int sub_08007662();
extern undefined volatile _0802459C;


undefined4 sub_0800F832(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(undefined4 *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(undefined4 *)((char *)__frame + 0xc))
#define local_14 (*(int *)((char *)__frame + 0x10))
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802459C;
    *(undefined1 *)(puVar1 + 1) = 0xc;
  }
  sub_08007662(param_1,puVar1);
  sub_080079B8(&local_1c,param_1);
  local_24 = local_1c + local_14 >> 1;
  local_20 = local_18;
  if ((-*(int *)(param_1 + 0x170) < 8) && (iVar3 = *(int *)(param_1 + 0x174), iVar3 != 0)) {
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + param_2[2];
    sub_08010124();
  }
  else {
    *(undefined4 *)(param_1 + 0x170) = 0;
    if (*param_2 == 0) {
      uVar2 = sub_080102A2(&local_24,param_2[2],5,0);
    }
    else {
      uVar2 = sub_080102A2(&local_24,param_2[2],0x27,1);
    }
    *(undefined4 *)(param_1 + 0x174) = uVar2;
  }
  return 0;
}

