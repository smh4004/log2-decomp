/* sub_08000756  (original: 0x08000756-0x0800084A in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08021F18();
extern int sub_0801F636();
extern int __call_via_r2();
extern int sub_080236B4();
extern undefined volatile gUnknown_080E2840;


void sub_08000756(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int a0;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x8))
  local_20 = 0xb000a;
  uStack_1c = 0xd000c;
  uStack_18 = 0xf;
  *(undefined4 *)(param_1 + 0x3c) = 0x40;
  *(undefined4 *)(param_1 + 0x40) = 0x1800;
  *(undefined4 *)(param_1 + 0x38) = 0x60;
  *(undefined4 *)(param_1 + 0x28) = 0x40;
  *(undefined4 *)(param_1 + 0x24) = 0x60;
  sub_08021F18(*(undefined4 *)(param_1 + 0x30),0);
  a0 = param_1 + 0xc;
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  do {
    *(int *)(param_1 + 0x14) = iVar4 * 0x18 + 0xb;
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar1 = 0x29;
    if (*(int *)(param_1 + 8) != iVar4) {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + 0x35) = uVar1;
    sub_0801F636(a0,*(undefined4 *)
                     (&gUnknown_080E2840 + (uint)*(ushort *)((int)&local_20 + iVar4 * 2) * 4));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  sub_080236B4(a0,0x6004f40);
  *(undefined4 *)(param_1 + 0x38) = 0x60;
  *(undefined4 *)(param_1 + 0x3c) = 0x38;
  *(undefined4 *)(param_1 + 0x40) = 0x1500;
  *(undefined4 *)(param_1 + 0x24) = 0x60;
  *(undefined4 *)(param_1 + 0x28) = 0x38;
  sub_08021F18(*(undefined4 *)(param_1 + 0x30),0);
  *(undefined1 *)(param_1 + 0xc) = 1;
  for (; iVar4 < 5; iVar4 = iVar4 + 1) {
    *(int *)(param_1 + 0x14) = iVar4 * 0x10 + -0x10;
    *(undefined4 *)(param_1 + 0x10) = 0x30;
    uVar1 = 0x29;
    if (*(int *)(param_1 + 8) != iVar4) {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + 0x35) = uVar1;
    sub_0801F636(a0,*(undefined4 *)
                     (&gUnknown_080E2840 + (uint)*(ushort *)((int)&local_20 + iVar4 * 2) * 4));
  }
  sub_080236B4(a0,0x6006b40);
  iVar4 = 0;
  do {
    piVar2 = (int *)(iVar4 * 0x14 + param_1 + 0xb4);
    piVar3 = (int *)*piVar2;
    __call_via_r2(piVar2,*(int *)(param_1 + 8) == iVar4,*piVar3 + (int)piVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}

