/* IL2CPP: HomeSceneFog$$.cctor
void HomeSceneFog___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFog$$.cctor
   void HomeSceneFog___cctor (const MethodInfo* method); */

void HomeSceneFog___cctor_2430344(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_049bc298;
  if ((bRam0000000004f4b7d6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3020);
    FUN_021f03f8(PTR_DAT_049bc298);
    bRam0000000004f4b7d6 = 1;
  }
  lVar3 = FUN_021f04e4(*(undefined8 *)puVar2,4);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((uVar1 != 0) && (*(undefined8 *)(lVar3 + 0x20) = 0, uVar1 != 1)) {
      *(undefined8 *)(lVar3 + 0x28) = _UNK_013a8670;
      if (2 < uVar1) {
        *(undefined8 *)(lVar3 + 0x30) = _UNK_013a7658;
        puVar2 = PTR_DAT_049c3020;
        if (uVar1 != 3) {
          *(undefined8 *)(lVar3 + 0x38) = _UNK_013a78d8;
          **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
          uVar4 = *(ulong *)(*(long *)puVar2 + 0xb8);
          if (iRam0000000005174518 != 0) {
            FUN_023118d0(1L << (uVar4 >> 0xc & 0x3f),(uVar4 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

