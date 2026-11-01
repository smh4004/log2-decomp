/* sub_08013260  (original: 0x08013260-0x0801327C in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_0300208c;


int sub_08013260(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 6)) {
    return 0;
  }
  return iVar1;
}

