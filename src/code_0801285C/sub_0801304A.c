/* sub_0801304A  (original: 0x0801304A-0x0801306E in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08012EA4();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;


void sub_0801304A(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0xe) = uVar1;
    sub_08012EA4(param_1);
  }
  return;
}

