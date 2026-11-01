/* sub_08012F9A  (original: 0x08012F9A-0x08012FCA in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08012EA4();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;


void sub_08012F9A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x44);
  if (*(short *)(iVar2 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x44) + 0x2c) + 4),
                         param_3,param_4,param_4);
    *(undefined2 *)(iVar2 + 0xe) = uVar1;
    sub_08012EA4(iVar2);
  }
  *(short *)(param_1 + 0xe) = *(short *)(iVar2 + 0xe) + *(short *)(*(int *)(param_1 + 0x14) + 0x14);
  return;
}

