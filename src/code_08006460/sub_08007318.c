/* sub_08007318  (original: 0x08007318-0x0800733E in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080067AC();
extern int sub_080072C4();
extern undefined volatile DAT_03001120;


undefined2 sub_08007318(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0xe) = uVar1;
    sub_080072C4(param_1);
  }
  return *(undefined2 *)(param_1 + 0xe);
}

