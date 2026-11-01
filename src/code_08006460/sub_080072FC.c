/* sub_080072FC  (original: 0x080072FC-0x08007318 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080067AC();
extern int sub_080072C4();
extern undefined volatile DAT_03001120;


void sub_080072FC(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = sub_080067AC(&DAT_03001120,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x2c) + 4))
  ;
  *(undefined2 *)(param_1 + 0xe) = uVar1;
  sub_080072C4(param_1);
  return;
}

