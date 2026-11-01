/* sub_0800DED0  (original: 0x0800DED0-0x0800DF02 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800DD80();
extern undefined4 * volatile DAT_03000ff4;
extern undefined4 volatile DAT_030020dc;
extern undefined volatile _08024950;


undefined4 * sub_0800DED0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(4), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08024950;
  sub_0800DD80(&DAT_030020dc,param_2,param_3);
  DAT_03000ff4 = &DAT_030020dc;
  return param_1;
}

