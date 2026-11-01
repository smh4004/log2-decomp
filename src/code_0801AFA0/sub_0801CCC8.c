/* sub_0801CCC8  (original: 0x0801CCC8-0x0801CD32 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013BF4();
extern int sub_08013BC0();
extern int sub_0801F08C();
extern undefined volatile gUnknown_086FFBFC;
extern undefined volatile _08024204;


undefined4 * sub_0801CCC8(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x54), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x100,param_4);
    *param_1 = &_08024204;
    uVar2 = param_3[1];
    param_1[0x10] = *param_3;
    param_1[0x11] = uVar2;
    iVar1 = *param_2;
    iVar3 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar3 << 8;
    param_1[0x13] = 0x800;
    param_1[0x14] = 0x200;
    param_1[6] = &gUnknown_086FFBFC;
    *(undefined1 *)(param_1 + 2) = 0x27;
    param_1[0x11] = param_1[0x11] + -0x200;
    sub_08013BF4(param_1);
  }
  return param_1;
}

