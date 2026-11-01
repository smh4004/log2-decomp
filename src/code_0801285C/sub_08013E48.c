/* sub_08013E48  (original: 0x08013E48-0x08013EA0 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08013BF4();
extern int sub_08013BC0();
extern undefined volatile _080241B0;
extern undefined volatile gUnknown_086DEB6C;


undefined4 * sub_08013E48(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x5c), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x400,param_4);
    *param_1 = &_080241B0;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[6] = &gUnknown_086DEB6C;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 1;
    param_1[0x11] = 0x20;
    sub_08013BF4(param_1);
  }
  return param_1;
}

