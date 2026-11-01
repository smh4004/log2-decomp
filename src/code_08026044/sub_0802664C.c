/* sub_0802664C  (original: 0x0802664C-0x08026688 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 10/10 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800DA68();
extern undefined volatile _08024F94;


undefined4 * sub_0802664C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x40c), param_1 != (undefined4 *)0x0)) {
    sub_0800DA68(param_1);
    *param_1 = &_08024F94;
    param_1[0x101] = 0;
    param_1[0x102] = param_2;
  }
  return param_1;
}

