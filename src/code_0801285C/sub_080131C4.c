/* sub_080131C4  (original: 0x080131C4-0x080131E0 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_0300208c;


int sub_080131C4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 2)) {
    return 0;
  }
  return iVar1;
}

