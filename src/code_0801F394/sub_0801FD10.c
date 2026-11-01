/* sub_0801FD10  (original: 0x0801FD10-0x0801FD22 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; BLOCKED: passes the snapshot tests but changes game output on tools/harness/decomp_explore.txt (found by gamebisect.py).
 */
#include "ghidra_types.h"


int sub_0801FD10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x40;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + param_1 + 0x10) = 0;
  } while (iVar1 < 0x10);
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
