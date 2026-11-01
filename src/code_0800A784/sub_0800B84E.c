/* sub_0800B84E  (original: 0x0800B84E-0x0800B8A6 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F7E2();
extern undefined1 volatile gUnknown_083EC9B0;


void sub_0800B84E(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 3 + param_1;
    if (*(char *)(iVar2 + 0x5e) != '\0') {
      *(undefined1 *)(param_1 + 0xa5) = (&gUnknown_083EC9B0)[iVar3];
      bVar1 = *(byte *)(iVar2 + 0x5d);
      *(uint *)(param_1 + 0x80) = (uint)*(byte *)(iVar2 + 0x5c);
      *(uint *)(param_1 + 0x84) = (uint)bVar1;
      sub_0801F7E2(param_1 + 0x7c,*(undefined1 *)(iVar2 + 0x5e));
    }
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 0x5c) = *(undefined1 *)(iVar2 + 0x5f);
    *(undefined1 *)(iVar2 + 0x5d) = *(undefined1 *)(iVar2 + 0x60);
    *(undefined1 *)(iVar2 + 0x5e) = *(undefined1 *)(iVar2 + 0x61);
  } while (iVar3 < 9);
  return;
}

