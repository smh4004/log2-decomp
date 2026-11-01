/* sub_08003BB0  (original: 0x08003BB0-0x08003BCE in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08002B32();


void sub_08003BB0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x120) == 0) {
    iVar1 = 0x60;
    do {
      *param_2 = 0x95959595;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else {
    sub_08002B32();
  }
  return;
}

