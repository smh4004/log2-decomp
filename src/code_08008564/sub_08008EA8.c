/* sub_08008EA8  (original: 0x08008EA8-0x08008EFA in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 27% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


undefined4 sub_08008EA8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 9) {
    *(undefined1 *)(param_1 + 0x10) = 0xff;
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar1 = 0;
  }
  else if (param_2 == 10) {
    iVar2 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x24) = iVar2;
    if (iVar2 < -0x10) {
      sub_080068CA(&DAT_03001120,param_1,0,0xfffffff0,param_4);
    }
    else if (8 < iVar2) {
      *(undefined4 *)(param_1 + 0x24) = 8;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    uVar1 = 0;
  }
  else if (param_2 == 0x12) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

