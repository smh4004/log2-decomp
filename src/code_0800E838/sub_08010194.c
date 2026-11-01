/* sub_08010194  (original: 0x08010194-0x080101F6 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08010124();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _080255A4;


undefined4 *
sub_08010194(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x28), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    uVar1 = sub_080067AC(&DAT_03001120,0x100);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_080255A4;
    param_1[5] = param_3;
    param_1[6] = param_4;
    param_1[7] = param_5;
    iVar2 = param_2[1];
    param_1[8] = (*param_2 + -0x10) * 8;
    param_1[9] = iVar2 << 3;
    sub_08010124(param_1);
  }
  return param_1;
}

