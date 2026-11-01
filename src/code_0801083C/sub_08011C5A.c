/* sub_08011C5A  (original: 0x08011C5A-0x08011CA8 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013BF4();
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


void sub_08011C5A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x54) + 1;
    iVar2 = iVar1 >> 3;
    *(int *)(param_1 + 0x54) = iVar1;
    if (3 < iVar2) {
      iVar2 = 2 - ((iVar2 << 0x1f) >> 0x1f);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x4c) + iVar2 * 0xc;
    sub_08013BF4();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50) + -1;
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 == 0) {
      sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
    }
  }
  return;
}

