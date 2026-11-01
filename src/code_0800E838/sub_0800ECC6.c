/* sub_0800ECC6  (original: 0x0800ECC6-0x0800ECF8 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 83% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


int sub_0800ECC6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
  }
  else {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    iVar1 = *(int *)(param_1 + 0x1c) + 2;
    *(int *)(param_1 + 0x1c) = iVar1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar1;
  }
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
