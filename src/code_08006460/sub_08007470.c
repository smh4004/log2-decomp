/* sub_08007470  (original: 0x08007470-0x0800749A in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern int sub_08006664();
extern undefined volatile DAT_03001120;
extern undefined volatile _08025FEC;
extern undefined volatile _08025974;


void sub_08007470(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025974;
  if (*(short *)((int)param_1 + 0xe) != -1) {
    sub_08006664(&DAT_03001120);
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

