/* sub_08001960  (original: 0x08001960-0x080019D4 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 90% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08003F9C();
extern int sub_080220CC();


int sub_08001960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_1 != 0) || (param_1 = sub_0801F08C(0x474), param_1 != 0)) {
    sub_080220CC(param_1,param_1 + 0x42c,0x164,0x8026699,param_4);
    iVar5 = 0;
    do {
      iVar1 = iVar5 * 0x164 + param_1;
      sub_08003F9C(iVar1,iVar5);
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar6 = iVar2 * 0x1c + iVar1;
        if ((*(uint *)(iVar6 + 0x20) & 1) != 0) {
          iVar4 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          *(int *)(iVar5 * 0x18 + param_1 + iVar4 + 0x42c) = iVar6 + 0xc;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  return param_1;
}

