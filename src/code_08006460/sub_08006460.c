/* sub_08006460  (original: 0x08006460-0x0800649C in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08021EA8();
extern int sub_0801F08C();
extern int volatile DAT_0300108c;


void sub_08006460(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_0801F08C(0x88);
  if (iVar1 != 0) {
    sub_08021EA8(iVar1,param_1,0x88);
  }
  DAT_0300108c = iVar1;
  uVar2 = sub_0801F08C(0x2000);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = sub_0801F08C(0x2000);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = sub_0801F08C(0x2000);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  return;
}

