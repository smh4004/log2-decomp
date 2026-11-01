/* sub_0801F214  (original: 0x0801F214-0x0801F230 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile DAT_02000800;


int sub_0801F214(void)

{
  int iVar1;
  ushort *puVar2;
  
  puVar2 = &DAT_02000800;
  iVar1 = 0;
  while( true ) {
    iVar1 = iVar1 + 1;
    if (*puVar2 == 0) break;
    puVar2 = (ushort *)((uint)*puVar2 * 4 + 0x2000000);
  }
  return iVar1;
}

