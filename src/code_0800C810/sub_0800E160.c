/* sub_0800E160  (original: 0x0800E160-0x0800E19C in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801FC9C();
extern int sub_0802141C();
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;


void sub_0800E160(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(uint *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + (uint)*(byte *)(param_1 + 4) * 0x10 + 0x4c;
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x25) * 0xc,0x40,0,param_4);
  return;
}

