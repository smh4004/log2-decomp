/* sub_0800490C  (original: 0x0800490C-0x08004964 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08002E28();
extern int sub_08002DDA();
extern undefined2 volatile REG_DISPCNT;


undefined4 sub_0800490C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
      REG_DISPCNT = 0xe00;
      *(undefined1 *)(param_1 + 5) = 2;
    }
    iVar2 = sub_08002DDA(param_1 + 0x60,iVar2);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 2;
      REG_DISPCNT = 0xe00;
      *(undefined1 *)(param_1 + 5) = 2;
    }
  }
  return 0;
}

