/* sub_08015EE0  (original: 0x08015EE0-0x08015F04 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801594C();


undefined4 sub_08015EE0(int param_1,int param_2)

{
  if (param_2 == 9) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 3;
  }
  else if (param_2 == 10) {
    sub_0801594C();
  }
  return 0;
}

