/* sub_08001CD6  (original: 0x08001CD6-0x08001D2E in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08002DDA();
extern int sub_08002E28();
extern undefined2 volatile REG_DISPCNT;


undefined4 sub_08001CD6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xc;
  if (*(char *)(param_1 + 0xc) == '\0') {
    sub_08002E28(param_1 + 0x48,iVar2,param_3,param_4,param_4);
    sub_08002E28(param_1 + 0x60,iVar2);
  }
  else {
    iVar1 = sub_08002DDA(param_1 + 0x48,iVar2);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      REG_DISPCNT = 0x1e40;
      *(undefined1 *)(param_1 + 5) = 2;
    }
    iVar2 = sub_08002DDA(param_1 + 0x60,iVar2);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 2;
      REG_DISPCNT = 0x1e40;
      *(undefined1 *)(param_1 + 5) = 2;
    }
  }
  return 0;
}

