/* sub_080119CC  (original: 0x080119CC-0x080119F4 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: inconclusive, mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_0800F162();
extern int volatile DAT_03001fd0;
extern undefined4 volatile DAT_03001fd4;
extern undefined4 volatile DAT_03001fd8;


void sub_080119CC(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  DAT_03001fd4 = *(undefined4 *)(iVar1 + 0x1c);
  DAT_03001fd0 = *(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0x18) >> 1;
  sub_0800F162(*(undefined4 *)(param_1 + 8),&DAT_03001fd8);
  return;
}

