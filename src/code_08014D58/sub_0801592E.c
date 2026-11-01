/* sub_0801592E  (original: 0x0801592E-0x0801594C in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


void sub_0801592E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 2;
  }
  return;
}

