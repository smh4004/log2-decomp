/* sub_0801300A  (original: 0x0801300A-0x08013034 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006664();
extern int sub_0801F110();
extern undefined volatile DAT_03001120;
extern undefined volatile _08025FB8;
extern undefined volatile _08025FEC;


void sub_0801300A(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FB8;
  if (*(short *)((int)param_1 + 0xe) != -1) {
    sub_08006664(&DAT_03001120);
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

