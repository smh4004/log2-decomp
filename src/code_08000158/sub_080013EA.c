/* sub_080013EA  (original: 0x080013EA-0x08001462 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080069A4();
extern int sub_08006AD8();
extern int sub_080236B4();
extern int sub_080236A8();
extern undefined volatile DAT_03001120;


void sub_080013EA(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(char *)(param_1 + 10) + 1;
  uVar2 = (uint)(bVar1 >> 2);
  *(byte *)(param_1 + 10) = bVar1;
  if (7 < uVar2) {
    uVar2 = 0;
  }
  if (*(uint *)(param_1 + 0xc) != uVar2) {
    *(uint *)(param_1 + 0xc) = uVar2;
    sub_080236A8(*(int *)(param_1 + 0x57c),*(int *)(uVar2 * 4 + *(int *)(param_1 + 0x594) + 4),
                 *(int *)(param_1 + 0x594),param_4);
    *(undefined4 *)(param_1 + 0x584) = 0x10;
    *(undefined4 *)(param_1 + 0x588) = 0x10;
    *(undefined4 *)(param_1 + 0x58c) = 0x100;
    *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x584);
    *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x588);
    sub_080236B4(param_1 + 0x558,*(int *)(param_1 + 0x590));
    *(undefined4 *)(param_1 + 0x584) = 0x20;
    *(undefined4 *)(param_1 + 0x588) = 0x20;
    *(undefined4 *)(param_1 + 0x58c) = 0x400;
    *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x584);
    *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x588);
  }
  sub_080069A4(&DAT_03001120);
  sub_08006AD8(&DAT_03001120);
  return;
}

