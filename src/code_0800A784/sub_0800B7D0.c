/* sub_0800B7D0  (original: 0x0800B7D0-0x0800B7E6 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0800B7D0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 3;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + param_1 + 0x5e) = 0;
  } while (iVar2 < 10);
  return;
}

