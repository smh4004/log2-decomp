/* sub_08009852  (original: 0x08009852-0x080098F2 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800C7AE();
extern int sub_0802664C();
extern int sub_0801F2F4();
extern int sub_0800C664();
extern int volatile DAT_03001fc4;
extern undefined4 volatile DAT_03000ff4;
extern undefined4 volatile DAT_03001fc8;
extern undefined volatile _0802542C;
extern undefined4 volatile DAT_030020c4;
extern undefined4 volatile DAT_03001fcc;
extern undefined1 volatile DAT_03002080;


void sub_08009852(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(int *)((char *)__frame + 0x0))
#define local_18 (*(int *)((char *)__frame + 0x4))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_18 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_1c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  sub_0802664C(0,0x40);
  sub_0801F2F4();
  if (DAT_03001fc4 != 0) {
    sub_0800C7AE(&DAT_03002080);
    DAT_03001fc8 = DAT_03000ff4;
    DAT_03001fcc = DAT_030020c4;
    DAT_03001fc4 = 0;
  }
  sub_0800C664(&DAT_03002080,iVar2,iVar4,iVar3,&local_1c,1);
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802542C;
    puVar1[2] = 0x10;
    puVar1[1] = 0;
  }
  sub_0801F2F4();
  return;
}

