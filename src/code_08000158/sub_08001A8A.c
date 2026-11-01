/* sub_08001A8A  (original: 0x08001A8A-0x08001AB8 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_08001A8A(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_2 * 0x164 + param_1);
  uVar3 = (uint)*pbVar4;
  iVar2 = 0;
  iVar1 = 0;
  if (uVar3 != 0) {
    do {
      if ((*(uint *)(pbVar4 + iVar2 * 0x1c + 0x20) & 1) != 0) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar3);
  }
  return iVar1;
}

