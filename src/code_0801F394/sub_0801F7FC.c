/* sub_0801F7FC  (original: 0x0801F7FC-0x0801F876 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 90% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0801F7FC(int param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  
  for (; cVar1 = *param_2, cVar1 != '\0'; param_2 = param_2 + 1) {
    if (((cVar1 != ' ') && (cVar1 != '\n')) && (cVar1 != '\v')) goto _0801F81A;
  }
  param_4[3] = 1;
_0801F81A:
  *param_4 = param_2;
  param_4[1] = param_2;
  param_4[3] = 0;
  pbVar4 = (byte *)0x0;
  uVar6 = 0;
  param_4[2] = 0;
  do {
    pbVar2 = (byte *)param_4[1];
    uVar5 = (uint)*pbVar2;
    if (uVar5 == 0) {
      param_4[3] = 1;
      return;
    }
    if (uVar5 == 0x20) {
      uVar6 = param_4[2];
      pbVar4 = pbVar2;
    }
    else {
      if (uVar5 == 10) {
        return;
      }
      if (uVar5 == 0xb) {
        param_4[3] = 1;
        return;
      }
    }
    iVar3 = *(ushort *)
             (*(int *)(param_1 + 0xc) + (uint)*(ushort *)(*(int *)(param_1 + 0xc) + uVar5 * 2) * 2)
            + 1 + param_4[2];
    param_4[2] = iVar3;
    if (param_3 < iVar3) {
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      param_4[1] = pbVar4;
      param_4[2] = uVar6;
      return;
    }
    param_4[1] = pbVar2 + 1;
  } while( true );
}

