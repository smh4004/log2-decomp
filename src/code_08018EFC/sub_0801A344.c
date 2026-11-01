/* sub_0801A344  (original: 0x0801A344-0x0801A378 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern int sub_0800BE7A();
extern undefined volatile DAT_03001120;


undefined4 sub_0801A344(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    sub_080068CA(&DAT_03001120,param_1);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < 0x20) {
    iVar1 = iVar1 << 3;
  }
  else {
    iVar1 = (0x40 - iVar1) * 8;
  }
  sub_0800BE7A(iVar1);
  return 0;
}

