/* sub_0800B33E  (original: 0x0800B33E-0x0800B396 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_080092E4();
extern int sub_08021CF0();
extern int sub_0800B1E2();
extern undefined volatile _080258F0;


undefined4 * sub_0800B33E(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned int __frame[32];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define puStack_80 (*(undefined1 * *)((char *)__frame + 0x0))
#define uStack_7c (*(undefined4 *)((char *)__frame + 0x4))
#define auStack_78 ((undefined1 *)((char *)__frame + 0x8))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x48))
#define puStack_24 (*(undefined4 * *)((char *)__frame + 0x5c))
#define iStack_20 (*(int *)((char *)__frame + 0x60))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x64))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x68))
  puStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x808), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080258F0;
    uStack_7c = 0;
    uStack_38 = 0;
    sub_080092E4(&uStack_7c,param_2 + 8,param_4);
    puStack_80 = auStack_78;
    sub_08021CF0(param_1 + 2,*(undefined4 *)(param_2 + 4),&puStack_80);
    puStack_80 = (undefined1 *)0x0;
    sub_0800B1E2(param_1,param_1 + 2,*(undefined1 *)(param_2 + 3),uStack_1c);
  }
  return param_1;
}

