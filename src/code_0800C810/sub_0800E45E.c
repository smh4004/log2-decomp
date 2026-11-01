/* sub_0800E45E  (original: 0x0800E45E-0x0800E484 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080063B6();
extern undefined volatile DAT_03001090;


undefined4 sub_0800E45E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x18d) == '\0') &&
     (iVar1 = sub_080063B6(&DAT_03001090,param_2,param_1 + 0x154,param_4,param_4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

