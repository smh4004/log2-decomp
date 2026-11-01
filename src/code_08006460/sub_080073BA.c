/* sub_080073BA  (original: 0x080073BA-0x080073EA in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080067AC();
extern int sub_080072C4();
extern undefined volatile DAT_03001120;


void sub_080073BA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(short *)(iVar2 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x28) + 0x2c) + 4),
                         param_3,param_4,param_4);
    *(undefined2 *)(iVar2 + 0xe) = uVar1;
    sub_080072C4(iVar2);
  }
  *(short *)(param_1 + 0xe) = *(short *)(iVar2 + 0xe) + *(short *)(*(int *)(param_1 + 0x14) + 0x14);
  return;
}

