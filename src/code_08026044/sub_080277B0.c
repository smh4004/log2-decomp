/* sub_080277B0  (original: 0x080277B0-0x080277D4 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern int sub_08020EAA();
extern undefined volatile _08023720;


void sub_080277B0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08020EAA(param_1 + 4,0,param_3,param_4,param_4);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

