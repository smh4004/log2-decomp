/* sub_0800C88A  (original: 0x0800C88A-0x0800C8BE in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800891C();
extern undefined volatile _08024D68;
extern undefined volatile _08023990;


undefined4 * sub_0800C88A(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023990;
    param_1[1] = 0;
    param_1[2] = 8;
    param_1[3] = param_2;
    sub_0800891C(param_2);
    *param_1 = &_08024D68;
  }
  return param_1;
}

