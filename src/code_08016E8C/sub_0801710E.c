/* sub_0801710E  (original: 0x0801710E-0x08017158 in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000e9c;
extern undefined volatile DAT_03000e9e;


void sub_0801710E(undefined4 param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  uVar2 = *(int *)(param_2 + 0x184) + 0xccd;
  *(uint *)(param_2 + 0x184) = uVar2;
  if (uVar2 >> 0x10 != 0) {
    psVar3 = (short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c);
    sVar1 = *(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c);
    iVar4 = (int)*psVar3 + (sVar1 * 0x290 >> 0x10);
    if (sVar1 < iVar4) {
      *psVar3 = sVar1;
    }
    else {
      *psVar3 = (short)iVar4;
    }
    *(uint *)(param_2 + 0x184) = *(uint *)(param_2 + 0x184) & 0xffff;
  }
  return;
}

