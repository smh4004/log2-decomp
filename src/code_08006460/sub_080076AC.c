/* sub_080076AC  (original: 0x080076AC-0x080076BC in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03001f3c;


bool sub_080076AC(int param_1)

{
  return *(undefined4 **)(param_1 + 0x18) == &DAT_03001f3c;
}

