/* sub_080132F2  (original: 0x080132F2-0x0801330E in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_0300208c;


int sub_080132F2(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 4)) {
    return 0;
  }
  return iVar1;
}

