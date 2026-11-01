/* sub_08018580  (original: 0x08018580-0x080185E6 in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080174EA();
extern int sub_080068B8();
extern int sub_08018EFC();
extern int sub_080187F0();
extern undefined volatile DAT_03001120;
extern undefined2 volatile REG_DISPCNT;


void sub_08018580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  sub_080174EA(param_1,1,param_3,param_4,param_4);
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      uVar1 = sub_08018EFC(0,iVar2 * 0x1c + param_1 + 0x7c);
      sub_080068B8(&DAT_03001120,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x78));
  }
  uVar1 = sub_080187F0(0);
  *(undefined4 *)(param_1 + 0x408) = uVar1;
  sub_080068B8(&DAT_03001120,uVar1);
  REG_DISPCNT = 0x1940;
  return;
}

