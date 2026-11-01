/* sub_080139BC  (original: 0x080139BC-0x08013A1E in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08013BF4();
extern int sub_08013BC0();
extern undefined volatile _08024CE8;
extern undefined volatile gUnknown_086DE8A4;


undefined4 * sub_080139BC(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x5c), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x100,param_4);
    *param_1 = &_08024CE8;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = (iVar1 + -8) * 0x100;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[0x10] = 0;
    param_1[6] = &gUnknown_086DE8A4;
    param_1[0x11] = 0;
    param_1[0x14] = 0x800;
    param_1[0x15] = 0x200;
    param_1[0x16] = 0;
    sub_08013BF4(param_1);
  }
  return param_1;
}

