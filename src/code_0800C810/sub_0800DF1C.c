/* sub_0800DF1C  (original: 0x0800DF1C-0x0800DF4E in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800DCA8();
extern int sub_0801F08C();
extern undefined4 * volatile DAT_03000ff4;
extern undefined4 volatile DAT_030020c8;
extern undefined volatile _08025A40;


undefined4 * sub_0800DF1C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(4), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08025A40;
  sub_0800DCA8(&DAT_030020c8,param_2,param_3);
  DAT_03000ff4 = &DAT_030020c8;
  return param_1;
}

