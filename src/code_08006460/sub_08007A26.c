/* sub_08007A26  (original: 0x08007A26-0x08007A84 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080079B8();


void sub_08007A26(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(int *)((char *)__frame + 0x0))
#define local_18 (*(int *)((char *)__frame + 0x4))
#define local_14 (*(int *)((char *)__frame + 0x8))
#define local_10 (*(int *)((char *)__frame + 0xc))
  sub_080079B8(&local_1c);
  iVar2 = local_18 + local_10 >> 1;
  iVar4 = local_1c + local_14 >> 1;
  cVar1 = *(char *)(param_2 + 0x10);
  iVar3 = iVar4;
  if (cVar1 == '\0') {
    iVar5 = *(int *)(param_2 + 0x15c) >> 8;
  }
  else {
    iVar5 = iVar2;
    if (((cVar1 != '\x01') && (iVar3 = local_1c, cVar1 != '\x02')) &&
       (iVar3 = iVar2, iVar5 = iVar4, cVar1 == '\x03')) {
      iVar3 = local_14;
      iVar5 = iVar2;
    }
  }
  *param_1 = iVar3;
  param_1[1] = iVar5;
  return;
}

