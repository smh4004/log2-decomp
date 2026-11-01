/* sub_08027358  (original: 0x08027358-0x08027378 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800892E();
extern int sub_0801F110();
extern undefined volatile _08023720;


void sub_08027358(undefined4 *param_1,int param_2)

{
  sub_0800892E(param_1[3]);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

