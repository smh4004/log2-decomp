/* sub_0801D84C  (original: 0x0801D84C-0x0801D88A in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080143A8();
extern int sub_0801F08C();
extern undefined volatile _08025830;


undefined4 *
sub_0801D84C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x50), param_1 != (undefined4 *)0x0)) {
    sub_080143A8(param_1,param_2,param_3,param_4,0x400,0);
    *param_1 = &_08025830;
  }
  return param_1;
}

