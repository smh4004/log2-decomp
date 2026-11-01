/* sub_08000276  (original: 0x08000276-0x080002F8 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 98% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08021140();
extern int sub_0801F636();
extern int sub_0801F412();
extern undefined4 volatile REG_DMA3SAD;
extern undefined volatile gUnknown_081D4E9C;


void sub_08000276(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(undefined4 *)((char *)__frame + 0x0))
#define local_18 (*(int *)((char *)__frame + 0x4))
  sub_0801F412(&REG_DMA3SAD,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x70),0x9600);
  *(undefined4 *)(param_1 + 0x18) = 0x78;
  *(undefined4 *)(param_1 + 0x1c) = 0x77;
  iVar2 = param_1 + 0x14;
  uVar1 = 0x29;
  if (*(char *)(param_1 + 8) != '\0') {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  sub_0801F636(iVar2,"Start");
  *(undefined4 *)(param_1 + 0x18) = 0x78;
  *(undefined4 *)(param_1 + 0x1c) = 0x87;
  uVar1 = 0x29;
  if (*(char *)(param_1 + 8) != '\x01') {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  sub_0801F636(iVar2,"Options");
  local_1c = 0x56;
  local_18 = (uint)*(byte *)(param_1 + 8) * 0x10 + 0x70;
  sub_08021140(iVar2,&gUnknown_081D4E9C,&local_1c);
  local_1c = 0x92;
  sub_08021140(iVar2,&gUnknown_081D4E9C,&local_1c);
  return;
}

