/* sub_08016E8C  (original: 0x08016E8C-0x08016EBE in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08025D20;


void sub_08016E8C(undefined4 *param_1,int param_2,undefined2 param_3,short param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025D20;
    param_1[5] = param_2;
    *(undefined2 *)(param_1 + 3) = param_3;
    *(short *)((int)param_1 + 0xe) = *(short *)(param_2 + 0x14) + param_4;
    param_1[4] = (uint)(*(char *)(param_2 + 0x16) != '\0');
  }
  return;
}

