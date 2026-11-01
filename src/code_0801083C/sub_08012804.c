/* sub_08012804  (original: 0x08012804-0x08012832 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801278A();
extern undefined2 volatile REG_BG0HOFS;
extern undefined2 volatile REG_BG0VOFS;


void sub_08012804(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (*param_2 << 3) >> 10;
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)iVar2;
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = 0;
  sub_0801278A(param_1,iVar2);
  return;
}

