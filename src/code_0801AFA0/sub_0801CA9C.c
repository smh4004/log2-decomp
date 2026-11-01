/* sub_0801CA9C  (original: 0x0801CA9C-0x0801CABC in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FC9C();
extern undefined volatile gUnknown_080E15B0;


undefined4 sub_0801CA9C(int param_1,int *param_2)

{
  sub_0801FC9C(*param_2 + 0x5c4,&gUnknown_080E15B0 + *(int *)(param_1 + 0xc) * 0xc,0x40,0);
  return 0;
}

