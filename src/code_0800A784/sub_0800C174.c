/* sub_0800C174  (original: 0x0800C174-0x0800C1AC in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08004FF8();
extern undefined volatile _080240E4;
extern undefined volatile gUnknown_083ED1B4;


undefined4 * sub_0800C174(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_080240E4;
    param_1[5] = param_2;
    uVar1 = *(byte *)(param_2 + 0x10) & 0xf;
    *(char *)(param_1 + 4) = (char)uVar1;
    *(undefined *)((int)param_1 + 0x11) = (&gUnknown_083ED1B4)[uVar1];
  }
  return param_1;
}

