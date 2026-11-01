/* sub_08001F54  (original: 0x08001F54-0x08001F78 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08020EAA();
extern int sub_0801F110();
extern undefined volatile _08023720;
extern undefined volatile _08023790;


void sub_08001F54(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_08023790;
  sub_08020EAA(param_1 + 7,0,param_3,param_4,param_4);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

