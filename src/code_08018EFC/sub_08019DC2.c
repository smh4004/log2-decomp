/* sub_08019DC2  (original: 0x08019DC2-0x08019E4C in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08021344();
extern int __call_via_r1();
extern int sub_08021F18();


void sub_08019DC2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = **(int **)(param_1 + 0x4c);
  iVar2 = __call_via_r1(*(int **)(param_1 + 0x4c),*(int *)(iVar2 + 0x24) + iVar2);
  if (*(int *)(param_1 + 0x48) != iVar2) {
    *(int *)(param_1 + 0x48) = iVar2;
    sub_08021F18(*(undefined4 *)(param_1 + 0x34),0,*(undefined4 *)(param_1 + 0x44));
    iVar1 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x34) + iVar1;
      iVar1 = iVar1 + 8;
      *(undefined1 *)(iVar3 + 0x15) = 4;
    } while (iVar1 < 200);
    iVar1 = 0;
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar1 + 0x12) = 4;
      iVar3 = *(int *)(param_1 + 0x34) + iVar1;
      iVar1 = iVar1 + 1;
      *(undefined1 *)(iVar3 + 0xd2) = 4;
    } while (iVar1 < 3);
    iVar1 = 0;
    do {
      uVar4 = iVar2 + iVar1 & 7;
      if ((int)(uVar4 << 0x1f) < 0) {
        iVar3 = iVar1 * 8;
        *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar3 + 0x1c) = 4;
        if (((int)(uVar4 << 0x1e) < 0) &&
           (*(undefined1 *)(*(int *)(param_1 + 0x34) + iVar3 + 0x1b) = 4, (int)(uVar4 << 0x1d) < 0))
        {
          *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar3 + 0x1a) = 4;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x17);
    sub_08021344(param_1 + 0x10,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000);
  }
  return;
}

