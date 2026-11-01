/* sub_080068A6  (original: 0x080068A6-0x080068B8 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080067AC();
extern undefined volatile DAT_03001120;


void sub_080068A6(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = sub_080067AC(&DAT_03001120,*(undefined2 *)(param_1 + 0xe));
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  return;
}

