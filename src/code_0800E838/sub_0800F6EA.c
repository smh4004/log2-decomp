/* sub_0800F6EA  (original: 0x0800F6EA-0x0800F72C in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FC9C();
extern undefined volatile gUnknown_080E1610;


undefined4 sub_0800F6EA(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)param_1[2];
  bVar1 = *pbVar2;
  if ((*(short *)(pbVar2 + (uint)bVar1 * 0x1c + 0xc) ==
       *(short *)(pbVar2 + (uint)bVar1 * 0x1c + 0xe)) &&
     (*(short *)(pbVar2 + (uint)bVar1 * 0x1c + 0x10) ==
      *(short *)(pbVar2 + (uint)bVar1 * 0x1c + 0x12))) {
    return 0;
  }
  *(undefined2 *)(pbVar2 + (uint)bVar1 * 0x1c + 0xc) =
       *(undefined2 *)(pbVar2 + (uint)bVar1 * 0x1c + 0xe);
  *(undefined2 *)(pbVar2 + (uint)bVar1 * 0x1c + 0x10) =
       *(undefined2 *)(pbVar2 + (uint)bVar1 * 0x1c + 0x12);
  sub_0801FC9C(*param_1 + 0x5c4,&gUnknown_080E1610,0x40,0);
  return 1;
}

