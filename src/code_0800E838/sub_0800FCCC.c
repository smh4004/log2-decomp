/* sub_0800FCCC  (original: 0x0800FCCC-0x0800FD3E in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800FC84();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _080245E8;


undefined4 * sub_0800FCCC(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x30), param_1 != (undefined4 *)0x0)) {
    iVar2 = param_2[1];
    iVar3 = *param_2;
    *param_1 = &_08023A1C;
    *(short *)((int)param_1 + 0xe) = (short)iVar2 * (short)iVar3;
    uVar1 = sub_080067AC(&DAT_03001120);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_080245E8;
    param_1[5] = param_2;
    param_1[4] = param_2[2];
    uVar4 = param_3[1];
    param_1[6] = *param_3;
    param_1[7] = uVar4;
    iVar2 = *param_2;
    param_1[9] = param_1[7] + param_2[1];
    param_1[8] = param_1[6] + iVar2;
    param_1[1] = param_1[9];
    sub_0800FC84(param_1);
  }
  return param_1;
}

