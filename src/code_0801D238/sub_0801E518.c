/* sub_0801E518  (original: 0x0801E518-0x0801E53E in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801E2D2();


undefined4 sub_0801E518(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == 10) {
    sub_0801E2D2(param_1,0,param_3,param_4,param_4);
  }
  else if ((param_2 == 0xf) && (*(int *)(param_1 + 0x2c) == param_3)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return 0;
}

