/* sub_08019CA2  (original: 0x08019CA2-0x08019D34 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08021344();
extern int __call_via_r1();
extern int sub_08021F18();


void sub_08019CA2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = **(int **)(param_1 + 0x4c);
  iVar2 = *(int *)(iVar1 + 0x20);
  iVar1 = __call_via_r1(*(int **)(param_1 + 0x4c),iVar2 + iVar1,iVar2,param_4,param_4);
  if (*(int *)(param_1 + 0x48) != iVar1) {
    *(int *)(param_1 + 0x48) = iVar1;
    sub_08021F18(*(undefined4 *)(param_1 + 0x34),0,*(undefined4 *)(param_1 + 0x44));
    iVar2 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x34) + iVar2;
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar3 + 0xa2) = 4;
    } while (iVar2 < 0x19);
    iVar2 = 0;
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar2 + 0x42) = 4;
      iVar3 = *(int *)(param_1 + 0x34) + iVar2;
      iVar2 = iVar2 + 0x20;
      *(undefined1 *)(iVar3 + 0x5a) = 4;
    } while (iVar2 < 0x60);
    iVar2 = 0;
    do {
      uVar4 = iVar1 + iVar2 & 7;
      if ((int)(uVar4 << 0x1f) < 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar2 + 0x83) = 4;
        if ((int)(uVar4 << 0x1e) < 0) {
          *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar2 + 99) = 4;
          if ((int)(uVar4 << 0x1d) < 0) {
            *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar2 + 0x43) = 4;
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x17);
    sub_08021344(param_1 + 0x10,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000);
  }
  return;
}

