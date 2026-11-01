/* sub_0801079C  (original: 0x0801079C-0x080107D4 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800DA68();
extern undefined volatile _08025DF0;


void sub_0801079C(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xdc;
  puVar1 = (undefined4 *)sub_0801F08C(0x40c);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800DA68(puVar1);
    puVar1[0x102] = 0xb4;
    puVar1[0x101] = 0;
    *puVar1 = &_08025DF0;
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  return;
}

