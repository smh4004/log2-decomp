/* sub_08016B96  (original: 0x08016B96-0x08016BD4 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08016AB4();
extern int sub_0801F08C();
extern undefined volatile _08025ADC;


undefined4 * sub_08016B96(undefined4 *param_1,int *param_2)

{
  int iVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_14 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_10 (*(undefined4 *)((char *)__frame + 0x4))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x28), param_1 != (undefined4 *)0x0)) {
    uStack_14 = 0;
    uStack_10 = 0;
    sub_08016AB4(param_1,&uStack_14);
    *param_1 = &_08025ADC;
    iVar1 = param_2[1];
    param_1[8] = *param_2 + -4;
    param_1[9] = iVar1 + -4;
  }
  return param_1;
}

