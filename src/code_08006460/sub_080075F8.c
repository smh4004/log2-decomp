/* sub_080075F8  (original: 0x080075F8-0x0800763C in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern int sub_08006664();
extern int __call_via_r2();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _0802489C;
extern undefined volatile _08025FEC;


void sub_080075F8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &_0802489C;
  iVar1 = *(int *)param_1[6];
  __call_via_r2((int *)param_1[6],param_1,*(int *)(iVar1 + 0xc) + iVar1);
  iVar1 = *(int *)param_1[7];
  __call_via_r2((int *)param_1[7],param_1,*(int *)(iVar1 + 0xc) + iVar1);
  sub_0801F110(param_1[0xc]);
  *param_1 = &_08023A1C;
  if (*(short *)(param_1 + 3) != -1) {
    sub_08006664(&DAT_03001120);
  }
  *param_1 = &_08025FEC;
  return;
}

