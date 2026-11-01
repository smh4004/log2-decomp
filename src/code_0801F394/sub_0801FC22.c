/* sub_0801FC22  (original: 0x0801FC22-0x0801FC4E in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0801FC22(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while ((iVar2 = iVar1 * 0x40 + param_1, (*(byte *)(iVar2 + 0x10) & 1) == 0 ||
         (*(int *)(iVar2 + 0x28) != param_2))) {
    iVar1 = iVar1 + 1;
    if (0xf < iVar1) {
      return;
    }
  }
  param_1 = iVar1 * 0x40 + param_1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  return;
}

