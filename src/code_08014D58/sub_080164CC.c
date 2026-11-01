/* sub_080164CC  (original: 0x080164CC-0x0801653E in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_0300109c;
extern int volatile DAT_030010a0;


undefined4 sub_080164CC(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28) - DAT_0300109c;
  uVar1 = *(int *)(param_1 + 0x2c) - DAT_030010a0;
  puVar2 = (uint *)*param_2;
  *param_2 = (int)(puVar2 + 2);
  *puVar2 = (uint)(iVar3 * 0x800000) >> 7 | *(uint *)(*(int *)(param_1 + 0x10) + 4) & 0xfe00ff00 |
            uVar1 & 0xff;
  uVar1 = (puVar2[1] & 0xfffff3ff) + 0x800;
  puVar2[1] = uVar1;
  puVar2[1] = *(ushort *)(*(int *)(param_1 + 0xc) + 2) & 0x3ff | uVar1 & 0xfffffc00;
  return 0;
}

