/* sub_0800FA1C  (original: 0x0800FA1C-0x0800FA6C in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0802141C();
extern int sub_080135E0();
extern undefined volatile gUnknown_086AF614;
extern undefined volatile _080241DC;


undefined4 * sub_0800FA1C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x44), param_1 != (undefined4 *)0x0)) {
    iVar1 = sub_0802141C(0x1000);
    sub_080135E0(param_1,param_2,&gUnknown_086AF614,4,iVar1 + 0x1000,0x400,param_3);
    *param_1 = &_080241DC;
  }
  return param_1;
}

