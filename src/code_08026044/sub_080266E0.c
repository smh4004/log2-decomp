/* sub_080266E0  (original: 0x080266E0-0x08026704 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08020EAA();
extern int sub_0801F110();
extern undefined volatile _08023720;


void sub_080266E0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08020EAA(param_1 + 2,0,param_3,param_4,param_4);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

