/* sub_08020BBA  (original: 0x08020BBA-0x08020BD0 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int WaitForVBlank();
extern undefined4 volatile DAT_03000e3c;
extern undefined2 volatile DAT_04000102;


void sub_08020BBA(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  WaitForVBlank(&DAT_03000e3c,0x400,param_3,param_4,param_4);
  DAT_04000102 = 0;
  return;
}

