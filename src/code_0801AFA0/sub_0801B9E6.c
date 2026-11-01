/* sub_0801B9E6  (original: 0x0801B9E6-0x0801BA02 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08023D58;


undefined4 * sub_0801B9E6(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023D58;
    param_1[1] = param_2;
    param_1[2] = param_3;
  }
  return param_1;
}

