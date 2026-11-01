/* sub_0800ABA4  (original: 0x0800ABA4-0x0800ABD6 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 1/1 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011802();
extern int sub_08006D70();
extern int sub_080068B8();
extern undefined volatile DAT_03001120;
extern undefined4 volatile DAT_03001fd0;


void sub_0800ABA4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  iVar2 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar2) {
    uVar1 = sub_08011802(0,iVar3,&DAT_03001fd0);
    sub_080068B8(&DAT_03001120,uVar1);
  }
  return;
}

