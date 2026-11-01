/* sub_0800ADF2  (original: 0x0800ADF2-0x0800AE32 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_03000e9c;
extern undefined volatile DAT_03000e9e;


void sub_0800ADF2(int *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar2 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  psVar1 = (short *)(&DAT_03000e9c + param_1[iVar3 + -1] * 0x1c);
  if (*(short *)(&DAT_03000e9e + param_1[iVar3 + -1] * 0x1c) < iVar2) {
    *psVar1 = *(short *)(&DAT_03000e9e + param_1[iVar3 + -1] * 0x1c);
    return;
  }
  if (iVar2 < 0) {
    *psVar1 = 0;
    return;
  }
  *psVar1 = (short)iVar2;
  return;
}

