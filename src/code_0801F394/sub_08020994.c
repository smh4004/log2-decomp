/* sub_08020994  (original: 0x08020994-0x080209B8 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FA72();


void sub_08020994(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0801FA72(iVar1 * 0x60 + param_1 + 0x18,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xf);
  return;
}

