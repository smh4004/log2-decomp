/* sub_08015062  (original: 0x08015062-0x08015076 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


void sub_08015062(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_080068CA(&DAT_03001120,*(int *)(param_1 + 4),param_3,param_4,param_4);
  }
  return;
}

