/* sub_0801633C  (original: 0x0801633C-0x080163D0 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08026044();
extern int sub_0801F08C();
extern undefined volatile DAT_030021d8;
extern undefined volatile _08025A18;
extern undefined volatile gUnknown_086F784C;
extern undefined volatile gUnknown_086F78CC;


undefined4 * sub_0801633C(undefined4 *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x38), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025A18;
    param_1[3] = &DAT_030021d8;
    param_1[4] = &gUnknown_086F78CC;
    sub_08026044(&DAT_030021d8,&gUnknown_086F784C,0x40);
    param_1[5] = 0x20;
    *(undefined1 *)(param_1 + 2) = 0x27;
    param_1[8] = *param_3;
    param_1[9] = param_3[1];
    iVar1 = param_2[1];
    param_1[6] = *param_2 - ((int)(param_1[8] << 0xd) >> 8);
    param_1[7] = iVar1 - ((int)(param_1[9] << 0xd) >> 8);
    param_1[7] = param_1[7] + param_4 * -0x400;
  }
  return param_1;
}

