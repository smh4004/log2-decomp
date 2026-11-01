/* sub_08020A22  (original: 0x08020A22-0x08020A4C in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; BLOCKED: passes the snapshot tests but changes game output on tools/harness/decomp_explore.txt (found by gamebisect.py).
 */
#include "ghidra_types.h"


int sub_08020A22(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x60 + param_1;
    *(undefined1 *)(iVar2 + 0x62) = 0;
    *(undefined1 *)(iVar2 + 0x77) = 0;
    *(undefined1 *)(iVar2 + 0x70) = 0;
    *(undefined1 *)(iVar2 + 0x28) = 0;
    iVar1 = iVar1 + 1;
    *(int *)(iVar2 + 0x44) = iVar2 + 0x18;
  } while (iVar1 < 0xf);
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
