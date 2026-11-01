/* sub_08011304  (original: 0x08011304-0x08011328 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern int sub_0801F110();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023720;
extern undefined volatile _0802465C;


void sub_08011304(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_0802465C;
  sub_080068CA(&DAT_03001120,param_1[1],param_3,param_4,param_4);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

