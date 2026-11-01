/* sub_0801038C  (original: 0x0801038C-0x080103E0 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08006E0A();
extern int sub_08010304();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _08025BE0;


undefined4 * sub_0801038C(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x200;
  uVar1 = sub_080067AC(&DAT_03001120,0x200);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_08025BE0;
  param_1[5] = param_2;
  iVar2 = sub_08006E0A(&DAT_03001120,6,*(undefined1 *)(param_2 + 4));
  param_1[4] = iVar2;
  param_1[1] = *(int *)(iVar2 + 4) + 1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar2 + 8);
  sub_08010304(param_1);
  return param_1;
}

