/* sub_0800F440  (original: 0x0800F440-0x0800F45A in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FB74();
extern int sub_0801F2F4();
extern undefined volatile gUnknown_086ADE24;


undefined4 sub_0800F440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800FB74(0,&gUnknown_086ADE24 + param_1 * 0x38,param_3,param_1 * 8,param_4);
  sub_0801F2F4();
  return 1;
}

