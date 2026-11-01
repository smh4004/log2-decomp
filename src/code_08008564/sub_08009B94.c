/* sub_08009B94  (original: 0x08009B94-0x08009BBC in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0801F2F4();
extern undefined volatile _0802545C;


void sub_08009B94(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802545C;
    puVar1[2] = iVar2;
    puVar1[1] = 0;
  }
  sub_0801F2F4();
  return;
}

