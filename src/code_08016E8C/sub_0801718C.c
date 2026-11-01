/* sub_0801718C  (original: 0x0801718C-0x080171E4 in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080265C4();
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000ea6;
extern undefined volatile DAT_03000ea8;
extern undefined volatile DAT_03000eaa;


void sub_0801718C(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)DAT_03000e90 * 0x1c;
  *(char *)(param_2 + 0x160) = (char)((ushort)*(undefined2 *)(&DAT_03000ea6 + iVar1) >> 8) + '\x0f';
  *(char *)(param_2 + 0x161) = (char)((ushort)*(undefined2 *)(&DAT_03000ea8 + iVar1) >> 8) + '\n';
  *(char *)(param_2 + 0x162) = (char)((ushort)*(undefined2 *)(&DAT_03000eaa + iVar1) >> 8) + '\x0f';
  *(undefined1 *)(param_2 + 0x163) = 0x80;
  *(undefined1 *)(param_2 + 0x164) = 0x80;
  sub_080265C4(param_2 + 0x188,0x3f400000);
  sub_080265C4(param_2 + 0x18c,0x3fe00000);
  *(undefined4 *)(param_2 + 0x184) = 0;
  return;
}

