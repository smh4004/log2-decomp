/* sub_08009370  (original: 0x08009370-0x08009392 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, r0-void.
 */
#include "ghidra_types.h"
extern int sub_08009324();
extern int sub_08006E0A();
extern int volatile DAT_03001fa8;
extern undefined volatile DAT_03001120;


void sub_08009370(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (DAT_03001fa8 == 0)) {
    uVar1 = sub_08009324(param_1);
    sub_08006E0A(&DAT_03001120,5,uVar1);
  }
  return;
}

