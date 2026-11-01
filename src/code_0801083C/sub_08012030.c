/* sub_08012030  (original: 0x08012030-0x0801204E in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined2 volatile REG_IE;
extern undefined volatile _08026014;
extern undefined volatile _08023E7C;


void sub_08012030(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  
  *param_1 = &_08023E7C;
  uVar1 = REG_IE;
  REG_IE = uVar1 & 0xfffd;
  *param_1 = &_08026014;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

