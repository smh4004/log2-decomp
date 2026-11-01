/* sub_08019050  (original: 0x08019050-0x08019078 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800775A();


undefined4 sub_08019050(int param_1)

{
  sub_0800775A();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x150) + (int)**(char **)(param_1 + 0x3c);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x154) + (int)(*(char **)(param_1 + 0x3c))[1];
  return 1;
}

