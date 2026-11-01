/* sub_0801A2F8  (original: 0x0801A2F8-0x0801A326 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011802();
extern int sub_0801F08C();
extern undefined volatile _080252E8;


undefined4 * sub_0801A2F8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x48), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08011802(param_1,*(undefined4 *)(param_2 + 4),param_3);
  *param_1 = &_080252E8;
  param_1[0x11] = param_2;
  return param_1;
}

