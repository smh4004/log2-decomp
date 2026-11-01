/* sub_08004214  (original: 0x08004214-0x08004230 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_081D9834;


int sub_08004214(int param_1)

{
  int iVar1;
  
  iVar1 = 0x31;
  if (*(int *)(param_1 + 0x10) < 0x15e6b71) {
    do {
      iVar1 = iVar1 + -1;
    } while (*(int *)(param_1 + 0x10) < *(int *)(&gUnknown_081D9834 + iVar1 * 4));
  }
  return iVar1 + 1;
}

