/* sub_0801C89C  (original: 0x0801C89C-0x0801C8F0 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802141C();


void sub_0801C89C(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(byte *)(param_1 + 4) != 0) {
    uVar1 = *(byte *)(param_1 + 4) + 0xff;
    uVar2 = uVar1 & 0xff;
    *(char *)(param_1 + 4) = (char)uVar1;
    if (uVar2 < 0x10) {
      *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_2 + 0x15c) = *(undefined4 *)(param_1 + 0xc);
    }
    else if ((int)(uVar2 << 0x1f) < 0) {
      iVar3 = sub_0802141C(0x400);
      *(int *)(param_2 + 0x158) = iVar3 + *(int *)(param_1 + 8) + -0x200;
      iVar3 = sub_0802141C(0x400);
      *(int *)(param_2 + 0x15c) = iVar3 + *(int *)(param_1 + 0xc) + -0x200;
      return;
    }
  }
  return;
}

