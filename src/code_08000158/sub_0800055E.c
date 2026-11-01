/* sub_0800055E  (original: 0x0800055E-0x080005A4 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 37% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08000CD8();
extern int sub_08000640();
extern int sub_0801ED3C();
extern int sub_0801F2CE();
extern int sub_080056B0();


undefined4 sub_0800055E(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\0') {
    sub_08000CD8(0);
    sub_0801F2CE();
  }
  else if (cVar1 == '\x01') {
    sub_08000640(0);
    sub_0801F2CE();
  }
  else if (cVar1 == '\x02') {
    sub_080056B0(0);
    sub_0801F2CE();
  }
  else if (cVar1 == '\x03') {
    sub_0801ED3C(0);
    sub_0801F2CE();
  }
  return 0;
}

