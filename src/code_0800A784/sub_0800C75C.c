/* sub_0800C75C  (original: 0x0800C75C-0x0800C7AE in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_080068B8();
extern undefined volatile DAT_03001120;


void sub_0800C75C(int param_1,int param_2,int *param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_2 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 4)) {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + param_2 * 4);
    piVar2 = (int *)__call_via_r1(puVar1,*puVar1);
    __call_via_r1(piVar2,*(int *)(*piVar2 + 0x30) + *piVar2);
    piVar2[0x56] = *param_3 << 8;
    piVar2[0x57] = param_3[1] << 8;
    __call_via_r1(piVar2,*(int *)(*piVar2 + 0x34) + *piVar2);
    *(undefined1 *)(piVar2 + 4) = param_4;
    sub_080068B8(&DAT_03001120,piVar2);
  }
  return;
}

