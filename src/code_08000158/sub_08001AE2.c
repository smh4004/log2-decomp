/* sub_08001AE2  (original: 0x08001AE2-0x08001B0E in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08001AE2(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined1 *)(param_2 * 0x164 + param_1);
  while (((*(uint *)(puVar1 + iVar2 * 0x1c + 0x20) & 1) == 0 ||
         (param_3 = param_3 + -1, -1 < param_3))) {
    iVar2 = iVar2 + 1;
    if (5 < iVar2) {
      return;
    }
  }
  *puVar1 = (char)iVar2;
  return;
}

