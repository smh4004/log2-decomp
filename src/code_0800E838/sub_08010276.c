/* sub_08010276  (original: 0x08010276-0x080102A2 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


undefined4 sub_08010276(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 8) {
    sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
  }
  else if (param_2 == 10) {
    __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
  }
  return 0;
}

