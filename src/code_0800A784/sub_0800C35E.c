/* sub_0800C35E  (original: 0x0800C35E-0x0800C390 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08003F06();
extern int sub_0800F034();


void sub_0800C35E(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 5) != '\0') {
    do {
      puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + iVar2 * 4);
      iVar1 = sub_08003F06(*puVar3);
      if (iVar1 != 0) {
        sub_0800F034(puVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 5));
  }
  return;
}

