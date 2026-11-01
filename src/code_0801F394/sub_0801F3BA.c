/* sub_0801F3BA  (original: 0x0801F3BA-0x0801F3E0 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080236D8();
extern int sub_080236E4();


void sub_0801F3BA(int *param_1,int param_2,int param_3)

{
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      sub_080236D8(param_2,(int)(param_1 + 2),param_3,(int)param_1);
    }
    return;
  }
  sub_080236E4(param_2,(int)(param_1 + 2),param_3,param_1[1]);
  return;
}

