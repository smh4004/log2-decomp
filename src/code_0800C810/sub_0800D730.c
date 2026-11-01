/* sub_0800D730  (original: 0x0800D730-0x0800D764 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0800BF6E();
extern int __call_via_r3();
extern int volatile DAT_03002068;
extern undefined4 volatile DAT_03001fe0;


undefined4 sub_0800D730(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_03002068;
  iVar3 = *param_2;
  iVar3 = __call_via_r3(param_2,param_3,iVar3,*(int *)(iVar3 + 4) + iVar3,param_4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_03002068 == iVar1) {
      sub_0800BF6E(&DAT_03001fe0,param_2);
    }
    uVar2 = 1;
  }
  return uVar2;
}

