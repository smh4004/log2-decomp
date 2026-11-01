/* sub_0800F7CC  (original: 0x0800F7CC-0x0800F80C in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080078E4();
extern undefined volatile _08025564;


undefined4 * sub_0800F7CC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  sub_080078E4();
  *param_1 = &_08025564;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5a] = 1;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_4 + 0xc);
  *(undefined1 *)((int)param_1 + 0x161) = *(undefined1 *)(param_4 + 0xd);
  *(undefined1 *)((int)param_1 + 0x162) = *(undefined1 *)(param_4 + 0xe);
  *(undefined1 *)((int)param_1 + 0x163) = *(undefined1 *)(param_4 + 0xf);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_4 + 0x10);
  return param_1;
}

