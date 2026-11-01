/* sub_08003E22  (original: 0x08003E22-0x08003E42 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_08003E22(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(uint *)(iVar1 * 0x1c + param_3 + 0x20) & 2) != 0) {
      param_1 = param_1 + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return param_1;
}

