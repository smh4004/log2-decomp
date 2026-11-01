/* sub_08009C8C  (original: 0x08009C8C-0x08009CC0 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08020A4C();
extern char volatile DAT_030026cd;
extern undefined * * volatile DAT_030026d4;
extern undefined * volatile gUnknown_081D4B2C;


void sub_08009C8C(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + -1;
  if ((DAT_030026cd != '\x01') || (DAT_030026d4 != &gUnknown_081D4B2C + param_2[iVar1] * 5)) {
    sub_08020A4C();
  }
  return;
}

