/* sub_0801ED76  (original: 0x0801ED76-0x0801ED96 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801F2CE();
extern int sub_0800020C();
extern int sub_0801F08C();
extern undefined volatile _080242D0;


undefined4 sub_0801ED76(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0xbc);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800020C(puVar1);
    *puVar1 = &_080242D0;
  }
  sub_0801F2CE(puVar1);
  return 0;
}

