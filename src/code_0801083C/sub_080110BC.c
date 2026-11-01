/* sub_080110BC  (original: 0x080110BC-0x0801110C in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08010B9A();
extern int sub_08002DC8();
extern int sub_08002DB6();
extern int sub_08010B60();


void sub_080110BC(int param_1)

{
  int iVar1;
  
  iVar1 = sub_08010B9A();
  if (iVar1 == -1) {
    sub_08002DC8(param_1 + 0xb0);
  }
  else {
    sub_08002DB6(param_1 + 0xb0);
  }
  iVar1 = sub_08010B60(param_1);
  if (iVar1 == -1) {
    sub_08002DC8(param_1 + 0xc4);
  }
  else {
    sub_08002DB6(param_1 + 0xc4);
  }
  return;
}

