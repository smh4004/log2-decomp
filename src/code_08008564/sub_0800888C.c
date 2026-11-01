/* sub_0800888C  (original: 0x0800888C-0x080088BA in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800F8B6();
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000e9c;
extern undefined volatile DAT_03000e9e;


void sub_0800888C(undefined4 param_1,int param_2)

{
  short *psVar1;
  
  sub_0800F8B6();
  psVar1 = (short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c);
  if ((int)*(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c) < *psVar1 + param_2) {
    *psVar1 = *(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c);
    return;
  }
  *psVar1 = (short)(*psVar1 + param_2);
  return;
}

