/* sub_0800C718  (original: 0x0800C718-0x0800C73A in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801A2F8();
extern int sub_080068B8();
extern undefined volatile DAT_03001120;


void sub_0800C718(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(*(int *)(param_1 + 4) + 6);
  if (param_2 < (int)uVar2) {
    uVar1 = sub_0801A2F8(0,*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + param_2 * 4),
                         param_3,uVar2,param_4);
    sub_080068B8(&DAT_03001120,uVar1);
  }
  return;
}

