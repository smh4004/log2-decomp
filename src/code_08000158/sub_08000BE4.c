/* sub_08000BE4  (original: 0x08000BE4-0x08000C18 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int volatile DAT_03000e84;
extern undefined4 volatile __iwram_end;
extern undefined2 volatile REG_BG3HOFS;
extern undefined2 volatile REG_BG3VOFS;
extern undefined4 volatile _03000E7C;


void sub_08000BE4(void)

{
  _03000E7C = _03000E7C + -1;
  if (_03000E7C < 1) {
    _03000E7C = 4;
    __iwram_end = __iwram_end + -1;
    if (__iwram_end < 0) {
      __iwram_end = 0x7f;
    }
    DAT_03000e84 = DAT_03000e84 + -1;
    if (DAT_03000e84 < 0) {
      DAT_03000e84 = 0x7f;
    }
    REG_BG3HOFS = (short)__iwram_end;
    REG_BG3VOFS = (short)DAT_03000e84;
  }
  return;
}

