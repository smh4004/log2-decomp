/* sub_08000FE4  (original: 0x08000FE4-0x08001068 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile DAT_0600e800;
extern undefined volatile DAT_0600f000;


void sub_08000FE4(undefined4 param_1,int *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 ((undefined * *)((char *)__frame + 0x0))
  local_18[0] = &DAT_0600f000;
  local_18[1] = &DAT_0600e800;
  local_18[2] = &DAT_0600f000;
  puVar2 = local_18[param_3];
  iVar5 = *param_2 * 2 + param_2[1] * 0x40;
  iVar3 = param_2[2] - *param_2;
  iVar4 = param_2[3] - param_2[1];
  *(undefined2 *)(puVar2 + iVar5 + -0x42) = 0x100;
  puVar1 = (undefined2 *)(puVar2 + iVar5 + -0x40);
  iVar5 = iVar3;
  do {
    *puVar1 = 0x101;
    puVar1 = puVar1 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *puVar1 = 0x102;
  puVar1 = puVar1 + (0x1f - iVar3);
  do {
    *puVar1 = 0x103;
    puVar1[iVar3 + 1] = 0x105;
    puVar1 = puVar1 + iVar3 + 1 + (0x1f - iVar3);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *puVar1 = 0x106;
  puVar1 = puVar1 + 1;
  do {
    *puVar1 = 0x107;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *puVar1 = 0x108;
  return;
}

