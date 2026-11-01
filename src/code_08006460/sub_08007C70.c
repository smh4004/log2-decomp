/* sub_08007C70  (original: 0x08007C70-0x08007CB6 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_080076EE();
extern int sub_080075A8();
extern undefined4 volatile DAT_03001f34;
extern undefined volatile _08025C30;
extern undefined volatile gUnknown_086D0ED0;


undefined4 *
sub_08007C70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x158), param_1 != (undefined4 *)0x0)) {
    sub_080075A8(param_1,param_2,&DAT_03001f34);
    *param_1 = &_08025C30;
    param_1[0x54] = param_3;
    param_1[0x55] = param_4;
    if ((undefined *)param_1[10] != &gUnknown_086D0ED0) {
      sub_080076EE(param_1);
    }
  }
  return param_1;
}

