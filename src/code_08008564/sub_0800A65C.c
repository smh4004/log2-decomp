/* sub_0800A65C  (original: 0x0800A65C-0x0800A680 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0801F2F4();
extern undefined volatile _0802585C;


void sub_0800A65C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802585C;
    puVar1[1] = iVar2;
  }
  sub_0801F2F4(puVar1);
  return;
}

