/* Ghidra reference decompilation of code_0802805C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0802805C @ 0x0802805C */

undefined4 sub_0802805C(int *param_1,int *param_2)

{
  if ((((*param_1 < param_2[2]) && (*param_2 < param_1[2])) && (param_1[1] < param_2[3])) &&
     (param_2[1] < param_1[3])) {
    return 1;
  }
  return 0;
}


/* sub_08028084 @ 0x08028084 */

uint sub_08028084(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  uint uVar5;
  undefined4 in_lr;
  bool bVar6;
  
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08022A9C();
  uVar2 = *puVar1;
  if ((in_r12 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar5 = in_r12 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (in_r12 << 1) >> 0x1b;
  bVar6 = (in_r12 & 0xf) != 8;
  if (bVar6) {
    uVar3 = in_r12 & 0x70;
    uVar5 = uVar5 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
  }
  if (!bVar6 && (uVar3 & ~uVar5) == 0) {
    uVar5 = uVar5 | 0xc00000;
  }
  if ((uVar5 & 0x20000000) == 0) {
    if ((uVar5 & 0x10000000) == 0) {
      if ((uVar5 & 0x40000000) != 0) {
        uVar2 = uVar2 & 0x1000;
        goto joined_r0x08028138;
      }
      if ((uVar5 & 0x8000000) == 0) {
        if ((uVar2 & 0x100) == 0) {
          uVar2 = param_2;
          if ((uVar5 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((uVar5 & 0x10) == 0) {
            uVar3 = uVar2 | 0x7fc00000;
          }
          else {
            uVar3 = 0;
            param_2 = uVar2;
          }
          uVar4 = uVar5 & 0xf;
          if (uVar4 != 9) {
            if (uVar4 != 8) {
              return uVar3;
            }
            if (uVar4 == 8 && (uVar5 & 0x40) == 0) {
              if ((uVar5 & 0x10) == 0) {
                uVar2 = 0x7fc00000;
              }
              else {
                uVar2 = 0;
              }
              return uVar2;
            }
            if ((uVar5 & 0x10000) != 0) {
              return 0;
            }
            if ((uVar5 & 0x20) != 0) {
              uVar5 = 0xffffffff;
              if (uVar2 != 0) {
                uVar5 = 0;
              }
              return uVar5;
            }
            if ((uVar5 & 0x10) == 0) {
              uVar2 = 0x7fffffff;
              param_2 = uVar3;
            }
            else {
              uVar2 = 0xffffffff;
            }
            if ((param_2 & 0x80000000) != 0) {
              uVar2 = ~uVar2;
            }
            return uVar2;
          }
          uVar2 = 8;
          goto sub_080286A4;
        }
      }
      else if ((uVar2 & 0x200) == 0) {
        if ((uVar5 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08028180;
      }
    }
    else if ((uVar2 & 0x400) == 0) {
      if ((uVar5 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08028180:
      if ((uVar5 & 0x10) == 0) {
        uVar2 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 & 0x800;
joined_r0x08028138:
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar2 = sub_08023714(param_1,param_2,param_3,param_4,uVar5,in_lr,uVar5,in_lr);
  if ((uVar5 & 0xf) != 9) {
    return uVar2;
  }
sub_080286A4:
  if ((uVar5 & 0x100000) == 0) {
    uVar5 = uVar5 & uVar2 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((uVar5 & 0xf0000) == 0) {
    uVar5 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar5 = uVar5 | 0x30000000;
    }
    puVar1 = (uint *)sub_08022A9C();
    *puVar1 = *puVar1 & 0xfffffff | uVar5;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_08028088 @ 0x08028088 */

uint sub_08028088(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  uint uVar5;
  undefined4 in_lr;
  bool bVar6;
  
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08022A9C();
  uVar2 = *puVar1;
  if ((in_r12 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar5 = in_r12 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (in_r12 << 1) >> 0x1b;
  bVar6 = (in_r12 & 0xf) != 8;
  if (bVar6) {
    uVar3 = in_r12 & 0x70;
    uVar5 = uVar5 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
  }
  if (!bVar6 && (uVar3 & ~uVar5) == 0) {
    uVar5 = uVar5 | 0xc00000;
  }
  if ((uVar5 & 0x20000000) == 0) {
    if ((uVar5 & 0x10000000) == 0) {
      if ((uVar5 & 0x40000000) != 0) {
        uVar2 = uVar2 & 0x1000;
        goto joined_r0x08028138;
      }
      if ((uVar5 & 0x8000000) == 0) {
        if ((uVar2 & 0x100) == 0) {
          uVar2 = param_2;
          if ((uVar5 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((uVar5 & 0x10) == 0) {
            uVar3 = uVar2 | 0x7fc00000;
          }
          else {
            uVar3 = 0;
            param_2 = uVar2;
          }
          uVar4 = uVar5 & 0xf;
          if (uVar4 != 9) {
            if (uVar4 != 8) {
              return uVar3;
            }
            if (uVar4 == 8 && (uVar5 & 0x40) == 0) {
              if ((uVar5 & 0x10) == 0) {
                uVar2 = 0x7fc00000;
              }
              else {
                uVar2 = 0;
              }
              return uVar2;
            }
            if ((uVar5 & 0x10000) != 0) {
              return 0;
            }
            if ((uVar5 & 0x20) != 0) {
              uVar5 = 0xffffffff;
              if (uVar2 != 0) {
                uVar5 = 0;
              }
              return uVar5;
            }
            if ((uVar5 & 0x10) == 0) {
              uVar2 = 0x7fffffff;
              param_2 = uVar3;
            }
            else {
              uVar2 = 0xffffffff;
            }
            if ((param_2 & 0x80000000) != 0) {
              uVar2 = ~uVar2;
            }
            return uVar2;
          }
          uVar2 = 8;
          goto sub_080286A4;
        }
      }
      else if ((uVar2 & 0x200) == 0) {
        if ((uVar5 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08028180;
      }
    }
    else if ((uVar2 & 0x400) == 0) {
      if ((uVar5 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08028180:
      if ((uVar5 & 0x10) == 0) {
        uVar2 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 & 0x800;
joined_r0x08028138:
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar2 = sub_08023714(param_1,param_2,param_3,param_4,uVar5,in_lr,uVar5,in_lr);
  if ((uVar5 & 0xf) != 9) {
    return uVar2;
  }
sub_080286A4:
  if ((uVar5 & 0x100000) == 0) {
    uVar5 = uVar5 & uVar2 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((uVar5 & 0xf0000) == 0) {
    uVar5 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar5 = uVar5 | 0x30000000;
    }
    puVar1 = (uint *)sub_08022A9C();
    *puVar1 = *puVar1 & 0xfffffff | uVar5;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_080281EC @ 0x080281EC */

uint sub_080281EC(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  undefined4 in_lr;
  bool bVar7;
  
  uVar2 = param_1 * 2 + 0x800000;
  uVar4 = param_2 * 2 + 0x800000;
  uVar5 = uVar2;
  if (uVar2 < 0xff800001) {
    uVar5 = uVar4;
  }
  if (uVar5 < 0xff800001) {
    if (0x7fffff < uVar2) {
      param_1 = param_2;
    }
sub_080285E0:
    uVar5 = in_r12 & 0xf;
    if (uVar5 != 9) {
      if (uVar5 != 8) {
        return param_1;
      }
      if (uVar5 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar5 = 0x7fc00000;
        }
        else {
          uVar5 = 0;
        }
        return uVar5;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar5 = 0xffffffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar5 = 0;
        }
        return uVar5;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar5 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar5 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar5 = ~uVar5;
      }
      return uVar5;
    }
    uVar5 = 8;
    goto sub_080286A4;
  }
  if ((in_r12 & 0x10) == 0) {
    uVar2 = param_2;
  }
  puVar1 = (uint *)sub_08022A9C();
  uVar5 = *puVar1;
  if ((in_r12 & ~(uVar5 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar6 = in_r12 | uVar5 & 0x1c00000;
  *puVar1 = uVar5 | (in_r12 << 1) >> 0x1b;
  bVar7 = (in_r12 & 0xf) != 8;
  if (bVar7) {
    uVar3 = in_r12 & 0x70;
    in_r12 = uVar6 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
    in_r12 = uVar6;
  }
  if (!bVar7 && (uVar3 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar5 = uVar5 & 0x1000;
        goto joined_r0x08028138;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar5 & 0x100) == 0) {
          uVar2 = param_2;
          if ((in_r12 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = uVar2 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar2;
          }
          goto sub_080285E0;
        }
      }
      else if ((uVar5 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ uVar2;
        }
        else {
          param_2 = param_2 ^ uVar4;
        }
        goto _08028180;
      }
    }
    else if ((uVar5 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08028180:
      if ((in_r12 & 0x10) == 0) {
        uVar5 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  else {
    uVar5 = uVar5 & 0x800;
joined_r0x08028138:
    if (uVar5 == 0) {
      return param_1;
    }
  }
  uVar5 = sub_08023714(param_1,param_2,uVar2,uVar4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar5;
  }
sub_080286A4:
  if ((in_r12 & 0x100000) == 0) {
    uVar5 = in_r12 & uVar5 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar2 = uVar5 << 0x1d;
    if ((bool)((byte)(uVar5 >> 3) & 1)) {
      uVar2 = uVar2 | 0x30000000;
    }
    puVar1 = (uint *)sub_08022A9C();
    *puVar1 = *puVar1 & 0xfffffff | uVar2;
    return uVar5;
  }
  if ((uVar5 & 8) != 0) {
    return uVar5;
  }
  return 2 - uVar5;
}


/* sub_080281F0 @ 0x080281F0 */

uint sub_080281F0(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  undefined4 in_lr;
  bool bVar7;
  
  uVar2 = param_1 * 2 + 0x800000;
  uVar4 = param_2 * 2 + 0x800000;
  uVar5 = uVar2;
  if (uVar2 < 0xff800001) {
    uVar5 = uVar4;
  }
  if (uVar5 < 0xff800001) {
    if (0x7fffff < uVar2) {
      param_1 = param_2;
    }
sub_080285E0:
    uVar5 = in_r12 & 0xf;
    if (uVar5 != 9) {
      if (uVar5 != 8) {
        return param_1;
      }
      if (uVar5 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar5 = 0x7fc00000;
        }
        else {
          uVar5 = 0;
        }
        return uVar5;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar5 = 0xffffffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar5 = 0;
        }
        return uVar5;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar5 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar5 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar5 = ~uVar5;
      }
      return uVar5;
    }
    uVar5 = 8;
    goto sub_080286A4;
  }
  if ((in_r12 & 0x10) == 0) {
    uVar2 = param_2;
  }
  puVar1 = (uint *)sub_08022A9C();
  uVar5 = *puVar1;
  if ((in_r12 & ~(uVar5 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar6 = in_r12 | uVar5 & 0x1c00000;
  *puVar1 = uVar5 | (in_r12 << 1) >> 0x1b;
  bVar7 = (in_r12 & 0xf) != 8;
  if (bVar7) {
    uVar3 = in_r12 & 0x70;
    in_r12 = uVar6 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
    in_r12 = uVar6;
  }
  if (!bVar7 && (uVar3 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar5 = uVar5 & 0x1000;
        goto joined_r0x08028138;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar5 & 0x100) == 0) {
          uVar2 = param_2;
          if ((in_r12 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = uVar2 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar2;
          }
          goto sub_080285E0;
        }
      }
      else if ((uVar5 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ uVar2;
        }
        else {
          param_2 = param_2 ^ uVar4;
        }
        goto _08028180;
      }
    }
    else if ((uVar5 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08028180:
      if ((in_r12 & 0x10) == 0) {
        uVar5 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  else {
    uVar5 = uVar5 & 0x800;
joined_r0x08028138:
    if (uVar5 == 0) {
      return param_1;
    }
  }
  uVar5 = sub_08023714(param_1,param_2,uVar2,uVar4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar5;
  }
sub_080286A4:
  if ((in_r12 & 0x100000) == 0) {
    uVar5 = in_r12 & uVar5 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar2 = uVar5 << 0x1d;
    if ((bool)((byte)(uVar5 >> 3) & 1)) {
      uVar2 = uVar2 | 0x30000000;
    }
    puVar1 = (uint *)sub_08022A9C();
    *puVar1 = *puVar1 & 0xfffffff | uVar2;
    return uVar5;
  }
  if ((uVar5 & 8) != 0) {
    return uVar5;
  }
  return 2 - uVar5;
}


/* sub_08028214 @ 0x08028214 */

uint sub_08028214(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  undefined4 in_lr;
  bool bVar5;
  
  if ((param_1 & 0x400000) != 0) {
    uVar2 = in_r12 & 0x4f;
    if (uVar2 == 0x48) {
      param_3 = 0x48;
      goto sub_08028088;
    }
sub_080285E0:
    uVar4 = in_r12 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1;
      }
      if (uVar4 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar2 = 0x7fc00000;
        }
        else {
          uVar2 = 0;
        }
        return uVar2;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar4 = 0xffffffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar4 = 0;
        }
        return uVar4;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar2 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar2 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar2 = ~uVar2;
      }
      return uVar2;
    }
    uVar2 = 8;
    goto sub_080286A4;
  }
sub_08028088:
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08022A9C();
  uVar2 = *puVar1;
  if ((in_r12 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar4 = in_r12 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (in_r12 << 1) >> 0x1b;
  bVar5 = (in_r12 & 0xf) != 8;
  if (bVar5) {
    uVar3 = in_r12 & 0x70;
    in_r12 = uVar4 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
    in_r12 = uVar4;
  }
  if (!bVar5 && (uVar3 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar2 = uVar2 & 0x1000;
        goto joined_r0x08028138;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar2 & 0x100) == 0) {
          uVar2 = param_2;
          if ((in_r12 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = uVar2 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar2;
          }
          goto sub_080285E0;
        }
      }
      else if ((uVar2 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08028180;
      }
    }
    else if ((uVar2 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08028180:
      if ((in_r12 & 0x10) == 0) {
        uVar2 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 & 0x800;
joined_r0x08028138:
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar2 = sub_08023714(param_1,param_2,param_3,param_4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar2;
  }
sub_080286A4:
  if ((in_r12 & 0x100000) == 0) {
    uVar2 = in_r12 & uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08022A9C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_08028218 @ 0x08028218 */

uint sub_08028218(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  undefined4 in_lr;
  bool bVar5;
  
  if ((param_1 & 0x400000) != 0) {
    uVar2 = in_r12 & 0x4f;
    if (uVar2 == 0x48) {
      param_3 = 0x48;
      goto sub_08028088;
    }
sub_080285E0:
    uVar4 = in_r12 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1;
      }
      if (uVar4 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar2 = 0x7fc00000;
        }
        else {
          uVar2 = 0;
        }
        return uVar2;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar4 = 0xffffffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar4 = 0;
        }
        return uVar4;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar2 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar2 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar2 = ~uVar2;
      }
      return uVar2;
    }
    uVar2 = 8;
    goto sub_080286A4;
  }
sub_08028088:
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08022A9C();
  uVar2 = *puVar1;
  if ((in_r12 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar4 = in_r12 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (in_r12 << 1) >> 0x1b;
  bVar5 = (in_r12 & 0xf) != 8;
  if (bVar5) {
    uVar3 = in_r12 & 0x70;
    in_r12 = uVar4 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
    in_r12 = uVar4;
  }
  if (!bVar5 && (uVar3 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar2 = uVar2 & 0x1000;
        goto joined_r0x08028138;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar2 & 0x100) == 0) {
          uVar2 = param_2;
          if ((in_r12 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = uVar2 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar2;
          }
          goto sub_080285E0;
        }
      }
      else if ((uVar2 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08028180;
      }
    }
    else if ((uVar2 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08028180:
      if ((in_r12 & 0x10) == 0) {
        uVar2 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 & 0x800;
joined_r0x08028138:
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar2 = sub_08023714(param_1,param_2,param_3,param_4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar2;
  }
sub_080286A4:
  if ((in_r12 & 0x100000) == 0) {
    uVar2 = in_r12 & uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08022A9C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_08028230 @ 0x08028230 */

/* WARNING: Removing unreachable block (ram,0x080280b8) */
/* WARNING: Removing unreachable block (ram,0x08028188) */
/* WARNING: Removing unreachable block (ram,0x08028140) */
/* WARNING: Removing unreachable block (ram,0x0802814c) */
/* WARNING: Removing unreachable block (ram,0x08028154) */
/* WARNING: Removing unreachable block (ram,0x08028150) */
/* WARNING: Removing unreachable block (ram,0x08028158) */
/* WARNING: Removing unreachable block (ram,0x08028178) */
/* WARNING: Removing unreachable block (ram,0x08028120) */
/* WARNING: Removing unreachable block (ram,0x08028174) */
/* WARNING: Removing unreachable block (ram,0x0802817c) */
/* WARNING: Removing unreachable block (ram,0x08028180) */
/* WARNING: Removing unreachable block (ram,0x08028194) */
/* WARNING: Removing unreachable block (ram,0x0802819c) */
/* WARNING: Removing unreachable block (ram,0x0802812c) */
/* WARNING: Removing unreachable block (ram,0x0802815c) */
/* WARNING: Removing unreachable block (ram,0x08028168) */
/* WARNING: Removing unreachable block (ram,0x08028664) */
/* WARNING: Removing unreachable block (ram,0x080281a4) */
/* WARNING: Removing unreachable block (ram,0x080281b0) */
/* WARNING: Removing unreachable block (ram,0x08028644) */
/* WARNING: Removing unreachable block (ram,0x08028650) */
/* WARNING: Removing unreachable block (ram,0x08028658) */
/* WARNING: Removing unreachable block (ram,0x08028130) */
/* WARNING: Removing unreachable block (ram,0x0802816c) */
/* WARNING: Removing unreachable block (ram,0x0802813c) */
/* WARNING: Removing unreachable block (ram,0x08028618) */

uint sub_08028230(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  uint uVar8;
  
  uVar3 = (int)param_1 >> 0x17;
  uVar4 = param_1 << 8;
  if (uVar3 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar3 < 0) {
    if (param_1 < 0xcf000001) {
      if ((uVar3 & 0xff) == 0) {
        uVar4 = uVar4 & 0x7fffffff;
      }
      return -(uVar4 >> (0x9e - (uVar3 & 0xff) & 0xff));
    }
  }
  else if (uVar3 < 0x9f && 0x9e - uVar3 != 0) {
    return uVar4 >> (0x9e - uVar3 & 0xff);
  }
  uVar6 = 0x4020048;
  uVar3 = param_1 * 2;
  if (uVar3 < 0xff000001) {
    if (uVar3 == 0xff000000) {
      uVar6 = 0x4020048;
    }
  }
  else {
    uVar6 = 0x4030048;
  }
  uVar8 = uVar3;
  puVar1 = (uint *)sub_08022A9C();
  uVar2 = *puVar1;
  uVar5 = uVar6 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (uVar6 << 1) >> 0x1b;
  bVar7 = (uVar6 & 0xf) != 8;
  if (bVar7) {
    uVar6 = uVar6 & 0x70;
    uVar5 = uVar5 | uVar6 << 3;
  }
  else {
    uVar6 = 0x20000;
  }
  if (!bVar7 && (uVar6 & ~uVar5) == 0) {
    uVar5 = uVar5 | 0xc00000;
  }
  if ((uVar2 & 0x100) == 0) {
    uVar4 = uVar5 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1 & 0x80000000 | 0x7fc00000;
      }
      if (uVar4 == 8 && (uVar5 & 0x40) == 0) {
        return 0x7fc00000;
      }
      if ((uVar5 & 0x10000) != 0) {
        return 0;
      }
      uVar4 = 0x7fffffff;
      if ((param_1 & 0x80000000) != 0) {
        uVar4 = 0x80000000;
      }
      return uVar4;
    }
    uVar4 = 8;
  }
  else {
    uVar4 = sub_08023714(param_1,uVar3,uVar8,uVar4,uVar5,in_lr,uVar5,in_lr);
    if ((uVar5 & 0xf) != 9) {
      return uVar4;
    }
  }
  if ((uVar5 & 0x100000) == 0) {
    uVar5 = uVar5 & uVar4 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((uVar5 & 0xf0000) != 0) {
    if ((uVar4 & 8) == 0) {
      return 2 - uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar4 << 0x1d;
  if ((bool)((byte)(uVar4 >> 3) & 1)) {
    uVar3 = uVar3 | 0x30000000;
  }
  puVar1 = (uint *)sub_08022A9C();
  *puVar1 = *puVar1 & 0xfffffff | uVar3;
  return uVar4;
}


/* sub_08028234 @ 0x08028234 */

/* WARNING: Removing unreachable block (ram,0x080280b8) */
/* WARNING: Removing unreachable block (ram,0x08028188) */
/* WARNING: Removing unreachable block (ram,0x08028140) */
/* WARNING: Removing unreachable block (ram,0x0802814c) */
/* WARNING: Removing unreachable block (ram,0x08028154) */
/* WARNING: Removing unreachable block (ram,0x08028150) */
/* WARNING: Removing unreachable block (ram,0x08028158) */
/* WARNING: Removing unreachable block (ram,0x08028178) */
/* WARNING: Removing unreachable block (ram,0x08028120) */
/* WARNING: Removing unreachable block (ram,0x08028174) */
/* WARNING: Removing unreachable block (ram,0x0802817c) */
/* WARNING: Removing unreachable block (ram,0x08028180) */
/* WARNING: Removing unreachable block (ram,0x08028194) */
/* WARNING: Removing unreachable block (ram,0x0802819c) */
/* WARNING: Removing unreachable block (ram,0x0802812c) */
/* WARNING: Removing unreachable block (ram,0x0802815c) */
/* WARNING: Removing unreachable block (ram,0x08028168) */
/* WARNING: Removing unreachable block (ram,0x08028664) */
/* WARNING: Removing unreachable block (ram,0x080281a4) */
/* WARNING: Removing unreachable block (ram,0x080281b0) */
/* WARNING: Removing unreachable block (ram,0x08028644) */
/* WARNING: Removing unreachable block (ram,0x08028650) */
/* WARNING: Removing unreachable block (ram,0x08028658) */
/* WARNING: Removing unreachable block (ram,0x08028130) */
/* WARNING: Removing unreachable block (ram,0x0802816c) */
/* WARNING: Removing unreachable block (ram,0x0802813c) */
/* WARNING: Removing unreachable block (ram,0x08028618) */

uint sub_08028234(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  uint uVar8;
  
  uVar3 = (int)param_1 >> 0x17;
  uVar4 = param_1 << 8;
  if (uVar3 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar3 < 0) {
    if (param_1 < 0xcf000001) {
      if ((uVar3 & 0xff) == 0) {
        uVar4 = uVar4 & 0x7fffffff;
      }
      return -(uVar4 >> (0x9e - (uVar3 & 0xff) & 0xff));
    }
  }
  else if (uVar3 < 0x9f && 0x9e - uVar3 != 0) {
    return uVar4 >> (0x9e - uVar3 & 0xff);
  }
  uVar6 = 0x4020048;
  uVar3 = param_1 * 2;
  if (uVar3 < 0xff000001) {
    if (uVar3 == 0xff000000) {
      uVar6 = 0x4020048;
    }
  }
  else {
    uVar6 = 0x4030048;
  }
  uVar8 = uVar3;
  puVar1 = (uint *)sub_08022A9C();
  uVar2 = *puVar1;
  uVar5 = uVar6 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (uVar6 << 1) >> 0x1b;
  bVar7 = (uVar6 & 0xf) != 8;
  if (bVar7) {
    uVar6 = uVar6 & 0x70;
    uVar5 = uVar5 | uVar6 << 3;
  }
  else {
    uVar6 = 0x20000;
  }
  if (!bVar7 && (uVar6 & ~uVar5) == 0) {
    uVar5 = uVar5 | 0xc00000;
  }
  if ((uVar2 & 0x100) == 0) {
    uVar4 = uVar5 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1 & 0x80000000 | 0x7fc00000;
      }
      if (uVar4 == 8 && (uVar5 & 0x40) == 0) {
        return 0x7fc00000;
      }
      if ((uVar5 & 0x10000) != 0) {
        return 0;
      }
      uVar4 = 0x7fffffff;
      if ((param_1 & 0x80000000) != 0) {
        uVar4 = 0x80000000;
      }
      return uVar4;
    }
    uVar4 = 8;
  }
  else {
    uVar4 = sub_08023714(param_1,uVar3,uVar8,uVar4,uVar5,in_lr,uVar5,in_lr);
    if ((uVar5 & 0xf) != 9) {
      return uVar4;
    }
  }
  if ((uVar5 & 0x100000) == 0) {
    uVar5 = uVar5 & uVar4 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((uVar5 & 0xf0000) != 0) {
    if ((uVar4 & 8) == 0) {
      return 2 - uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar4 << 0x1d;
  if ((bool)((byte)(uVar4 >> 3) & 1)) {
    uVar3 = uVar3 | 0x30000000;
  }
  puVar1 = (uint *)sub_08022A9C();
  *puVar1 = *puVar1 & 0xfffffff | uVar3;
  return uVar4;
}


/* sub_0802829C @ 0x0802829C */

/* WARNING: Removing unreachable block (ram,0x08028188) */
/* WARNING: Removing unreachable block (ram,0x08028140) */
/* WARNING: Removing unreachable block (ram,0x0802814c) */
/* WARNING: Removing unreachable block (ram,0x08028154) */
/* WARNING: Removing unreachable block (ram,0x08028150) */
/* WARNING: Removing unreachable block (ram,0x08028158) */
/* WARNING: Removing unreachable block (ram,0x08028178) */
/* WARNING: Removing unreachable block (ram,0x08028664) */
/* WARNING: Removing unreachable block (ram,0x08028638) */
/* WARNING: Removing unreachable block (ram,0x080281a4) */
/* WARNING: Removing unreachable block (ram,0x080281b0) */
/* WARNING: Removing unreachable block (ram,0x08028644) */
/* WARNING: Removing unreachable block (ram,0x08028650) */
/* WARNING: Removing unreachable block (ram,0x08028658) */
/* WARNING: Removing unreachable block (ram,0x08028130) */
/* WARNING: Removing unreachable block (ram,0x0802813c) */
/* WARNING: Removing unreachable block (ram,0x08028618) */

undefined * sub_0802829C(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined4 in_lr;
  bool bVar13;
  bool bVar14;
  
  uVar5 = (uint)param_1 >> 7 & 0xff0000;
  bVar13 = uVar5 == 0;
  if (!bVar13) {
    param_4 = (uint)param_2 >> 7 & 0xff0000;
    bVar13 = param_4 == 0;
  }
  if (!bVar13) {
    bVar13 = uVar5 == 0xff0000;
  }
  if (!bVar13) {
    bVar13 = param_4 == 0xff0000;
  }
  if (bVar13) {
    uVar9 = (uint)param_2 >> 7 & 0xff0000;
    if ((int)((uint)param_1 ^ (uint)param_2) < 0) {
      uVar5 = uVar5 | 0x100;
    }
    if (uVar5 < 0xff0000 && uVar9 < 0xff0000) {
      if (((uint)param_1 & 0x7fffffff) == 0 || ((uint)param_2 & 0x7fffffff) == 0) {
        return (undefined *)(uVar5 << 0x17);
      }
      uVar3 = (int)param_1 << 8;
      puVar11 = (undefined *)((int)param_2 << 8);
      if ((uVar5 & 0xff0000) == 0) {
        if (uVar3 < 0x10000) {
          uVar5 = uVar5 - 0x100000;
          uVar3 = (int)param_1 << 0x18;
        }
        if ((uVar3 & 0xff000000) == 0) {
          uVar5 = uVar5 - 0x80000;
          uVar3 = uVar3 << 8;
        }
        if ((uVar3 & 0xf0000000) == 0) {
          uVar5 = uVar5 - 0x40000;
          uVar3 = uVar3 << 4;
        }
        uVar2 = uVar3 & 0xc0000000;
        if ((uVar3 & 0xc0000000) == 0) {
          uVar5 = uVar5 - 0x20000;
          uVar3 = uVar3 << 2;
          uVar2 = uVar3;
        }
        if ((int)uVar2 < 0) {
          uVar5 = uVar5 + 0x10000;
        }
        else {
          uVar3 = uVar3 << 1;
        }
        if (uVar9 != 0) {
          param_2 = (undefined *)((uint)puVar11 | 0x80000000);
          param_4 = uVar9;
          goto code_r0x080282cc;
        }
      }
      uVar3 = uVar3 | 0x80000000;
      if (puVar11 < (undefined *)0x10000) {
        uVar9 = uVar9 - 0x100000;
        puVar11 = (undefined *)((int)param_2 << 0x18);
      }
      param_2 = puVar11;
      if (((uint)param_2 & 0xff000000) == 0) {
        uVar9 = uVar9 - 0x80000;
        param_2 = (undefined *)((int)param_2 << 8);
      }
      if (((uint)param_2 & 0xf0000000) == 0) {
        uVar9 = uVar9 - 0x40000;
        param_2 = (undefined *)((int)param_2 << 4);
      }
      puVar11 = (undefined *)((uint)param_2 & 0xc0000000);
      param_4 = uVar9;
      if ((undefined *)((uint)param_2 & 0xc0000000) == (undefined *)0x0) {
        param_4 = uVar9 - 0x20000;
        param_2 = (undefined *)((int)param_2 << 2);
        puVar11 = param_2;
      }
      if ((int)puVar11 < 0) {
        param_4 = param_4 + 0x10000;
      }
      else {
        param_2 = (undefined *)((int)param_2 << 1);
      }
      goto code_r0x080282cc;
    }
    uVar3 = (int)param_1 * 2;
    if (uVar3 < 0xff000001) {
      uVar3 = (int)param_2 * 2;
    }
    puVar11 = &UNK_04000003;
    if (uVar3 < 0xff000001) {
      if (((uint)param_1 & 0x7fffffff) != 0 && ((uint)param_2 & 0x7fffffff) != 0) {
        return (undefined *)((uVar5 | 0xff) << 0x17);
      }
      puVar11 = &UNK_04000003;
      goto sub_08028088;
    }
    uVar3 = (int)param_1 * 2 + 0x800000;
    uVar9 = (int)param_2 * 2 + 0x800000;
    uVar5 = uVar3;
    if (uVar3 < 0xff800001) {
      uVar5 = uVar9;
    }
    if (0xff800000 < uVar5) goto sub_08028088;
    if (0x7fffff < uVar3) {
      param_1 = param_2;
    }
sub_080285E0:
    uVar5 = (uint)puVar11 & 0xf;
    if (uVar5 != 9) {
      if (uVar5 != 8) {
        return param_1;
      }
      if (uVar5 != 8) {
        puVar11 = (undefined *)0x7fffffff;
        if (((uint)param_1 & 0x80000000) != 0) {
          puVar11 = (undefined *)0x80000000;
        }
        return puVar11;
      }
      return (undefined *)0x7fc00000;
    }
    puVar8 = (undefined *)0x8;
  }
  else {
    if ((int)((uint)param_1 ^ (uint)param_2) < 0) {
      uVar5 = uVar5 | 0x100;
    }
    uVar3 = (int)param_1 << 8 | 0x80000000;
    param_2 = (undefined *)((int)param_2 << 8 | 0x80000000);
code_r0x080282cc:
    uVar9 = (uint)(ZEXT48(param_2) * (ulonglong)uVar3 >> 0x20);
    iVar6 = uVar5 + param_4 + -0x800000;
    if ((int)(ZEXT48(param_2) * (ulonglong)uVar3) != 0) {
      uVar9 = uVar9 | 1;
    }
    bVar13 = 0x7fffffff < uVar9;
    if (!bVar13) {
      uVar9 = uVar9 << 1;
    }
    iVar1 = iVar6 >> 0x10;
    uVar3 = (uint)bVar13;
    uVar7 = iVar6 + iVar1 + uVar3;
    bVar13 = (bool)((byte)(uVar9 >> 7) & 1);
    uVar5 = uVar9 >> 8;
    param_1 = (undefined *)(uVar5 + uVar7 * 0x800000 + (uint)bVar13);
    uVar2 = (uint)bVar13;
    puVar12 = &stack0x00000000 +
              uVar2 + (uint)bVar13 * 2 +
                      uVar5 * 2 + uVar3 * 0x1000000 + iVar1 * 0x1000000 + param_4 * 0x1000000;
    if (bVar13) {
      uVar5 = uVar9 & 0x7f;
    }
    if (uVar5 != 0) {
      bVar13 = 0xfbffff < uVar7;
    }
    if (!bVar13) {
      return param_1;
    }
    if (uVar5 == 0 || uVar7 == 0xfc0000) {
      param_1 = (undefined *)((uint)param_1 & 0xfffffffe);
    }
    if (uVar7 < 0xfc0000) {
      return param_1;
    }
    if ((int)(uVar7 - 0xfc0000) < 0) {
      if ((int)param_1 * 2 - 0x1000000U < 0x3000000) {
        return param_1;
      }
      param_1 = param_1 + 0x60000000;
      bVar14 = (uVar9 & 0x7f) == 0;
      bVar13 = !bVar14;
      if (bVar13) {
        puVar12 = (undefined1 *)((uint)puVar12 >> 1 | uVar2 << 0x1f);
        bVar14 = puVar12 == (undefined1 *)0x0;
      }
      bVar13 = bVar13 && uVar2 != 0;
      if (bVar14) {
        bVar13 = -1 < (int)((uint)puVar12 >> 2 | (int)puVar12 << 0x1e);
      }
      if (bVar13) {
        puVar8 = (undefined *)0x40000003;
      }
      else {
        puVar8 = (undefined *)0xc0000003;
      }
      if ((uVar9 & 0xff) == 0) {
        puVar8 = (undefined *)0x3;
      }
      puVar4 = (uint *)sub_08022A9C();
      param_2 = (undefined *)*puVar4;
      if (((uint)param_2 & 0x1000000) != 0) {
        return (undefined *)((uint)param_1 & 0x80000000);
      }
      if (((uint)param_2 & 0x800) == 0) {
        uVar9 = 0xc1 - ((uint)param_1 & 0x80000000 | (uint)param_1 >> 0x17 & 0xfffffeff);
        if ((uVar9 & 0x7fffffff) < 0x18) {
          uVar5 = (int)param_1 << (0x20 - uVar9 & 0xff);
          uVar3 = 0x20 - (0x20 - uVar9);
          uVar9 = uVar3 & 0x80000000;
          param_1 = (undefined *)(((uint)param_1 & 0xffffff | 0x800000) >> (uVar3 & 0xff) | uVar9);
          if (uVar5 == 0) {
            param_2 = (undefined *)0x0;
            puVar11 = puVar8;
            if (((uint)puVar8 & 0x40000000) == 0) {
              return param_1;
            }
          }
          else {
            *puVar4 = *puVar4 | 8;
            param_2 = (undefined *)(uVar5 << 1);
            if (SUB41(uVar5 >> 0x1f,0)) {
              if (param_2 == (undefined *)0x0) {
                bVar13 = (bool)((byte)((uint)puVar8 >> 0x1e) & 1);
                uVar5 = ~((int)puVar8 >> 0x1f);
                if (!bVar13 || uVar5 == 0) {
                  param_1 = param_1 + 1;
                }
                if (!bVar13) {
                  param_1 = (undefined *)((uint)param_1 & 0xfffffffe);
                }
              }
              else {
                param_1 = param_1 + 1;
              }
            }
            uVar9 = uVar5;
            puVar11 = (undefined *)((uint)puVar8 | 0x40000000);
          }
        }
        else {
          param_2 = (undefined *)(*puVar4 | 8);
          *puVar4 = (uint)param_2;
          if (SBORROW4(uVar9 & 0x7fffffff,-0x7fffffe7)) {
            param_1 = (undefined *)(uVar9 & 0x80000000);
          }
          else {
            uVar5 = (uint)param_1 & 0x7fffff;
            param_1 = (undefined *)(uVar9 & 0x80000000) + 1;
            if (uVar5 == 0 && ((uint)puVar8 & 0x80000000) == 0) {
              param_1 = (undefined *)(uVar9 & 0x80000000);
            }
          }
          puVar11 = (undefined *)0x40000000;
        }
        goto sub_08028088;
      }
      puVar11 = (undefined *)((uint)puVar8 | 0x20000000);
    }
    else {
      if ((int)(param_1 + 0x800000) * 2 < 0) {
        return param_1;
      }
      param_1 = param_1 + -0x60000000;
      puVar11 = (undefined *)0x10000003;
sub_08028088:
      puVar8 = param_2;
      puVar4 = (uint *)sub_08022A9C();
      uVar5 = *puVar4;
      puVar10 = puVar11;
      if (((uint)puVar11 & ~(uVar5 << 0x12) & 0x30000000) != 0) {
        puVar10 = (undefined *)((uint)puVar11 | 0x40000000);
      }
      puVar11 = (undefined *)((uint)puVar10 | uVar5 & 0x1c00000);
      *puVar4 = uVar5 | (uint)((int)puVar10 << 1) >> 0x1b;
      bVar13 = ((uint)puVar10 & 0xf) != 8;
      if (bVar13) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x20000;
      }
      if (!bVar13 && (uVar3 & ~(uint)puVar11) == 0) {
        puVar11 = (undefined *)((uint)puVar11 | 0xc00000);
      }
      if (((uint)puVar11 & 0x10000000) == 0) {
        if (((uint)puVar11 & 0x40000000) == 0) {
          if ((uVar5 & 0x100) == 0) {
            param_1 = (undefined *)((uint)param_1 & 0x80000000 | 0x7fc00000);
            goto sub_080285E0;
          }
        }
        else if ((uVar5 & 0x1000) == 0) {
          return param_1;
        }
      }
      else if ((uVar5 & 0x400) == 0) {
        return (undefined *)((uint)param_1 & 0x80000000 | 0x7f800000);
      }
    }
    puVar8 = (undefined *)sub_08023714(param_1,param_2,puVar8,uVar9,puVar11,in_lr,puVar11,in_lr);
    if (((uint)puVar11 & 0xf) != 9) {
      return puVar8;
    }
  }
  if (((uint)puVar11 & 0x100000) == 0) {
    puVar11 = (undefined *)((uint)puVar11 & (int)puVar8 << 0x10);
    if (puVar11 != (undefined *)0x0) {
      puVar11 = (undefined *)0x1;
    }
    return puVar11;
  }
  if (((uint)puVar11 & 0xf0000) != 0) {
    if (((uint)puVar8 & 8) == 0) {
      return (undefined *)(2 - (int)puVar8);
    }
    return puVar8;
  }
  uVar5 = (int)puVar8 << 0x1d;
  if ((bool)((byte)((uint)puVar8 >> 3) & 1)) {
    uVar5 = uVar5 | 0x30000000;
  }
  puVar4 = (uint *)sub_08022A9C();
  *puVar4 = *puVar4 & 0xfffffff | uVar5;
  return puVar8;
}


/* sub_080282A0 @ 0x080282A0 */

/* WARNING: Removing unreachable block (ram,0x08028188) */
/* WARNING: Removing unreachable block (ram,0x08028140) */
/* WARNING: Removing unreachable block (ram,0x0802814c) */
/* WARNING: Removing unreachable block (ram,0x08028154) */
/* WARNING: Removing unreachable block (ram,0x08028150) */
/* WARNING: Removing unreachable block (ram,0x08028158) */
/* WARNING: Removing unreachable block (ram,0x08028178) */
/* WARNING: Removing unreachable block (ram,0x08028664) */
/* WARNING: Removing unreachable block (ram,0x08028638) */
/* WARNING: Removing unreachable block (ram,0x080281a4) */
/* WARNING: Removing unreachable block (ram,0x080281b0) */
/* WARNING: Removing unreachable block (ram,0x08028644) */
/* WARNING: Removing unreachable block (ram,0x08028650) */
/* WARNING: Removing unreachable block (ram,0x08028658) */
/* WARNING: Removing unreachable block (ram,0x08028130) */
/* WARNING: Removing unreachable block (ram,0x0802813c) */
/* WARNING: Removing unreachable block (ram,0x08028618) */

undefined * sub_080282A0(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined4 in_lr;
  bool bVar13;
  bool bVar14;
  
  uVar5 = (uint)param_1 >> 7 & 0xff0000;
  bVar13 = uVar5 == 0;
  if (!bVar13) {
    param_4 = (uint)param_2 >> 7 & 0xff0000;
    bVar13 = param_4 == 0;
  }
  if (!bVar13) {
    bVar13 = uVar5 == 0xff0000;
  }
  if (!bVar13) {
    bVar13 = param_4 == 0xff0000;
  }
  if (bVar13) {
    uVar9 = (uint)param_2 >> 7 & 0xff0000;
    if ((int)((uint)param_1 ^ (uint)param_2) < 0) {
      uVar5 = uVar5 | 0x100;
    }
    if (uVar5 < 0xff0000 && uVar9 < 0xff0000) {
      if (((uint)param_1 & 0x7fffffff) == 0 || ((uint)param_2 & 0x7fffffff) == 0) {
        return (undefined *)(uVar5 << 0x17);
      }
      uVar3 = (int)param_1 << 8;
      puVar11 = (undefined *)((int)param_2 << 8);
      if ((uVar5 & 0xff0000) == 0) {
        if (uVar3 < 0x10000) {
          uVar5 = uVar5 - 0x100000;
          uVar3 = (int)param_1 << 0x18;
        }
        if ((uVar3 & 0xff000000) == 0) {
          uVar5 = uVar5 - 0x80000;
          uVar3 = uVar3 << 8;
        }
        if ((uVar3 & 0xf0000000) == 0) {
          uVar5 = uVar5 - 0x40000;
          uVar3 = uVar3 << 4;
        }
        uVar2 = uVar3 & 0xc0000000;
        if ((uVar3 & 0xc0000000) == 0) {
          uVar5 = uVar5 - 0x20000;
          uVar3 = uVar3 << 2;
          uVar2 = uVar3;
        }
        if ((int)uVar2 < 0) {
          uVar5 = uVar5 + 0x10000;
        }
        else {
          uVar3 = uVar3 << 1;
        }
        if (uVar9 != 0) {
          param_2 = (undefined *)((uint)puVar11 | 0x80000000);
          param_4 = uVar9;
          goto code_r0x080282cc;
        }
      }
      uVar3 = uVar3 | 0x80000000;
      if (puVar11 < (undefined *)0x10000) {
        uVar9 = uVar9 - 0x100000;
        puVar11 = (undefined *)((int)param_2 << 0x18);
      }
      param_2 = puVar11;
      if (((uint)param_2 & 0xff000000) == 0) {
        uVar9 = uVar9 - 0x80000;
        param_2 = (undefined *)((int)param_2 << 8);
      }
      if (((uint)param_2 & 0xf0000000) == 0) {
        uVar9 = uVar9 - 0x40000;
        param_2 = (undefined *)((int)param_2 << 4);
      }
      puVar11 = (undefined *)((uint)param_2 & 0xc0000000);
      param_4 = uVar9;
      if ((undefined *)((uint)param_2 & 0xc0000000) == (undefined *)0x0) {
        param_4 = uVar9 - 0x20000;
        param_2 = (undefined *)((int)param_2 << 2);
        puVar11 = param_2;
      }
      if ((int)puVar11 < 0) {
        param_4 = param_4 + 0x10000;
      }
      else {
        param_2 = (undefined *)((int)param_2 << 1);
      }
      goto code_r0x080282cc;
    }
    uVar3 = (int)param_1 * 2;
    if (uVar3 < 0xff000001) {
      uVar3 = (int)param_2 * 2;
    }
    puVar11 = &UNK_04000003;
    if (uVar3 < 0xff000001) {
      if (((uint)param_1 & 0x7fffffff) != 0 && ((uint)param_2 & 0x7fffffff) != 0) {
        return (undefined *)((uVar5 | 0xff) << 0x17);
      }
      puVar11 = &UNK_04000003;
      goto sub_08028088;
    }
    uVar3 = (int)param_1 * 2 + 0x800000;
    uVar9 = (int)param_2 * 2 + 0x800000;
    uVar5 = uVar3;
    if (uVar3 < 0xff800001) {
      uVar5 = uVar9;
    }
    if (0xff800000 < uVar5) goto sub_08028088;
    if (0x7fffff < uVar3) {
      param_1 = param_2;
    }
sub_080285E0:
    uVar5 = (uint)puVar11 & 0xf;
    if (uVar5 != 9) {
      if (uVar5 != 8) {
        return param_1;
      }
      if (uVar5 != 8) {
        puVar11 = (undefined *)0x7fffffff;
        if (((uint)param_1 & 0x80000000) != 0) {
          puVar11 = (undefined *)0x80000000;
        }
        return puVar11;
      }
      return (undefined *)0x7fc00000;
    }
    puVar8 = (undefined *)0x8;
  }
  else {
    if ((int)((uint)param_1 ^ (uint)param_2) < 0) {
      uVar5 = uVar5 | 0x100;
    }
    uVar3 = (int)param_1 << 8 | 0x80000000;
    param_2 = (undefined *)((int)param_2 << 8 | 0x80000000);
code_r0x080282cc:
    uVar9 = (uint)(ZEXT48(param_2) * (ulonglong)uVar3 >> 0x20);
    iVar6 = uVar5 + param_4 + -0x800000;
    if ((int)(ZEXT48(param_2) * (ulonglong)uVar3) != 0) {
      uVar9 = uVar9 | 1;
    }
    bVar13 = 0x7fffffff < uVar9;
    if (!bVar13) {
      uVar9 = uVar9 << 1;
    }
    iVar1 = iVar6 >> 0x10;
    uVar3 = (uint)bVar13;
    uVar7 = iVar6 + iVar1 + uVar3;
    bVar13 = (bool)((byte)(uVar9 >> 7) & 1);
    uVar5 = uVar9 >> 8;
    param_1 = (undefined *)(uVar5 + uVar7 * 0x800000 + (uint)bVar13);
    uVar2 = (uint)bVar13;
    puVar12 = &stack0x00000000 +
              uVar2 + (uint)bVar13 * 2 +
                      uVar5 * 2 + uVar3 * 0x1000000 + iVar1 * 0x1000000 + param_4 * 0x1000000;
    if (bVar13) {
      uVar5 = uVar9 & 0x7f;
    }
    if (uVar5 != 0) {
      bVar13 = 0xfbffff < uVar7;
    }
    if (!bVar13) {
      return param_1;
    }
    if (uVar5 == 0 || uVar7 == 0xfc0000) {
      param_1 = (undefined *)((uint)param_1 & 0xfffffffe);
    }
    if (uVar7 < 0xfc0000) {
      return param_1;
    }
    if ((int)(uVar7 - 0xfc0000) < 0) {
      if ((int)param_1 * 2 - 0x1000000U < 0x3000000) {
        return param_1;
      }
      param_1 = param_1 + 0x60000000;
      bVar14 = (uVar9 & 0x7f) == 0;
      bVar13 = !bVar14;
      if (bVar13) {
        puVar12 = (undefined1 *)((uint)puVar12 >> 1 | uVar2 << 0x1f);
        bVar14 = puVar12 == (undefined1 *)0x0;
      }
      bVar13 = bVar13 && uVar2 != 0;
      if (bVar14) {
        bVar13 = -1 < (int)((uint)puVar12 >> 2 | (int)puVar12 << 0x1e);
      }
      if (bVar13) {
        puVar8 = (undefined *)0x40000003;
      }
      else {
        puVar8 = (undefined *)0xc0000003;
      }
      if ((uVar9 & 0xff) == 0) {
        puVar8 = (undefined *)0x3;
      }
      puVar4 = (uint *)sub_08022A9C();
      param_2 = (undefined *)*puVar4;
      if (((uint)param_2 & 0x1000000) != 0) {
        return (undefined *)((uint)param_1 & 0x80000000);
      }
      if (((uint)param_2 & 0x800) == 0) {
        uVar9 = 0xc1 - ((uint)param_1 & 0x80000000 | (uint)param_1 >> 0x17 & 0xfffffeff);
        if ((uVar9 & 0x7fffffff) < 0x18) {
          uVar5 = (int)param_1 << (0x20 - uVar9 & 0xff);
          uVar3 = 0x20 - (0x20 - uVar9);
          uVar9 = uVar3 & 0x80000000;
          param_1 = (undefined *)(((uint)param_1 & 0xffffff | 0x800000) >> (uVar3 & 0xff) | uVar9);
          if (uVar5 == 0) {
            param_2 = (undefined *)0x0;
            puVar11 = puVar8;
            if (((uint)puVar8 & 0x40000000) == 0) {
              return param_1;
            }
          }
          else {
            *puVar4 = *puVar4 | 8;
            param_2 = (undefined *)(uVar5 << 1);
            if (SUB41(uVar5 >> 0x1f,0)) {
              if (param_2 == (undefined *)0x0) {
                bVar13 = (bool)((byte)((uint)puVar8 >> 0x1e) & 1);
                uVar5 = ~((int)puVar8 >> 0x1f);
                if (!bVar13 || uVar5 == 0) {
                  param_1 = param_1 + 1;
                }
                if (!bVar13) {
                  param_1 = (undefined *)((uint)param_1 & 0xfffffffe);
                }
              }
              else {
                param_1 = param_1 + 1;
              }
            }
            uVar9 = uVar5;
            puVar11 = (undefined *)((uint)puVar8 | 0x40000000);
          }
        }
        else {
          param_2 = (undefined *)(*puVar4 | 8);
          *puVar4 = (uint)param_2;
          if (SBORROW4(uVar9 & 0x7fffffff,-0x7fffffe7)) {
            param_1 = (undefined *)(uVar9 & 0x80000000);
          }
          else {
            uVar5 = (uint)param_1 & 0x7fffff;
            param_1 = (undefined *)(uVar9 & 0x80000000) + 1;
            if (uVar5 == 0 && ((uint)puVar8 & 0x80000000) == 0) {
              param_1 = (undefined *)(uVar9 & 0x80000000);
            }
          }
          puVar11 = (undefined *)0x40000000;
        }
        goto sub_08028088;
      }
      puVar11 = (undefined *)((uint)puVar8 | 0x20000000);
    }
    else {
      if ((int)(param_1 + 0x800000) * 2 < 0) {
        return param_1;
      }
      param_1 = param_1 + -0x60000000;
      puVar11 = (undefined *)0x10000003;
sub_08028088:
      puVar8 = param_2;
      puVar4 = (uint *)sub_08022A9C();
      uVar5 = *puVar4;
      puVar10 = puVar11;
      if (((uint)puVar11 & ~(uVar5 << 0x12) & 0x30000000) != 0) {
        puVar10 = (undefined *)((uint)puVar11 | 0x40000000);
      }
      puVar11 = (undefined *)((uint)puVar10 | uVar5 & 0x1c00000);
      *puVar4 = uVar5 | (uint)((int)puVar10 << 1) >> 0x1b;
      bVar13 = ((uint)puVar10 & 0xf) != 8;
      if (bVar13) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x20000;
      }
      if (!bVar13 && (uVar3 & ~(uint)puVar11) == 0) {
        puVar11 = (undefined *)((uint)puVar11 | 0xc00000);
      }
      if (((uint)puVar11 & 0x10000000) == 0) {
        if (((uint)puVar11 & 0x40000000) == 0) {
          if ((uVar5 & 0x100) == 0) {
            param_1 = (undefined *)((uint)param_1 & 0x80000000 | 0x7fc00000);
            goto sub_080285E0;
          }
        }
        else if ((uVar5 & 0x1000) == 0) {
          return param_1;
        }
      }
      else if ((uVar5 & 0x400) == 0) {
        return (undefined *)((uint)param_1 & 0x80000000 | 0x7f800000);
      }
    }
    puVar8 = (undefined *)sub_08023714(param_1,param_2,puVar8,uVar9,puVar11,in_lr,puVar11,in_lr);
    if (((uint)puVar11 & 0xf) != 9) {
      return puVar8;
    }
  }
  if (((uint)puVar11 & 0x100000) == 0) {
    puVar11 = (undefined *)((uint)puVar11 & (int)puVar8 << 0x10);
    if (puVar11 != (undefined *)0x0) {
      puVar11 = (undefined *)0x1;
    }
    return puVar11;
  }
  if (((uint)puVar11 & 0xf0000) != 0) {
    if (((uint)puVar8 & 8) == 0) {
      return (undefined *)(2 - (int)puVar8);
    }
    return puVar8;
  }
  uVar5 = (int)puVar8 << 0x1d;
  if ((bool)((byte)((uint)puVar8 >> 3) & 1)) {
    uVar5 = uVar5 | 0x30000000;
  }
  puVar4 = (uint *)sub_08022A9C();
  *puVar4 = *puVar4 & 0xfffffff | uVar5;
  return puVar8;
}


/* sub_080283C8 @ 0x080283C8 */

void sub_080283C8(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar2 = param_1 << 8;
  uVar3 = param_2 << 8;
  if ((param_3 & 0xff0000) == 0) {
    if (uVar2 < 0x10000) {
      param_3 = param_3 - 0x100000;
      uVar2 = param_1 << 0x18;
    }
    if ((uVar2 & 0xff000000) == 0) {
      param_3 = param_3 - 0x80000;
      uVar2 = uVar2 << 8;
    }
    if ((uVar2 & 0xf0000000) == 0) {
      param_3 = param_3 - 0x40000;
      uVar2 = uVar2 << 4;
    }
    uVar1 = uVar2 & 0xc0000000;
    if ((uVar2 & 0xc0000000) == 0) {
      param_3 = param_3 - 0x20000;
      uVar2 = uVar2 << 2;
      uVar1 = uVar2;
    }
    if ((int)uVar1 < 0) {
      param_3 = param_3 + 0x10000;
    }
    else {
      uVar2 = uVar2 << 1;
    }
    if ((param_4 & 0xff0000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0802841c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  if (uVar3 < 0x10000) {
    param_4 = param_4 - 0x100000;
    uVar3 = param_2 << 0x18;
  }
  if ((uVar3 & 0xff000000) == 0) {
    param_4 = param_4 - 0x80000;
    uVar3 = uVar3 << 8;
  }
  if ((uVar3 & 0xf0000000) == 0) {
    param_4 = param_4 - 0x40000;
    uVar3 = uVar3 << 4;
  }
  uVar1 = uVar3 & 0xc0000000;
  if ((uVar3 & 0xc0000000) == 0) {
    param_4 = param_4 - 0x20000;
    uVar3 = uVar3 << 2;
    uVar1 = uVar3;
  }
  if ((int)uVar1 < 0) {
    param_4 = param_4 + 0x10000;
  }
  else {
    uVar3 = uVar3 << 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0802845c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar2 | 0x80000000,uVar3,param_3,param_4);
  return;
}


/* sub_080283CC @ 0x080283CC */

void sub_080283CC(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar2 = param_1 << 8;
  uVar3 = param_2 << 8;
  if ((param_3 & 0xff0000) == 0) {
    if (uVar2 < 0x10000) {
      param_3 = param_3 - 0x100000;
      uVar2 = param_1 << 0x18;
    }
    if ((uVar2 & 0xff000000) == 0) {
      param_3 = param_3 - 0x80000;
      uVar2 = uVar2 << 8;
    }
    if ((uVar2 & 0xf0000000) == 0) {
      param_3 = param_3 - 0x40000;
      uVar2 = uVar2 << 4;
    }
    uVar1 = uVar2 & 0xc0000000;
    if ((uVar2 & 0xc0000000) == 0) {
      param_3 = param_3 - 0x20000;
      uVar2 = uVar2 << 2;
      uVar1 = uVar2;
    }
    if ((int)uVar1 < 0) {
      param_3 = param_3 + 0x10000;
    }
    else {
      uVar2 = uVar2 << 1;
    }
    if ((param_4 & 0xff0000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0802841c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  if (uVar3 < 0x10000) {
    param_4 = param_4 - 0x100000;
    uVar3 = param_2 << 0x18;
  }
  if ((uVar3 & 0xff000000) == 0) {
    param_4 = param_4 - 0x80000;
    uVar3 = uVar3 << 8;
  }
  if ((uVar3 & 0xf0000000) == 0) {
    param_4 = param_4 - 0x40000;
    uVar3 = uVar3 << 4;
  }
  uVar1 = uVar3 & 0xc0000000;
  if ((uVar3 & 0xc0000000) == 0) {
    param_4 = param_4 - 0x20000;
    uVar3 = uVar3 << 2;
    uVar1 = uVar3;
  }
  if ((int)uVar1 < 0) {
    param_4 = param_4 + 0x10000;
  }
  else {
    uVar3 = uVar3 << 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0802845c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar2 | 0x80000000,uVar3,param_3,param_4);
  return;
}


/* sub_08028460 @ 0x08028460 */

uint sub_08028460(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  
  puVar1 = (uint *)sub_08022A9C();
  uVar3 = *puVar1;
  if ((uVar3 & 0x1000000) != 0) {
    return param_1 & 0x80000000;
  }
  if ((uVar3 & 0x800) == 0) {
    param_4 = 0xc1 - (param_1 & 0x80000000 | param_1 >> 0x17 & 0xfffffeff);
    if ((param_4 & 0x7fffffff) < 0x18) {
      uVar4 = param_1 << (0x20 - param_4 & 0xff);
      uVar3 = 0x20 - (0x20 - param_4);
      param_4 = uVar3 & 0x80000000;
      param_1 = (param_1 & 0xffffff | 0x800000) >> (uVar3 & 0xff) | param_4;
      if (uVar4 == 0) {
        uVar3 = 0;
        uVar6 = param_3;
        if ((param_3 & 0x40000000) == 0) {
          return param_1;
        }
      }
      else {
        *puVar1 = *puVar1 | 8;
        uVar3 = uVar4 << 1;
        if (SUB41(uVar4 >> 0x1f,0)) {
          if (uVar3 == 0) {
            bVar7 = (bool)((byte)(param_3 >> 0x1e) & 1);
            uVar4 = ~((int)param_3 >> 0x1f);
            if (!bVar7 || uVar4 == 0) {
              param_1 = param_1 + 1;
            }
            if (!bVar7) {
              param_1 = param_1 & 0xfffffffe;
            }
          }
          else {
            param_1 = param_1 + 1;
          }
        }
        param_4 = uVar4;
        uVar6 = param_3 | 0x40000000;
      }
    }
    else {
      uVar3 = *puVar1 | 8;
      *puVar1 = uVar3;
      if (SBORROW4(param_4 & 0x7fffffff,-0x7fffffe7)) {
        param_1 = param_4 & 0x80000000;
      }
      else {
        uVar4 = param_1 & 0x7fffff;
        param_1 = (param_4 & 0x80000000) + 1;
        if (uVar4 == 0 && (param_3 & 0x80000000) == 0) {
          param_1 = param_4 & 0x80000000;
        }
      }
      uVar6 = 0x40000000;
    }
    if ((uVar6 & 0x10) == 0) {
      param_3 = uVar3;
    }
    puVar1 = (uint *)sub_08022A9C();
    uVar2 = *puVar1;
    if ((uVar6 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
      uVar6 = uVar6 | 0x40000000;
    }
    uVar4 = uVar6 | uVar2 & 0x1c00000;
    *puVar1 = uVar2 | (uVar6 << 1) >> 0x1b;
    bVar7 = (uVar6 & 0xf) != 8;
    if (bVar7) {
      uVar6 = uVar6 & 0x70;
      uVar4 = uVar4 | uVar6 << 3;
    }
    else {
      uVar6 = 0x20000;
    }
    if (!bVar7 && (uVar6 & ~uVar4) == 0) {
      uVar4 = uVar4 | 0xc00000;
    }
    if ((uVar4 & 0x20000000) == 0) {
      if ((uVar4 & 0x10000000) == 0) {
        if ((uVar4 & 0x40000000) != 0) {
          uVar2 = uVar2 & 0x1000;
          goto joined_r0x08028138;
        }
        if ((uVar4 & 0x8000000) == 0) {
          if ((uVar2 & 0x100) == 0) {
            uVar6 = uVar3;
            if ((uVar4 & 0x80) == 0) {
              uVar6 = param_1;
            }
            uVar6 = uVar6 & 0x80000000;
            if ((uVar4 & 0x10) == 0) {
              uVar2 = uVar6 | 0x7fc00000;
            }
            else {
              uVar2 = 0;
              uVar3 = uVar6;
            }
            uVar5 = uVar4 & 0xf;
            if (uVar5 != 9) {
              if (uVar5 != 8) {
                return uVar2;
              }
              if (uVar5 == 8 && (uVar4 & 0x40) == 0) {
                if ((uVar4 & 0x10) == 0) {
                  uVar3 = 0x7fc00000;
                }
                else {
                  uVar3 = 0;
                }
                return uVar3;
              }
              if ((uVar4 & 0x10000) != 0) {
                return 0;
              }
              if ((uVar4 & 0x20) != 0) {
                uVar3 = 0xffffffff;
                if (uVar6 != 0) {
                  uVar3 = 0;
                }
                return uVar3;
              }
              if ((uVar4 & 0x10) == 0) {
                uVar4 = 0x7fffffff;
                uVar3 = uVar2;
              }
              else {
                uVar4 = 0xffffffff;
              }
              if ((uVar3 & 0x80000000) != 0) {
                uVar4 = ~uVar4;
              }
              return uVar4;
            }
            uVar3 = 8;
            goto sub_080286A4;
          }
        }
        else if ((uVar2 & 0x200) == 0) {
          if ((uVar4 & 0x10) == 0) {
            uVar3 = param_1 ^ param_3;
          }
          else {
            uVar3 = uVar3 ^ param_4;
          }
          goto _08028180;
        }
      }
      else if ((uVar2 & 0x400) == 0) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = param_1 & 0x80000000;
        }
        else {
          uVar3 = uVar3 & 0x80000000;
        }
_08028180:
        if ((uVar4 & 0x10) == 0) {
          uVar3 = uVar3 & 0x80000000 | 0x7f800000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
    }
    else {
      uVar2 = uVar2 & 0x800;
joined_r0x08028138:
      if (uVar2 == 0) {
        return param_1;
      }
    }
  }
  else {
    uVar4 = param_3 | 0x20000000;
  }
  uVar3 = sub_08023714(param_1,uVar3,param_3,param_4,uVar4,in_lr,uVar4,in_lr);
  if ((uVar4 & 0xf) != 9) {
    return uVar3;
  }
sub_080286A4:
  if ((uVar4 & 0x100000) == 0) {
    uVar4 = uVar4 & uVar3 << 0x10;
    if (uVar4 != 0) {
      uVar4 = 1;
    }
    return uVar4;
  }
  if ((uVar4 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08022A9C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08028464 @ 0x08028464 */

uint sub_08028464(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  
  puVar1 = (uint *)sub_08022A9C();
  uVar3 = *puVar1;
  if ((uVar3 & 0x1000000) != 0) {
    return param_1 & 0x80000000;
  }
  if ((uVar3 & 0x800) == 0) {
    param_4 = 0xc1 - (param_1 & 0x80000000 | param_1 >> 0x17 & 0xfffffeff);
    if ((param_4 & 0x7fffffff) < 0x18) {
      uVar4 = param_1 << (0x20 - param_4 & 0xff);
      uVar3 = 0x20 - (0x20 - param_4);
      param_4 = uVar3 & 0x80000000;
      param_1 = (param_1 & 0xffffff | 0x800000) >> (uVar3 & 0xff) | param_4;
      if (uVar4 == 0) {
        uVar3 = 0;
        uVar6 = param_3;
        if ((param_3 & 0x40000000) == 0) {
          return param_1;
        }
      }
      else {
        *puVar1 = *puVar1 | 8;
        uVar3 = uVar4 << 1;
        if (SUB41(uVar4 >> 0x1f,0)) {
          if (uVar3 == 0) {
            bVar7 = (bool)((byte)(param_3 >> 0x1e) & 1);
            uVar4 = ~((int)param_3 >> 0x1f);
            if (!bVar7 || uVar4 == 0) {
              param_1 = param_1 + 1;
            }
            if (!bVar7) {
              param_1 = param_1 & 0xfffffffe;
            }
          }
          else {
            param_1 = param_1 + 1;
          }
        }
        param_4 = uVar4;
        uVar6 = param_3 | 0x40000000;
      }
    }
    else {
      uVar3 = *puVar1 | 8;
      *puVar1 = uVar3;
      if (SBORROW4(param_4 & 0x7fffffff,-0x7fffffe7)) {
        param_1 = param_4 & 0x80000000;
      }
      else {
        uVar4 = param_1 & 0x7fffff;
        param_1 = (param_4 & 0x80000000) + 1;
        if (uVar4 == 0 && (param_3 & 0x80000000) == 0) {
          param_1 = param_4 & 0x80000000;
        }
      }
      uVar6 = 0x40000000;
    }
    if ((uVar6 & 0x10) == 0) {
      param_3 = uVar3;
    }
    puVar1 = (uint *)sub_08022A9C();
    uVar2 = *puVar1;
    if ((uVar6 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
      uVar6 = uVar6 | 0x40000000;
    }
    uVar4 = uVar6 | uVar2 & 0x1c00000;
    *puVar1 = uVar2 | (uVar6 << 1) >> 0x1b;
    bVar7 = (uVar6 & 0xf) != 8;
    if (bVar7) {
      uVar6 = uVar6 & 0x70;
      uVar4 = uVar4 | uVar6 << 3;
    }
    else {
      uVar6 = 0x20000;
    }
    if (!bVar7 && (uVar6 & ~uVar4) == 0) {
      uVar4 = uVar4 | 0xc00000;
    }
    if ((uVar4 & 0x20000000) == 0) {
      if ((uVar4 & 0x10000000) == 0) {
        if ((uVar4 & 0x40000000) != 0) {
          uVar2 = uVar2 & 0x1000;
          goto joined_r0x08028138;
        }
        if ((uVar4 & 0x8000000) == 0) {
          if ((uVar2 & 0x100) == 0) {
            uVar6 = uVar3;
            if ((uVar4 & 0x80) == 0) {
              uVar6 = param_1;
            }
            uVar6 = uVar6 & 0x80000000;
            if ((uVar4 & 0x10) == 0) {
              uVar2 = uVar6 | 0x7fc00000;
            }
            else {
              uVar2 = 0;
              uVar3 = uVar6;
            }
            uVar5 = uVar4 & 0xf;
            if (uVar5 != 9) {
              if (uVar5 != 8) {
                return uVar2;
              }
              if (uVar5 == 8 && (uVar4 & 0x40) == 0) {
                if ((uVar4 & 0x10) == 0) {
                  uVar3 = 0x7fc00000;
                }
                else {
                  uVar3 = 0;
                }
                return uVar3;
              }
              if ((uVar4 & 0x10000) != 0) {
                return 0;
              }
              if ((uVar4 & 0x20) != 0) {
                uVar3 = 0xffffffff;
                if (uVar6 != 0) {
                  uVar3 = 0;
                }
                return uVar3;
              }
              if ((uVar4 & 0x10) == 0) {
                uVar4 = 0x7fffffff;
                uVar3 = uVar2;
              }
              else {
                uVar4 = 0xffffffff;
              }
              if ((uVar3 & 0x80000000) != 0) {
                uVar4 = ~uVar4;
              }
              return uVar4;
            }
            uVar3 = 8;
            goto sub_080286A4;
          }
        }
        else if ((uVar2 & 0x200) == 0) {
          if ((uVar4 & 0x10) == 0) {
            uVar3 = param_1 ^ param_3;
          }
          else {
            uVar3 = uVar3 ^ param_4;
          }
          goto _08028180;
        }
      }
      else if ((uVar2 & 0x400) == 0) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = param_1 & 0x80000000;
        }
        else {
          uVar3 = uVar3 & 0x80000000;
        }
_08028180:
        if ((uVar4 & 0x10) == 0) {
          uVar3 = uVar3 & 0x80000000 | 0x7f800000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
    }
    else {
      uVar2 = uVar2 & 0x800;
joined_r0x08028138:
      if (uVar2 == 0) {
        return param_1;
      }
    }
  }
  else {
    uVar4 = param_3 | 0x20000000;
  }
  uVar3 = sub_08023714(param_1,uVar3,param_3,param_4,uVar4,in_lr,uVar4,in_lr);
  if ((uVar4 & 0xf) != 9) {
    return uVar3;
  }
sub_080286A4:
  if ((uVar4 & 0x100000) == 0) {
    uVar4 = uVar4 & uVar3 << 0x10;
    if (uVar4 != 0) {
      uVar4 = 1;
    }
    return uVar4;
  }
  if ((uVar4 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08022A9C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_0802854C @ 0x0802854C */

uint sub_0802854C(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  puVar1 = (uint *)sub_08022A9C();
  if ((*puVar1 & 0x1000000) != 0) {
    return param_1 & 0x80000000;
  }
  if ((*puVar1 & 0x800) == 0) {
    return param_1;
  }
  uVar2 = param_1 & 0x80000000 | 0x60000000;
  if ((param_1 & 0xff0000) == 0) {
    param_1 = param_1 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_1 & 0xff0000) == 0) {
    param_1 = param_1 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_1 & 0xf00000) == 0) {
    param_1 = param_1 << 4;
    uVar2 = uVar2 + 0xfe000000;
  }
  if ((param_1 & 0xc00000) == 0) {
    param_1 = param_1 << 2;
    uVar2 = uVar2 - 0x1000000;
  }
  if ((param_1 & 0x800000) == 0) {
    param_1 = param_1 << 1;
  }
  else {
    uVar2 = uVar2 + 0x800000;
  }
  uVar3 = param_3 | 0x20000000;
  uVar2 = sub_08023714(param_1 & 0xff7fffff | uVar2,uVar2,param_3,param_4,uVar3,in_lr,uVar3,in_lr);
  if ((uVar3 & 0xf) != 9) {
    return uVar2;
  }
  if ((uVar3 & 0x100000) == 0) {
    uVar3 = uVar3 & uVar2 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((uVar3 & 0xf0000) != 0) {
    if ((uVar2 & 8) == 0) {
      return 2 - uVar2;
    }
    return uVar2;
  }
  uVar3 = uVar2 << 0x1d;
  if ((bool)((byte)(uVar2 >> 3) & 1)) {
    uVar3 = uVar3 | 0x30000000;
  }
  puVar1 = (uint *)sub_08022A9C();
  *puVar1 = *puVar1 & 0xfffffff | uVar3;
  return uVar2;
}


/* sub_08028550 @ 0x08028550 */

uint sub_08028550(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  puVar1 = (uint *)sub_08022A9C();
  if ((*puVar1 & 0x1000000) != 0) {
    return param_1 & 0x80000000;
  }
  if ((*puVar1 & 0x800) == 0) {
    return param_1;
  }
  uVar2 = param_1 & 0x80000000 | 0x60000000;
  if ((param_1 & 0xff0000) == 0) {
    param_1 = param_1 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_1 & 0xff0000) == 0) {
    param_1 = param_1 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_1 & 0xf00000) == 0) {
    param_1 = param_1 << 4;
    uVar2 = uVar2 + 0xfe000000;
  }
  if ((param_1 & 0xc00000) == 0) {
    param_1 = param_1 << 2;
    uVar2 = uVar2 - 0x1000000;
  }
  if ((param_1 & 0x800000) == 0) {
    param_1 = param_1 << 1;
  }
  else {
    uVar2 = uVar2 + 0x800000;
  }
  uVar3 = param_3 | 0x20000000;
  uVar2 = sub_08023714(param_1 & 0xff7fffff | uVar2,uVar2,param_3,param_4,uVar3,in_lr,uVar3,in_lr);
  if ((uVar3 & 0xf) != 9) {
    return uVar2;
  }
  if ((uVar3 & 0x100000) == 0) {
    uVar3 = uVar3 & uVar2 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((uVar3 & 0xf0000) == 0) {
    uVar3 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar3 = uVar3 | 0x30000000;
    }
    puVar1 = (uint *)sub_08022A9C();
    *puVar1 = *puVar1 & 0xfffffff | uVar3;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_08028554 @ 0x08028554 */

uint sub_08028554(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5
                 )

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  puVar1 = (uint *)sub_08022A9C();
  if ((*puVar1 & 0x1000000) != 0) {
    return param_5 & 0x80000000;
  }
  if ((*puVar1 & 0x800) == 0) {
    return param_5;
  }
  uVar2 = param_5 & 0x80000000 | 0x60000000;
  if ((param_5 & 0xff0000) == 0) {
    param_5 = param_5 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_5 & 0xff0000) == 0) {
    param_5 = param_5 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_5 & 0xf00000) == 0) {
    param_5 = param_5 << 4;
    uVar2 = uVar2 + 0xfe000000;
  }
  if ((param_5 & 0xc00000) == 0) {
    param_5 = param_5 << 2;
    uVar2 = uVar2 - 0x1000000;
  }
  if ((param_5 & 0x800000) == 0) {
    param_5 = param_5 << 1;
  }
  else {
    uVar2 = uVar2 + 0x800000;
  }
  uVar2 = sub_08023714(param_5 & 0xff7fffff | uVar2,uVar2,param_3,param_4,param_3 | 0x20000000,in_lr
                      );
  if ((param_3 & 0xf) != 9) {
    return uVar2;
  }
  if ((param_3 & 0x100000) == 0) {
    uVar2 = (param_3 | 0x20000000) & uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if ((param_3 & 0xf0000) == 0) {
    uVar3 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar3 = uVar3 | 0x30000000;
    }
    puVar1 = (uint *)sub_08022A9C();
    *puVar1 = *puVar1 & 0xfffffff | uVar3;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_080285D4 @ 0x080285D4 */

void sub_080285D4(void)

{
  sub_08022D88();
  return;
}


/* sub_080285D8 @ 0x080285D8 */

void sub_080285D8(void)

{
  sub_08022D88();
  return;
}


/* sub_080285DC @ 0x080285DC */

/* WARNING: Removing unreachable block (ram,0x080286bc) */

ulonglong sub_080285DC(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_r12;
  
  uVar5 = in_r12 & 0xf;
  if (uVar5 == 9) {
    if ((in_r12 & 0x100000) == 0) {
      uVar5 = in_r12 & 0x80000;
      if (uVar5 != 0) {
        uVar5 = 1;
      }
      return CONCAT44(param_2,uVar5);
    }
    if ((in_r12 & 0xf0000) == 0) {
      puVar3 = (uint *)sub_08022A9C();
      *puVar3 = *puVar3 & 0xfffffff | 0x30000000;
      return 0x3000000000000008;
    }
    return CONCAT44(in_r12,8) & 0xf0000ffffffff;
  }
  if (uVar5 != 8) {
    return CONCAT44(param_2,param_1);
  }
  if (uVar5 == 8 && (in_r12 & 0x40) == 0) {
    if ((in_r12 & 0x10) == 0) {
      uVar2 = 0x7fc00000;
    }
    else {
      param_2 = 0x7ff80000;
      uVar2 = 0;
    }
    return CONCAT44(param_2,uVar2);
  }
  if ((in_r12 & 0x10000) != 0) {
    return 0;
  }
  if ((in_r12 & 0x20) != 0) {
    uVar2 = 0xffffffff;
    uVar4 = 0xffffffff;
    if ((param_3 & 0x80000000) != 0) {
      uVar2 = 0;
      uVar4 = 0;
    }
    return CONCAT44(uVar4,uVar2);
  }
  if ((in_r12 & 0x10) == 0) {
    uVar1 = 0x7fffffff;
    uVar5 = param_2;
  }
  else {
    uVar5 = 0x7fffffff;
    uVar1 = 0xffffffff;
    param_1 = param_2;
  }
  if ((param_1 & 0x80000000) != 0) {
    uVar1 = ~uVar1;
    uVar5 = ~uVar5;
  }
  return CONCAT44(uVar5,uVar1);
}


/* sub_080285E0 @ 0x080285E0 */

/* WARNING: Removing unreachable block (ram,0x080286bc) */

ulonglong sub_080285E0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_r12;
  
  uVar5 = in_r12 & 0xf;
  if (uVar5 == 9) {
    if ((in_r12 & 0x100000) == 0) {
      uVar5 = in_r12 & 0x80000;
      if (uVar5 != 0) {
        uVar5 = 1;
      }
      return CONCAT44(param_2,uVar5);
    }
    if ((in_r12 & 0xf0000) == 0) {
      puVar3 = (uint *)sub_08022A9C();
      *puVar3 = *puVar3 & 0xfffffff | 0x30000000;
      return 0x3000000000000008;
    }
    return CONCAT44(in_r12,8) & 0xf0000ffffffff;
  }
  if (uVar5 != 8) {
    return CONCAT44(param_2,param_1);
  }
  if (uVar5 == 8 && (in_r12 & 0x40) == 0) {
    if ((in_r12 & 0x10) == 0) {
      uVar2 = 0x7fc00000;
    }
    else {
      param_2 = 0x7ff80000;
      uVar2 = 0;
    }
    return CONCAT44(param_2,uVar2);
  }
  if ((in_r12 & 0x10000) != 0) {
    return 0;
  }
  if ((in_r12 & 0x20) != 0) {
    uVar2 = 0xffffffff;
    uVar4 = 0xffffffff;
    if ((param_3 & 0x80000000) != 0) {
      uVar2 = 0;
      uVar4 = 0;
    }
    return CONCAT44(uVar4,uVar2);
  }
  if ((in_r12 & 0x10) == 0) {
    uVar1 = 0x7fffffff;
    uVar5 = param_2;
  }
  else {
    uVar5 = 0x7fffffff;
    uVar1 = 0xffffffff;
    param_1 = param_2;
  }
  if ((param_1 & 0x80000000) != 0) {
    uVar1 = ~uVar1;
    uVar5 = ~uVar5;
  }
  return CONCAT44(uVar5,uVar1);
}


/* sub_08028678 @ 0x08028678 */

uint sub_08028678(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint in_r12;
  
  uVar1 = sub_08023714();
  if ((in_r12 & 0xf) != 9) {
    return uVar1;
  }
  if ((in_r12 & 0x100000) == 0) {
    uVar1 = in_r12 & uVar1 << 0x10;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar3 = uVar1 << 0x1d;
    if ((bool)((byte)(uVar1 >> 3) & 1)) {
      uVar3 = uVar3 | 0x30000000;
    }
    puVar2 = (uint *)sub_08022A9C();
    *puVar2 = *puVar2 & 0xfffffff | uVar3;
    return uVar1;
  }
  if ((uVar1 & 8) != 0) {
    return uVar1;
  }
  return 2 - uVar1;
}


/* sub_0802867C @ 0x0802867C */

uint sub_0802867C(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint in_r12;
  
  uVar1 = sub_08023714();
  if ((in_r12 & 0xf) != 9) {
    return uVar1;
  }
  if ((in_r12 & 0x100000) == 0) {
    uVar1 = in_r12 & uVar1 << 0x10;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar3 = uVar1 << 0x1d;
    if ((bool)((byte)(uVar1 >> 3) & 1)) {
      uVar3 = uVar3 | 0x30000000;
    }
    puVar2 = (uint *)sub_08022A9C();
    *puVar2 = *puVar2 & 0xfffffff | uVar3;
    return uVar1;
  }
  if ((uVar1 & 8) == 0) {
    return 2 - uVar1;
  }
  return uVar1;
}


/* sub_080286A0 @ 0x080286A0 */

ulonglong sub_080286A0(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint in_r12;
  
  if ((in_r12 & 0x100000) == 0) {
    uVar2 = in_r12 & param_1 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return CONCAT44(param_2,uVar2);
  }
  if ((in_r12 & 0xf0000) != 0) {
    if ((param_1 & 8) != 0) {
      return CONCAT44(in_r12,param_1) & 0xf0000ffffffff;
    }
    return CONCAT44(param_2,2 - param_1);
  }
  uVar2 = param_1 << 0x1d;
  if ((bool)((byte)(param_1 >> 3) & 1)) {
    uVar2 = uVar2 | 0x30000000;
  }
  puVar1 = (uint *)sub_08022A9C();
  *puVar1 = *puVar1 & 0xfffffff | uVar2;
  return CONCAT44(uVar2,param_1);
}


/* sub_080286A4 @ 0x080286A4 */

ulonglong sub_080286A4(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint in_r12;
  
  if ((in_r12 & 0x100000) == 0) {
    uVar2 = in_r12 & param_1 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return CONCAT44(param_2,uVar2);
  }
  if ((in_r12 & 0xf0000) != 0) {
    if ((param_1 & 8) == 0) {
      return CONCAT44(param_2,2 - param_1);
    }
    return CONCAT44(in_r12,param_1) & 0xf0000ffffffff;
  }
  uVar2 = param_1 << 0x1d;
  if ((bool)((byte)(param_1 >> 3) & 1)) {
    uVar2 = uVar2 | 0x30000000;
  }
  puVar1 = (uint *)sub_08022A9C();
  *puVar1 = *puVar1 & 0xfffffff | uVar2;
  return CONCAT44(uVar2,param_1);
}


