/* sub_08004230  (original: 0x08004230-0x0800425A in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 11/11 snapshots, 90% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_081D9834;


int sub_08004230(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = 0x31;
  if (iVar1 < 0x15e6b71) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar1 < *(int *)(&gUnknown_081D9834 + iVar2 * 4));
  }
  if (0x31 < iVar2 + 1) {
    return 0;
  }
  return *(int *)(&gUnknown_081D9834 + (iVar2 + 1) * 4) - iVar1;
}

