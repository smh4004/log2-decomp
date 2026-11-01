/* sub_08027F40  (original: 0x08027F40-0x08027FEA in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 26% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08027E74();


void sub_08027F40(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
_08027F42:
  if (param_1 < param_2) {
    puVar3 = param_1 + ((int)param_2 - (int)param_1 >> 3);
    if (param_1 != puVar3) {
      iVar1 = sub_08027E74(puVar3,param_1);
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *puVar3;
        *puVar3 = uVar2;
      }
      iVar1 = sub_08027E74(param_1,param_2);
      puVar3 = param_2;
      puVar4 = param_1;
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar2;
      }
      do {
        iVar1 = sub_08027E74(puVar3,param_1);
        while (iVar1 != 0) {
          puVar3 = puVar3 + -1;
          iVar1 = sub_08027E74(puVar3,param_1);
        }
        do {
          puVar4 = puVar4 + 1;
          if (puVar3 <= puVar4) {
            uVar2 = *param_1;
            *param_1 = *puVar3;
            *puVar3 = uVar2;
            sub_08027F40(param_1,puVar3 + -1);
            param_1 = puVar3 + 1;
            goto _08027F42;
          }
          iVar1 = sub_08027E74(param_1,puVar4);
        } while (iVar1 != 0);
        uVar2 = *puVar4;
        *puVar4 = *puVar3;
        *puVar3 = uVar2;
        puVar3 = puVar3 + -1;
      } while( true );
    }
    iVar1 = sub_08027E74(param_1,param_2);
    if (iVar1 != 0) {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
  }
  return;
}

