/* sub_080137C4  (original: 0x080137C4-0x08013828 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08013BF4();
extern int sub_08013BC0();
extern undefined volatile _08024D14;
extern undefined volatile gUnknown_086DD884;


undefined4 *
sub_080137C4(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x54), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,param_6,param_4);
    *param_1 = &_08024D14;
    uVar2 = param_5[1];
    param_1[0x10] = *param_5;
    param_1[0x11] = uVar2;
    iVar1 = *param_2;
    iVar3 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar3 << 8;
    param_1[0x13] = 0;
    param_1[0x14] = &gUnknown_086DD884 + param_3 * 0x24;
    param_1[6] = &gUnknown_086DD884 + param_3 * 0x24;
    *(undefined1 *)(param_1 + 2) = 0x28;
    sub_08013BF4(param_1);
  }
  return param_1;
}

