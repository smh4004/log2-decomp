/* sub_0801348C  (original: 0x0801348C-0x080134A8 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_0300208c;


int sub_0801348C(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 0x14)) {
    return 0;
  }
  return iVar1;
}

