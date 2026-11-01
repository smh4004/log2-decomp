/* sub_0801E2A0  (original: 0x0801E2A0-0x0801E2D2 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801E224();
extern int sub_08006D70();
extern int sub_080068B8();
extern undefined volatile DAT_03001120;


undefined4 sub_0801E2A0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_08006D70(&DAT_03001120);
  if (iVar1 < 0x100) {
    uVar2 = 0;
  }
  else {
    uVar2 = sub_0801E224(0,param_1,param_2,param_3,param_4);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  return uVar2;
}

