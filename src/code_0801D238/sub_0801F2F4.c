/* sub_0801F2F4  (original: 0x0801F2F4-0x0801F346 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F294();
extern int volatile DAT_03000e24;
extern undefined volatile DAT_03000e28;
extern undefined4 volatile DAT_030022b8;
extern undefined4 volatile _03000E1C;


undefined4 sub_0801F2F4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_03000e24 * 4;
  DAT_03000e24 = DAT_03000e24 + 1;
  *(int **)(&DAT_03000e28 + iVar2) = _03000E1C;
  _03000E1C = &DAT_030022b8;
  __call_via_r1(param_1,*(int *)(*param_1 + 4) + *param_1);
  _03000E1C = param_1;
  uVar3 = sub_0801F294();
  piVar1 = _03000E1C;
  if (DAT_03000e24 != 0) {
    _03000E1C = &DAT_030022b8;
    iVar2 = *piVar1;
    __call_via_r1(piVar1,*(int *)(iVar2 + 8) + iVar2);
    DAT_03000e24 = DAT_03000e24 + -1;
    _03000E1C = *(int **)(&DAT_03000e28 + DAT_03000e24 * 4);
  }
  return uVar3;
}

