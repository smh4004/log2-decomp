/* sub_08010304  (original: 0x08010304-0x0801038C in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08020EAA();
extern int sub_08021F18();
extern int sub_0801F6D8();
extern int sub_08020E5C();
extern int sub_08021344();
extern undefined4 volatile DAT_03000eb0;
extern undefined volatile _080104A4;
extern undefined volatile gUnknown_086FD4FC;
extern undefined volatile _080104A0;


void sub_08010304(int param_1)

{
  int iVar1;
  unsigned int __frame[17];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_44 ((undefined1 *)((char *)__frame + 0x0))
#define local_40 (*(undefined4 *)((char *)__frame + 0x4))
#define local_3c (*(undefined4 *)((char *)__frame + 0x8))
#define local_38 (*(undefined * *)((char *)__frame + 0xc))
#define local_24 (*(undefined4 *)((char *)__frame + 0x20))
#define local_20 (*(undefined4 *)((char *)__frame + 0x24))
#define local_1c (*(undefined1 *)((char *)__frame + 0x28))
#define local_1b (*(undefined1 *)((char *)__frame + 0x29))
#define local_10 (*(undefined4 *)((char *)__frame + 0x34))
  sub_08020E5C(local_44,0x20,0x10);
  local_1b = *(undefined1 *)(*(int *)(param_1 + 0x14) + 5);
  local_1c = 1;
  local_24 = 0x8020ec3;
  local_38 = &gUnknown_086FD4FC;
  local_40 = 0x10;
  local_3c = 0xc;
  local_44[0] = 1;
  sub_08021F18(local_20,0,local_10);
  iVar1 = *(int *)(param_1 + 0x14);
  if ((*(char *)(iVar1 + 5) == '\x02') ||
     (((&DAT_03000eb0)[(uint)*(byte *)(iVar1 + 7) * 7] & 1) == 0)) {
    sub_0801F6D8(local_44,&_080104A4);
  }
  else {
    sub_0801F6D8(local_44,&_080104A0,*(undefined1 *)(iVar1 + 6));
  }
  sub_08021344(local_44,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000);
  sub_08020EAA(local_44,0);
  return;
}

