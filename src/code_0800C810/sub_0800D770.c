/* sub_0800D770  (original: 0x0800D770-0x0800D7A0 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08004FF8();
extern undefined volatile _08023E44;


undefined4 * sub_0800D770(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_08023E44;
    param_1[5] = *(undefined4 *)(param_2 + 0x10);
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return param_1;
}

