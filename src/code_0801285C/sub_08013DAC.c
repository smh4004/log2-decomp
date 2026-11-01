/* sub_08013DAC  (original: 0x08013DAC-0x08013DEE in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802141C();
extern int sub_080135E0();
extern int sub_080068B8();
extern int sub_08006D70();
extern undefined volatile DAT_03001120;
extern undefined volatile gUnknown_086AF614;


void sub_08013DAC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    iVar1 = sub_0802141C(0x4000);
    uVar2 = sub_080135E0(0,param_1 + 8,&gUnknown_086AF614,4,iVar1 + 0x1000,0x400,0x28);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  return;
}

