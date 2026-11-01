/* sub_08021454  (original: 0x08021454-0x080214C4 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_08021948();
extern int sub_080218E0();
extern int sub_0801F08C();
extern int sub_08020BBA();
extern int sub_08020BD0();
extern int sub_08021ACC();
extern int volatile DAT_03003898;
extern undefined4 volatile DAT_03000e54;
extern undefined2 volatile REG_IE;
extern undefined volatile DAT_030026bc;


void sub_08021454(uint *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = sub_080218E0(0x40);
  *param_1 = (uint)(iVar2 == 0);
  if ((iVar2 == 0) != 0) {
    sub_08021948(3,&DAT_03000e54);
    DAT_03000e54 = DAT_03000e54 | 1;
    iVar2 = sub_0801F08C(0x2000);
    DAT_03003898 = iVar2;
    sub_08020BBA(&DAT_030026bc);
    uVar1 = REG_IE;
    REG_IE = 0x2040;
    iVar3 = 0;
    do {
      sub_08021ACC(iVar3 >> 3 & 0xffff,iVar2 + iVar3);
      iVar3 = iVar3 + 8;
    } while (iVar3 < 0x2000);
    REG_IE = uVar1;
    sub_08020BD0(&DAT_030026bc);
  }
  return;
}

