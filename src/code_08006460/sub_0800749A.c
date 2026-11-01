/* sub_0800749A  (original: 0x0800749A-0x080074B0 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006664();
extern undefined volatile DAT_03001120;


void sub_0800749A(int param_1)

{
  sub_08006664(&DAT_03001120,*(undefined2 *)(param_1 + 0xe));
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  return;
}

