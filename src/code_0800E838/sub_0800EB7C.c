/* sub_0800EB7C  (original: 0x0800EB7C-0x0800EBB6 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 74% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800E0AC();
extern int sub_0801F878();
extern undefined1 volatile gUnknown_08409368;


byte * sub_0800EB7C(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar1 = sub_0800E0AC();
  iVar3 = 0;
  pbVar2 = &gUnknown_08409368;
  if (0 < iVar1) {
    do {
      if ((*pbVar2 == param_1) && (pbVar2[1] == param_2)) {
        return pbVar2;
      }
      pbVar2 = pbVar2 + 0x38;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  sub_0801F878("Unable to find area","K:\\Source\\AreaEntry.cpp",0x39,0,param_4);
  return (byte *)0x0;
}

