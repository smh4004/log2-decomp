/* sub_0802635C  (original: 0x0802635C-0x08026394 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _08025024;


void sub_0802635C(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    *param_1 = &_08025024;
    if (0 < (int)param_1[1]) {
      do {
        iVar1 = *(int *)param_1[iVar2 + 2];
        __call_via_r1((int *)param_1[iVar2 + 2],*(int *)(iVar1 + 0xc) + iVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[1]);
    }
    sub_0801F110(param_1);
  }
  return;
}

