/* sub_08016EFA  (original: 0x08016EFA-0x08016F6A in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030021f4;


undefined4 sub_08016EFA(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  *puVar1 = (*(int **)(param_1 + 0x14))[1] - *(int *)(DAT_030021f4 + 0x809c) & 0xffU |
            (uint)((**(int **)(param_1 + 0x14) - *(int *)(DAT_030021f4 + 0x8098)) * 0x800000) >> 7 |
            *(uint *)(*(int *)(param_1 + 0x14) + 0x10) & 0xfe00ff00;
  puVar1[1] = (*(ushort *)(param_1 + 0xe) & 0x3ff | puVar1[1] & 0xfffff000) + 0x800;
  return 0;
}

