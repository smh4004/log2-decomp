/* sub_0800EB58  (original: 0x0800EB58-0x0800EB7C in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_080092E4();


uint sub_0800EB58(int param_1)

{
  uint uVar1;
  unsigned int __frame[23];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_5c (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_58 (*(uint *)((char *)__frame + 0x4))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x44))
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 >> 0x10 != 0) {
    uStack_5c = 0;
    uStack_18 = 0;
    sub_080092E4(&uStack_5c,*(undefined4 *)(param_1 + 0x24),0);
    uVar1 = uStack_58;
  }
  return uVar1;
}

