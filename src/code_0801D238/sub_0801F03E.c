/* sub_0801F03E  (original: 0x0801F03E-0x0801F08C in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern ushort * volatile DAT_030022b4;
extern undefined volatile DAT_02000004;
extern undefined volatile DAT_02000008;


void sub_0801F03E(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = param_2[2];
  param_1[1] = param_1[1] + param_2[1] + 2;
  *param_1 = *param_2;
  if (*param_2 != 0) {
    *(ushort *)(&DAT_02000004 + (uint)*param_2 * 4) = param_2[2];
  }
  param_1[5] = param_2[5];
  puVar2 = param_1;
  if (param_2[5] != 0) {
    *(ushort *)(&DAT_02000008 + (uint)param_2[5] * 4) = uVar1;
    puVar2 = DAT_030022b4;
  }
  DAT_030022b4 = puVar2;
  param_1[4] = param_2[4];
  if (param_2[4] != 0) {
    *(ushort *)((uint)param_2[4] * 4 + 0x200000a) = uVar1;
  }
  return;
}

