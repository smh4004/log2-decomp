/* sub_08008B5C  (original: 0x08008B5C-0x08008B88 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


void sub_08008B5C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x24) = iVar1;
  if (iVar1 < -0x10) {
    sub_080068CA(&DAT_03001120,param_1,0xfffffff0,param_4,param_4);
  }
  else if (8 < iVar1) {
    *(undefined4 *)(param_1 + 0x24) = 8;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

