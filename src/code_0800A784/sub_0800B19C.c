/* sub_0800B19C  (original: 0x0800B19C-0x0800B1E2 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_080092E4();
extern undefined volatile _08023FBC;


undefined4 * sub_0800B19C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned int __frame[27];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_6c (*(int *)((char *)__frame + 0x0))
#define uStack_68 (*(undefined2 *)((char *)__frame + 0x4))
#define uStack_28 (*(undefined4 *)((char *)__frame + 0x44))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023FBC;
    param_1[1] = param_3;
    iStack_6c = 0;
    uStack_28 = 0;
    sub_080092E4(&iStack_6c,param_2 + 3,param_4);
    if (iStack_6c == 1) {
      *(undefined2 *)param_1[1] = uStack_68;
    }
  }
  return param_1;
}

