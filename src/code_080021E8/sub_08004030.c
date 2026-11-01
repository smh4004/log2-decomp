/* sub_08004030  (original: 0x08004030-0x0800409E in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08003C24();
extern int sub_080214C4();
extern int sub_08021EA8();
extern int sub_0802153E();
extern byte volatile DAT_03000e8c;
extern undefined1 volatile DAT_03002080;
extern undefined1 volatile DAT_03002081;
extern undefined1 volatile DAT_03002082;
extern undefined volatile DAT_0300389c;


void sub_08004030(int param_1,undefined4 *param_2)

{
  uint uVar1;
  unsigned int __frame[97];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_184 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x164))
  *(undefined1 *)(param_1 + 2) = DAT_03002080;
  *(undefined1 *)(param_1 + 3) = DAT_03002081;
  *(undefined1 *)(param_1 + 4) = DAT_03002082;
  *(short *)(param_1 + 0x160) = (short)*param_2;
  *(short *)(param_1 + 0x162) = (short)param_2[1];
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
  uVar1 = (uint)DAT_03000e8c;
  sub_08003C24(auStack_184);
  sub_08021EA8(auStack_184,param_1,0x164);
  uStack_20 = sub_0802153E(auStack_184,0x164);
  sub_080214C4(&DAT_0300389c,uVar1 * 0x168 + 0x10,auStack_184,0x168);
  return;
}

