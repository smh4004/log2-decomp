/* sub_08010124  (original: 0x08010124-0x08010194 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08020EAA();
extern int sub_08021F18();
extern int sub_0801F6D8();
extern int sub_080236CC();
extern int sub_08020E5C();
extern undefined1 volatile gUnknown_08028724;
extern undefined volatile gUnknown_086FF0CC;
extern undefined volatile _080102EC;


void sub_08010124(int param_1)

{
  unsigned int __frame[17];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_44 ((undefined1 *)((char *)__frame + 0x0))
#define local_40 (*(undefined4 *)((char *)__frame + 0x4))
#define local_3c (*(undefined4 *)((char *)__frame + 0x8))
#define local_38 (*(undefined1 * *)((char *)__frame + 0xc))
#define local_24 (*(undefined4 *)((char *)__frame + 0x20))
#define local_20 (*(undefined4 *)((char *)__frame + 0x24))
#define local_1c (*(undefined1 *)((char *)__frame + 0x28))
#define local_1b (*(undefined1 *)((char *)__frame + 0x29))
#define local_10 (*(undefined4 *)((char *)__frame + 0x34))
  sub_08020E5C(local_44,0x20,8);
  local_38 = &gUnknown_086FF0CC;
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_38 = &gUnknown_08028724;
  }
  local_1b = (undefined1)*(undefined4 *)(param_1 + 0x18);
  local_1c = 1;
  local_24 = 0x8020fdd;
  local_44[0] = 1;
  local_3c = 7;
  local_40 = 0x10;
  *(undefined1 *)(param_1 + 8) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0x10;
  sub_08021F18(local_20,0,local_10);
  sub_0801F6D8(local_44,&_080102EC,*(undefined4 *)(param_1 + 0x14));
  sub_080236CC((int)local_44,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000,0x86d1bd8);
  sub_08020EAA(local_44,0);
  return;
}

