/* sub_08002E70  (original: 0x08002E70-0x08002ECA in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int __call_via_r5();
extern int sub_080236C0();
extern int sub_080236B4();
extern int sub_080236A8();


void sub_08002E70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint a2;
  int a3;
  unsigned int __frame[195];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_30c ((undefined1 *)((char *)__frame + 0x0))
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  a3 = iVar3 * iVar2;
  *(int *)(iVar1 + 0x2c) = iVar2;
  *(int *)(iVar1 + 0x30) = iVar3;
  *(int *)(iVar1 + 0x34) = a3;
  *(int *)(iVar1 + 0x18) = iVar2;
  *(int *)(iVar1 + 0x1c) = iVar3;
  a2 = (uint)*(byte *)(param_1 + 9);
  __call_via_r5(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(*(int *)(param_1 + 4) + 0x24));
  sub_080236A8((int)auStack_30c,
               *(int *)((uint)*(byte *)(param_1 + 8) * 4 + **(int **)(param_1 + 0x10) + 4),a2,a3);
  sub_080236C0(*(int *)(param_1 + 4),(int)auStack_30c);
  sub_080236B4(*(int *)(param_1 + 4),*(int *)(param_1 + 0xc));
  return;
}

