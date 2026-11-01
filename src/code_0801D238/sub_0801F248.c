/* sub_0801F248  (original: 0x0801F248-0x0801F294 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801EFA4();
extern int sub_08021454();
extern int sub_08020AF4();
extern int sub_0801EEFC();
extern int sub_0801EF56();
extern int sub_08020D26();
extern int sub_0801F08C();
extern undefined2 volatile REG_IE;
extern undefined4 volatile DAT_03000e3c;
extern undefined volatile DAT_0300229c;
extern undefined volatile DAT_030026bc;
extern undefined volatile DAT_0300389c;


int sub_0801F248(int param_1)

{
  ushort uVar1;
  
  if ((param_1 != 0) || (param_1 = sub_0801F08C(1), param_1 != 0)) {
    sub_0801EF56(&DAT_0300229c);
    sub_0801EFA4();
    sub_08020D26(&DAT_03000e3c);
    DAT_03000e3c = 0x801f231;
    uVar1 = REG_IE;
    REG_IE = uVar1 | 1;
    sub_08020AF4(&DAT_030026bc);
    sub_08021454(&DAT_0300389c);
    sub_0801EEFC(&DAT_0300229c);
  }
  return param_1;
}

