/* sub_08012FCA  (original: 0x08012FCA-0x0801300A in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08012EA4();
extern int sub_080067AC();
extern int sub_08012C94();
extern undefined volatile DAT_03001120;
extern undefined volatile _08025FB8;


undefined4 * sub_08012FCA(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x48), param_1 != (undefined4 *)0x0)) {
    sub_08012C94(param_1,*(undefined4 *)(param_2 + 0x28),0);
    *param_1 = &_08025FB8;
    param_1[0x11] = param_2;
    uVar1 = sub_080067AC(&DAT_03001120,*(undefined4 *)(*(int *)(param_2 + 0x2c) + 4));
    *(undefined2 *)((int)param_1 + 0xe) = uVar1;
    sub_08012EA4(param_1);
  }
  return param_1;
}

