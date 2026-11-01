/* sub_0800FC50  (original: 0x0800FC50-0x0800FC84 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800FCCC();
extern undefined volatile _08024C68;


undefined4 * sub_0800FC50(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x30), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0800FCCC(param_1,param_2,param_3);
  *param_1 = &_08024C68;
  *(undefined1 *)(param_1 + 2) = 0x18;
  return param_1;
}

