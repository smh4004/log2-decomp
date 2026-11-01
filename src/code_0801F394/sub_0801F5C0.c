/* sub_0801F5C0  (original: 0x0801F5C0-0x0801F5E6 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_0801F5C0(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = 0;
  iVar3 = param_3 + -1;
  if (param_3 != 0) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar2 = (uint)*(ushort *)
                     (*(int *)(param_1 + 0xc) +
                     (uint)*(ushort *)(*(int *)(param_1 + 0xc) + (uint)bVar1 * 2) * 2) + iVar2 + 1;
      bVar4 = iVar3 != 0;
      iVar3 = iVar3 + -1;
    } while (bVar4);
  }
  return iVar2;
}

