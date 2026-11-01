/* sub_0800C810  (original: 0x0800C810-0x0800C834 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800891C();


undefined4 * sub_0800C810(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = param_2;
    sub_0800891C(param_2);
  }
  return param_1;
}

