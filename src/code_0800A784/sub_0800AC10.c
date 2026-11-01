/* sub_0800AC10  (original: 0x0800AC10-0x0800AC5C in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 97% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08003CA0();
extern int sub_08004214();
extern int sub_08004276();
extern undefined1 volatile DAT_03000e90;
extern undefined volatile DAT_03000e9c;


void sub_0800AC10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  if (0x32 < iVar3) {
    iVar3 = 0x32;
  }
  iVar1 = sub_08004214(&DAT_03000e9c + iVar2 * 0x1c);
  if (iVar1 < iVar3) {
    sub_08003CA0(&DAT_03000e90,iVar2,iVar1,iVar3,param_4);
    sub_08004276(&DAT_03000e9c + iVar2 * 0x1c,iVar3);
  }
  return;
}

