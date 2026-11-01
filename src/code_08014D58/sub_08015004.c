/* sub_08015004  (original: 0x08015004-0x08015018 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


void sub_08015004(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 8) != 0) {
    sub_080068CA(&DAT_03001120,*(int *)(param_1 + 8),param_3,param_4,param_4);
  }
  return;
}

