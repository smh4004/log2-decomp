/* sub_080269A0  (original: 0x080269A0-0x080269B4 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08026014;


void sub_080269A0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08026014;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

