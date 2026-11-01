/* sub_0800C84C  (original: 0x0800C84C-0x0800C882 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800891C();
extern undefined volatile _08024F64;
extern undefined volatile _08023ADC;


undefined4 * sub_0800C84C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023ADC;
    param_1[1] = 0x100;
    param_1[2] = 8;
    param_1[3] = param_2;
    sub_0800891C(param_2);
    *param_1 = &_08024F64;
  }
  return param_1;
}

