/* sub_08001A0C  (original: 0x08001A0C-0x08001A26 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EBB6();
extern int sub_0800409E();
extern undefined volatile gUnknown_080E2840;


undefined4 sub_08001A0C(int param_1,int param_2)

{
  int iVar1;
  
  sub_0800409E(param_2 * 0x164 + param_1);
  iVar1 = sub_0800EBB6();
  return *(undefined4 *)(&gUnknown_080E2840 + iVar1 * 4);
}

