/* sub_08003F9C  (original: 0x08003F9C-0x08003FEC in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08003C24();
extern int sub_08021EA8();
extern int sub_0802153E();
extern int sub_08021526();
extern undefined volatile DAT_0300389c;


void sub_08003F9C(undefined4 param_1,int param_2)

{
  int iVar1;
  unsigned int __frame[96];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_180 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_1c (*(int *)((char *)__frame + 0x164))
  sub_08003C24(auStack_180);
  sub_08021526(&DAT_0300389c,auStack_180,param_2 * 0x168 + 0x10,0x168);
  iVar1 = sub_0802153E(auStack_180,0x164);
  if (iVar1 == iStack_1c) {
    sub_08021EA8(param_1,auStack_180,0x164);
  }
  else {
    sub_08003C24(param_1);
  }
  return;
}

