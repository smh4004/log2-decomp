/* sub_080212F2  (original: 0x080212F2-0x0802130A in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_080212F2(int param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34);
  pcVar1 = *(char **)(param_1 + 0x24);
  do {
    if (*pcVar1 == '\0') {
      *pcVar1 = param_2;
    }
    pcVar1 = pcVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

