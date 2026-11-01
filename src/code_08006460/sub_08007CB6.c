/* sub_08007CB6  (original: 0x08007CB6-0x08007CDE in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800763C();
extern int sub_080076EE();
extern undefined volatile gUnknown_081DA978;
extern undefined volatile gUnknown_086D0ED0;


void sub_08007CB6(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  sub_0800763C(param_1,*(undefined4 *)(&gUnknown_081DA978 + param_2 * 4),param_3,param_4,param_4);
  puVar1 = (undefined *)0x0;
  if (param_2 == 0) {
    puVar1 = &gUnknown_086D0ED0;
  }
  if (*(undefined **)(param_1 + 0x28) != puVar1) {
    sub_080076EE(param_1);
  }
  return;
}

