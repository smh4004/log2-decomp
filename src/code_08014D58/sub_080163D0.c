/* sub_080163D0  (original: 0x080163D0-0x08016412 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern int sub_08006664();
extern undefined volatile DAT_03001120;
extern undefined volatile _08025A18;
extern undefined volatile _08025FEC;


void sub_080163D0(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = &_08025A18;
  pcVar2 = (char *)param_1[3];
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
    sub_08006664(&DAT_03001120,(int)*(short *)(pcVar2 + 2));
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

