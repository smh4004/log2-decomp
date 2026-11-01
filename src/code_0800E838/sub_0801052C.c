/* sub_0801052C  (original: 0x0801052C-0x0801055C in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


void sub_0801052C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((uint)*(byte *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x17)) * 0x1000000;
  iVar2 = iVar1 >> 0x18;
  *(char *)(param_1 + 0x18) = (char)((uint)iVar1 >> 0x18);
  if (iVar2 < -8) {
    sub_080068CA(&DAT_03001120,param_1,0xfffffff8,param_4,param_4);
  }
  else if (8 < iVar2) {
    *(undefined1 *)(param_1 + 0x18) = 8;
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return;
}

