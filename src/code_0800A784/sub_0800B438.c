/* sub_0800B438  (original: 0x0800B438-0x0800B464 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 13/13 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800B1E2();
extern undefined volatile _08023FC8;


undefined4 * sub_0800B438(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 3);
  puVar2 = (undefined4 *)sub_0801F08C(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08023FC8;
    sub_0800B1E2(puVar2,param_2 + 4,uVar1,param_1 + 0xc,param_4);
  }
  return puVar2;
}

