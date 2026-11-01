/* sub_0800C270  (original: 0x0800C270-0x0800C2A6 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08004FF8();
extern undefined volatile _08023BC0;


undefined4 * sub_0800C270(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x24), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_08023BC0;
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return param_1;
}

