/* sub_080215BE  (original: 0x080215BE-0x080215E2 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087FD104;


void sub_080215BE(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&gUnknown_087FD104 + ((uint)(param_2 << 0x18) >> 0x16));
  iVar2 = *(int *)(&gUnknown_087FD104 + ((uint)((param_2 + 0x40) * 0x1000000) >> 0x16));
  param_1[2] = iVar1 >> 6;
  *param_1 = iVar2 >> 6;
  param_1[1] = -(iVar1 >> 6);
  param_1[3] = iVar2 >> 6;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

