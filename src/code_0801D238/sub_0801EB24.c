/* sub_0801EB24  (original: 0x0801EB24-0x0801EB70 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013BF4();
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


void sub_0801EB24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = iVar2 + *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar2 = *(int *)(param_1 + 0x54) + 1;
    *(int *)(param_1 + 0x54) = iVar2;
    uVar3 = (uint)(iVar2 * 0x10000000) >> 0x1e;
    if (uVar3 == 3) {
      uVar3 = 1;
    }
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x4c) + uVar3 * 0xc;
    sub_08013BF4();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50) + -1;
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 == 0) {
      sub_080068CA(&DAT_03001120,param_1,iVar2,*(int *)(param_1 + 0x44),param_4);
    }
  }
  return;
}

