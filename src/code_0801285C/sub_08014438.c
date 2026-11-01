/* sub_08014438  (original: 0x08014438-0x08014478 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006664();
extern int sub_0801F110();
extern int sub_0801FC22();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile DAT_03002c80;
extern undefined volatile _08024ACC;
extern undefined volatile gUnknown_080E16D0;
extern undefined volatile _08025FEC;


void sub_08014438(undefined4 *param_1,int param_2)

{
  *param_1 = &_08024ACC;
  if (*(char *)(param_1 + 4) != '\0') {
    sub_0801FC22(&DAT_03002c80,&gUnknown_080E16D0);
  }
  *param_1 = &_08023A1C;
  if (*(short *)(param_1 + 3) != -1) {
    sub_08006664(&DAT_03001120);
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

