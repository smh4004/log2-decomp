/* sub_0801F5E6  (original: 0x0801F5E6-0x0801F60A in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_0801F5E6(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*param_2 != 0) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar2 = (uint)*(ushort *)
                     (*(int *)(param_1 + 0xc) +
                     (uint)*(ushort *)(*(int *)(param_1 + 0xc) + (uint)bVar1 * 2) * 2) + iVar2 + 1;
    } while (*param_2 != 0);
  }
  return iVar2;
}

