/* sub_0801563C  (original: 0x0801563C-0x0801565C in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08014D58();
extern int sub_0801FC9C();
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E16C4;


void sub_0801563C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E16C4,0x40,0,param_4);
  sub_08014D58(param_2,1);
  return;
}

