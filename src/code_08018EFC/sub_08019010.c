/* sub_08019010  (original: 0x08019010-0x08019050 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080075A8();
extern int sub_08009324();
extern int sub_0801F08C();
extern int sub_08018FD4();
extern undefined4 volatile DAT_03001f34;
extern undefined volatile _08025770;


undefined4 * sub_08019010(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x15c), param_1 != (undefined4 *)0x0)) {
    uVar1 = sub_08009324(*(undefined4 *)(param_2 + 8));
    sub_080075A8(param_1,uVar1,&DAT_03001f34);
    *param_1 = &_08025770;
    param_1[0x56] = 0;
    sub_08018FD4(param_1);
  }
  return param_1;
}

