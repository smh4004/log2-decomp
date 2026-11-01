/* sub_0801AEF2  (original: 0x0801AEF2-0x0801AF2A in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801F08C();
extern undefined volatile _0802413C;


void sub_0801AEF2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  uVar2 = __call_via_r2(*(undefined4 **)(param_1 + 0x14),param_2,**(undefined4 **)(param_1 + 0x14));
  puVar3 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &_0802413C;
    puVar3[1] = uVar4;
    puVar3[3] = uVar2;
    puVar3[2] = uVar1;
    puVar3[4] = 1;
  }
  return;
}

