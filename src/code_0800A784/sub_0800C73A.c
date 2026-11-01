/* sub_0800C73A  (original: 0x0800C73A-0x0800C75C in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_080068B8();
extern undefined volatile DAT_03001120;


void sub_0800C73A(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 4) + 4);
  if (param_2 < (int)uVar3) {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + param_2 * 4);
    uVar2 = __call_via_r1(puVar1,*puVar1,uVar3,param_4,param_4);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  return;
}

