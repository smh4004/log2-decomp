/* sub_0800D908  (original: 0x0800D908-0x0800D93C in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08004FF8();
extern undefined volatile _08023E38;
extern undefined volatile gUnknown_083ED654;


undefined4 * sub_0800D908(undefined4 *param_1,int param_2)

{
  byte bVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_08023E38;
    param_1[5] = param_2;
    bVar1 = *(byte *)(param_2 + 0x10);
    *(byte *)(param_1 + 4) = bVar1;
    *(undefined *)((int)param_1 + 0x11) = (&gUnknown_083ED654)[bVar1];
  }
  return param_1;
}

