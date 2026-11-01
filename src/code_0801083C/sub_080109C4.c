/* sub_080109C4  (original: 0x080109C4-0x080109EC in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08004FF8();
extern undefined volatile _08023BCC;


undefined4 * sub_080109C4(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_08023BCC;
  }
  return param_1;
}

