/* sub_0800F592  (original: 0x0800F592-0x0800F638 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FC9C();
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000e9c;
extern undefined volatile DAT_03000e9e;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E1610;


undefined4 sub_0800F592(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = (uint)DAT_03000e90 * 0x1c;
  psVar2 = (short *)(&DAT_03000e9c + iVar3);
  if (param_1 == 0xd) {
    sVar1 = *(short *)(&DAT_03000e9e + iVar3);
    iVar3 = (int)*psVar2 + (sVar1 * 0x4ccd >> 0x10);
    if (sVar1 < iVar3) {
      *psVar2 = sVar1;
    }
    else {
      *psVar2 = (short)iVar3;
    }
    goto _0800F622;
  }
  if (param_1 < 0xe) {
    if (param_1 != 0xb) {
      if (param_1 == 0xc) {
        sVar1 = *(short *)(&DAT_03000e9e + iVar3);
        iVar3 = (int)*psVar2 + (sVar1 * 0x3334 >> 0x10);
        if (sVar1 < iVar3) {
          *psVar2 = sVar1;
        }
        else {
          *psVar2 = (short)iVar3;
        }
      }
      goto _0800F622;
    }
  }
  else {
    if (param_1 == 0x15) {
      if ((int)*(short *)(&DAT_03000e9e + iVar3) < *psVar2 + 5) {
        *psVar2 = *(short *)(&DAT_03000e9e + iVar3);
      }
      else {
        *psVar2 = (short)(*psVar2 + 5);
      }
      goto _0800F622;
    }
    if (param_1 != 0x2b) goto _0800F622;
  }
  sVar1 = *(short *)(&DAT_03000e9e + iVar3);
  iVar3 = (int)*psVar2 + (sVar1 * 0x199a >> 0x10);
  if (sVar1 < iVar3) {
    *psVar2 = sVar1;
  }
  else {
    *psVar2 = (short)iVar3;
  }
_0800F622:
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E1610,0x40,0,param_4);
  return 1;
}

