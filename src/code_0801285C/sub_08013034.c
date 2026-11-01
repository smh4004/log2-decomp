/* sub_08013034  (original: 0x08013034-0x0801304A in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006664();
extern undefined volatile DAT_03001120;


void sub_08013034(int param_1)

{
  sub_08006664(&DAT_03001120,*(undefined2 *)(param_1 + 0xe));
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  return;
}

