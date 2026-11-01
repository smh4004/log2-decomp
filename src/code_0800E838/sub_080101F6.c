/* sub_080101F6  (original: 0x080101F6-0x0801021C in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


void sub_080101F6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24) + -4;
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 4) = (iVar1 >> 3) + 8;
  }
  return;
}

