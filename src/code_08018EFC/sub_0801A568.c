/* sub_0801A568  (original: 0x0801A568-0x0801A59A in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F636();
extern int sub_080236B4();
extern int sub_08021F18();
extern undefined volatile gUnknown_080E2840;


void sub_0801A568(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08021F18(*(undefined4 *)(param_1 + 0x3c),0,*(undefined4 *)(param_1 + 0x4c),param_4,param_4);
  sub_0801F636(param_1 + 0x18,
               *(undefined4 *)
                (&gUnknown_080E2840 + ((uint)(*(int *)(param_1 + 0x14) << 0x10) >> 0xe)));
  sub_080236B4(param_1 + 0x18,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000);
  return;
}

