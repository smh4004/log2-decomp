/* sub_08026620  (original: 0x08026620-0x0802664C in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 8/8 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08024A8C;


void sub_08026620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &_08024A8C;
    uVar1 = param_2[1];
    param_1[4] = *param_2;
    param_1[5] = uVar1;
  }
  return;
}

