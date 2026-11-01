/* sub_080113A0  (original: 0x080113A0-0x0801155E in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F636();
extern int sub_0801F394();
extern int sub_08021140();
extern int sub_080236CC();
extern undefined volatile gUnknown_086D769C;
extern undefined volatile gUnknown_080E2CF0;
extern undefined volatile gUnknown_086FDF2C;


void sub_080113A0(int param_1)

{
  undefined1 uVar1;
  int a0;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_2c (*(undefined4 *)((char *)__frame + 0x0))
#define local_28 (*(undefined4 *)((char *)__frame + 0x4))
#define local_24 (*(undefined4 *)((char *)__frame + 0x8))
#define local_20 (*(undefined4 *)((char *)__frame + 0xc))
#define local_1c (*(undefined4 *)((char *)__frame + 0x10))
#define local_18 (*(int *)((char *)__frame + 0x14))
  sub_0801F394(&gUnknown_086FDF2C,*(undefined4 *)(param_1 + 0x34));
  a0 = param_1 + 0x10;
  uVar1 = 0x27;
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x39) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0x48;
  *(undefined4 *)(param_1 + 0x18) = 0x11;
  sub_0801F636(a0,&gUnknown_080E2CF0);
  uVar1 = 0x27;
  if (*(int *)(param_1 + 0x48) != 1) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x39) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0x48;
  *(undefined4 *)(param_1 + 0x18) = 0x1d;
  sub_0801F636(a0,"Switch Characters");
  local_1c = 8;
  local_18 = *(int *)(param_1 + 0x48) * 0xc + 0xb;
  sub_08021140(a0,&gUnknown_086D769C,&local_1c);
  local_1c = 0x80;
  sub_08021140(a0,&gUnknown_086D769C,&local_1c);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x20;
  local_20 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000,(int)&local_2c);
  local_2c = 0x20;
  local_28 = 0;
  local_24 = 0x40;
  local_20 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010400,(int)&local_2c);
  local_20 = 0x20;
  local_2c = 0x40;
  local_28 = 0;
  local_24 = 0x60;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010800,(int)&local_2c);
  local_2c = 0x60;
  local_28 = 0;
  local_24 = 0x80;
  local_20 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010c00,(int)&local_2c);
  local_20 = 0x20;
  local_2c = 0x80;
  local_28 = 0;
  local_24 = 0x90;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011000,(int)&local_2c);
  local_2c = 0;
  local_20 = 0x28;
  local_28 = 0x20;
  local_24 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011200,(int)&local_2c);
  local_24 = 0x40;
  local_20 = 0x28;
  local_2c = 0x20;
  local_28 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011300,(int)&local_2c);
  local_2c = 0x40;
  local_24 = 0x60;
  local_20 = 0x28;
  local_28 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011400,(int)&local_2c);
  local_2c = 0x60;
  local_24 = 0x80;
  local_20 = 0x28;
  local_28 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011500,(int)&local_2c);
  local_2c = 0x80;
  local_24 = 0x90;
  local_20 = 0x28;
  local_28 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011600,(int)&local_2c);
  return;
}

