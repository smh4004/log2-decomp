/* sub_08000E22  (original: 0x08000E22-0x08000EB8 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 68% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern int sub_08020EAA();
extern int sub_08001A26();
extern int sub_0801F110();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023720;
extern undefined volatile _08023B0C;


void sub_08000E22(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *param_1 = &_08023B0C;
  do {
    iVar2 = 0;
    iVar1 = sub_08001A26(param_1 + 5,iVar3);
    if (0 < iVar1) {
      do {
        sub_080068CA(&DAT_03001120,param_1[iVar3 * 6 + iVar2 + 0x166]);
        iVar2 = iVar2 + 1;
        iVar1 = sub_08001A26(param_1 + 5,iVar3);
      } while (iVar2 < iVar1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  sub_08020EAA(param_1 + 0x156,0);
  sub_08020EAA(param_1 + 0x148,0);
  sub_08020EAA(param_1 + 0x13a,0);
  sub_08020EAA(param_1 + 300,0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

