/* sub_080273BC  (original: 0x080273BC-0x080273D0 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08023858;


void sub_080273BC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

