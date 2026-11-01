/* sub_0800AE32  (original: 0x0800AE32-0x0800AE76 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_03000ea0;
extern undefined volatile DAT_03000ea2;


void sub_0800AE32(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1] * 0x1c;
  if (*(short *)(&DAT_03000ea2 + iVar2) < iVar1) {
    *(undefined2 *)(&DAT_03000ea0 + iVar2) = *(undefined2 *)(&DAT_03000ea2 + iVar2);
    return;
  }
  if (iVar1 < 0) {
    *(undefined2 *)(&DAT_03000ea0 + iVar2) = 0;
    return;
  }
  *(short *)(&DAT_03000ea0 + iVar2) = (short)iVar1;
  return;
}

