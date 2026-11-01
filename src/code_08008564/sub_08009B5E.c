/* sub_08009B5E  (original: 0x08009B5E-0x08009B94 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800DA68();
extern int sub_0801F2F4();
extern undefined volatile _08024FC4;


void sub_08009B5E(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0801F08C(0x40c);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800DA68(puVar1);
    *puVar1 = &_08024FC4;
    puVar1[0x101] = 0;
    puVar1[0x102] = iVar2;
  }
  sub_0801F2F4(puVar1);
  return;
}

