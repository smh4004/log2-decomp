/* sub_08009608  (original: 0x08009608-0x08009628 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08004214();
extern undefined volatile DAT_03000e9c;


void sub_08009608(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_08004214(&DAT_03000e9c + param_1[iVar2] * 0x1c);
  param_1[iVar2] = iVar1;
  return;
}

