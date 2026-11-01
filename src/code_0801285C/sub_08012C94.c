/* sub_08012C94  (original: 0x08012C94-0x08012CEE in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08025F90;


void sub_08012C94(undefined4 *param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x44), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025F90;
    param_1[5] = param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    param_1[6] = *param_2;
    param_1[7] = uVar1;
    param_1[8] = uVar2;
    param_1[9] = param_2[3];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1[5] + 0x16);
    param_1[1] = param_2[3];
    param_1[4] = (uint)(*(char *)(param_1[5] + 0x17) != '\0');
    *(undefined2 *)(param_1 + 3) = param_3;
    param_1[0xc] = (int)(param_1[6] + param_1[8]) >> 1;
    param_1[10] = param_1[8] - param_1[6];
    param_1[0xd] = param_1[9];
    param_1[0xb] = param_1[9] - param_1[7];
  }
  return;
}

