/* sub_08027034  (original: 0x08027034-0x0802706C in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 11/11 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern int sub_08020EAA();
extern undefined volatile _08023720;


void sub_08027034(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08020EAA(param_1 + 0x1f,0,param_3,param_4,param_4);
  sub_08020EAA(param_1 + 0x11,0);
  sub_08020EAA(param_1 + 3,0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

