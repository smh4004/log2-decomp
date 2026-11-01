/* sub_08017028  (original: 0x08017028-0x080170D8 in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int volatile DAT_03000e98;
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000e9c;
extern undefined volatile DAT_03000e9e;
extern undefined volatile DAT_03000ea0;
extern undefined volatile DAT_03000ea2;


void sub_08017028(undefined4 param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_03000e98 != 0) {
    DAT_03000e98 = DAT_03000e98 + -1;
  }
  uVar2 = *(int *)(param_2 + 0x184) + 0x6e;
  *(uint *)(param_2 + 0x184) = uVar2;
  if (uVar2 >> 0x10 != 0) {
    iVar4 = (uint)DAT_03000e90 * 0x1c;
    psVar3 = (short *)(&DAT_03000ea0 + iVar4);
    iVar5 = (int)*psVar3 + (*(short *)(&DAT_03000ea2 + iVar4) * 0x7ae >> 0x10);
    if (*(short *)(&DAT_03000ea2 + iVar4) < iVar5) {
      *psVar3 = *(short *)(&DAT_03000ea2 + iVar4);
    }
    else {
      *psVar3 = (short)iVar5;
    }
    uVar2 = 0;
    do {
      if (DAT_03000e90 != uVar2) {
        iVar4 = uVar2 * 0x1c;
        psVar3 = (short *)(&DAT_03000e9c + iVar4);
        iVar5 = (int)*(short *)(&DAT_03000ea0 + iVar4) +
                (*(short *)(&DAT_03000ea2 + iVar4) * 0xccd >> 0x10);
        if (*(short *)(&DAT_03000ea2 + iVar4) < iVar5) {
          *(short *)(&DAT_03000ea0 + iVar4) = *(short *)(&DAT_03000ea2 + iVar4);
        }
        else {
          *(short *)(&DAT_03000ea0 + iVar4) = (short)iVar5;
        }
        sVar1 = *(short *)(&DAT_03000e9e + iVar4);
        iVar4 = (int)*psVar3 + (sVar1 * 0xccd >> 0x10);
        if (sVar1 < iVar4) {
          *psVar3 = sVar1;
        }
        else {
          *psVar3 = (short)iVar4;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 6);
    *(uint *)(param_2 + 0x184) = *(uint *)(param_2 + 0x184) & 0xffff;
  }
  return;
}

