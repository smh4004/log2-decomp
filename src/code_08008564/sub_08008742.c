/* sub_08008742  (original: 0x08008742-0x08008766 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08019B48();
extern int sub_0801F110();
extern undefined4 volatile DAT_03001fa8;
extern undefined volatile _08025604;


void sub_08008742(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_08025604;
  DAT_03001fa8 = 0;
  sub_08019B48(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

