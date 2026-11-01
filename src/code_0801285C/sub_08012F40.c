/* sub_08012F40  (original: 0x08012F40-0x08012F98 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08012EA4();
extern int sub_080067AC();
extern int sub_08012C94();
extern undefined volatile DAT_03001120;
extern undefined volatile _08025E5C;


undefined4 * sub_08012F40(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x48), param_1 != (undefined4 *)0x0)) {
    sub_08012C94(param_1,param_2,param_4);
    *param_1 = &_08025E5C;
    param_1[0x11] = param_3;
    if (*(short *)(param_3 + 0xe) == -1) {
      uVar1 = sub_080067AC(&DAT_03001120,
                           *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x44) + 0x2c) + 4));
      *(undefined2 *)(param_3 + 0xe) = uVar1;
      sub_08012EA4(param_3);
    }
    *(short *)((int)param_1 + 0xe) = *(short *)(param_3 + 0xe) + *(short *)(param_1[5] + 0x14);
  }
  return param_1;
}

