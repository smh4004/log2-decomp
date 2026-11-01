/* sub_08003FEC  (original: 0x08003FEC-0x08004030 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08003C24();
extern int sub_080214C4();
extern int sub_08021EA8();
extern int sub_0802153E();
extern undefined volatile DAT_0300389c;


void sub_08003FEC(undefined4 param_1,int param_2)

{
  unsigned int __frame[96];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_180 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x164))
  sub_08003C24(auStack_180);
  sub_08021EA8(auStack_180,param_1,0x164);
  uStack_1c = sub_0802153E(auStack_180,0x164);
  sub_080214C4(&DAT_0300389c,param_2 * 0x168 + 0x10,auStack_180,0x168);
  return;
}

