/* sub_0800C8D8  (original: 0x0800C8D8-0x0800C978 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080236CC();
extern int sub_08020E5C();
extern int sub_0801F394();
extern int sub_0801F636();
extern int sub_08020EAA();
extern undefined1 volatile gUnknown_08028724;
extern undefined volatile gUnknown_083ED1EC;
extern undefined volatile gUnknown_080E2840;


void sub_0800C8D8(int param_1)

{
  int iVar1;
  unsigned int __frame[23];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_5c ((int *)((char *)__frame + 0x0))
#define local_4c ((undefined1 *)((char *)__frame + 0x10))
#define local_48 (*(undefined4 *)((char *)__frame + 0x14))
#define local_44 (*(undefined4 *)((char *)__frame + 0x18))
#define local_40 (*(undefined1 * *)((char *)__frame + 0x1c))
#define local_2c (*(undefined4 *)((char *)__frame + 0x30))
#define local_28 (*(undefined4 *)((char *)__frame + 0x34))
#define local_24 (*(undefined1 *)((char *)__frame + 0x38))
#define local_23 (*(undefined1 *)((char *)__frame + 0x39))
  sub_08020E5C(local_4c,0xf0,0x10);
  sub_0801F394(&gUnknown_083ED1EC,local_28);
  local_40 = &gUnknown_08028724;
  local_48 = 0x78;
  local_44 = 0xb;
  local_23 = 2;
  local_24 = 1;
  local_2c = 0x8020ec3;
  local_4c[0] = 1;
  sub_0801F636(local_4c,*(undefined4 *)(&gUnknown_080E2840 + *(int *)(param_1 + 0x14) * 4));
  local_5c[0] = 0;
  local_5c[1] = 0;
  local_5c[2] = 0x20;
  local_5c[3] = 0x10;
  iVar1 = 0;
  do {
    sub_080236CC((int)local_4c,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000 + iVar1 * 0x200,
                 (int)local_5c);
    iVar1 = iVar1 + 1;
    local_5c[0] = local_5c[0] + 0x20;
    local_5c[2] = local_5c[2] + 0x20;
  } while (iVar1 < 7);
  local_5c[2] = 0xf0;
  sub_080236CC((int)local_4c,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010e00,(int)local_5c);
  sub_08020EAA(local_4c,0);
  return;
}

