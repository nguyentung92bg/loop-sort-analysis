/* IL2CPP: HomeSceneSplash$$.cctor
void HomeSceneSplash___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneSplash$$.cctor
   void HomeSceneSplash___cctor (const MethodInfo* method); */

void HomeSceneSplash___cctor_24281d8(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_049bc298;
  if ((bRam0000000004f4b7a1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3330);
    FUN_021f03f8(PTR_DAT_049bc298);
    bRam0000000004f4b7a1 = 1;
  }
  lVar4 = FUN_021f04e4(*(undefined8 *)puVar2,4);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if ((uVar1 != 0) && (*(undefined8 *)(lVar4 + 0x20) = 0, uVar1 != 1)) {
      *(undefined8 *)(lVar4 + 0x28) = _UNK_013a8000;
      if (2 < uVar1) {
        *(undefined8 *)(lVar4 + 0x30) = _UNK_013a7a48;
        puVar3 = PTR_DAT_049c3330;
        if (uVar1 != 3) {
          *(undefined8 *)(lVar4 + 0x38) = _UNK_013a78d8;
          **(long **)(*(long *)puVar3 + 0xb8) = lVar4;
          thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar3 + 0xb8));
          lVar4 = FUN_021f04e4(*(undefined8 *)puVar2,3);
          if (lVar4 == 0) goto LAB_025282f0;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if ((uVar1 != 0) && (*(undefined8 *)(lVar4 + 0x20) = 0, uVar1 != 1)) {
            *(undefined8 *)(lVar4 + 0x28) = _UNK_013a7b48;
            if (2 < uVar1) {
              uVar6 = NEON_fmov(0x3f800000,4);
              *(undefined8 *)(lVar4 + 0x30) = uVar6;
              plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
              *plVar5 = lVar4;
              if (iRam0000000005174518 != 0) {
                FUN_023118d0(1L << ((ulong)plVar5 >> 0xc & 0x3f),
                             ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
              }
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
LAB_025282f0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

