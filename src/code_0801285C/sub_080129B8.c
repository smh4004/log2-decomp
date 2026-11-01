/* sub_080129B8  (original: 0x080129B8-0x08012A04 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800763C();
extern int sub_080086D4();
extern undefined volatile _080258A0;
extern undefined volatile _08025F28;


undefined4 * sub_080129B8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x1a0), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_080086D4(param_1,param_2,param_3);
  *param_1 = &_08025F28;
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080258A0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
  }
  sub_0800763C(param_1,puVar1);
  return param_1;
}

