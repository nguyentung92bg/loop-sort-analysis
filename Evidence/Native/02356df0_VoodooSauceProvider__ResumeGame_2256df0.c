/* IL2CPP: VoodooSauceProvider$$ResumeGame
void VoodooSauceProvider__ResumeGame (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x04595740) */
/* WARNING: Removing unreachable block (ram,0x04595744) */
/* WARNING: Removing unreachable block (ram,0x0459574c) */
/* WARNING: Removing unreachable block (ram,0x04595758) */
/* WARNING: Removing unreachable block (ram,0x045b58c4) */
/* WARNING: Removing unreachable block (ram,0x045b5908) */
/* WARNING: Removing unreachable block (ram,0x045b593c) */
/* WARNING: Removing unreachable block (ram,0x045b5924) */
/* WARNING: Removing unreachable block (ram,0x045b5940) */
/* WARNING: Removing unreachable block (ram,0x045b5958) */
/* WARNING: Removing unreachable block (ram,0x045b5964) */
/* WARNING: Removing unreachable block (ram,0x045b59a4) */
/* WARNING: Removing unreachable block (ram,0x045b59a8) */
/* WARNING: Removing unreachable block (ram,0x045b59c0) */
/* WARNING: Removing unreachable block (ram,0x045b59c8) */
/* WARNING: Removing unreachable block (ram,0x045b5a08) */
/* WARNING: Removing unreachable block (ram,0x045b5a0c) */
/* WARNING: Removing unreachable block (ram,0x045b5a3c) */
/* IL2CPP: VoodooSauceProvider$$ResumeGame
   void VoodooSauceProvider__ResumeGame (VoodooSauceProvider_o* __this, const MethodInfo* method);
    */

void VoodooSauceProvider__ResumeGame_2256df0(void)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bbd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bbd = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b62a0;
  if ((bRam0000000004f5f47b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62a0,0);
    bRam0000000004f5f47b = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b62a0;
  uVar11 = 0;
  if ((bRam0000000004f60110 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62a0,0);
    bRam0000000004f60110 = 1;
    uVar11 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
    uVar11 = extraout_x1_00;
  }
  puVar3 = PTR_DAT_049b62a0;
  if ((bRam0000000004f60114 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62a0,uVar11);
    bRam0000000004f60114 = 1;
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04a6d3b8;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x3b0);
  if (lVar6 != 0) {
    if ((bRam0000000004f602ca & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b5fb0,0);
      FUN_021f03f8(PTR_DAT_04a6d3b8);
      FUN_021f03f8(PTR_DAT_049d04a8);
      FUN_021f03f8(PTR_DAT_049d0608);
      FUN_021f03f8(PTR_DAT_04a6c498);
      FUN_021f03f8(PTR_DAT_049b7ec0);
      FUN_021f03f8(PTR_DAT_04a6d3c0);
      FUN_021f03f8(PTR_DAT_049d0578);
      FUN_021f03f8(PTR_DAT_049b6128);
      bRam0000000004f602ca = 1;
    }
    lVar14 = *(long *)puVar3;
    auStack_48[0] = *(undefined8 *)(lVar6 + 0x44);
    uStack_60 = 0;
    uStack_58 = 0;
    lVar12 = *(long *)(lVar14 + 0x20);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar13 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718(lVar12);
      lVar13 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar13 + 0x135);
    }
    puVar3 = PTR_DAT_04a6d3c0;
    uVar1 = *(undefined4 *)(**(long **)(lVar12 + 0xc0) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar13 = FUN_02229718(lVar13);
    }
    uVar11 = thunk_FUN_0224e54c(auStack_48,
                                *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x20);
    func_0x04608620(&uStack_90,uVar11,uVar1);
    lVar13 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02229718();
    }
    pcVar7 = (char *)thunk_FUN_0224e54c(auStack_48,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80));
    puVar3 = PTR_DAT_049b7ec0;
    if (((int)uStack_90 == 2) && (*pcVar7 != '\0')) {
      lVar13 = *(long *)(*(long *)PTR_DAT_049b7ec0 + 0x20);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02229718();
      }
      pcVar7 = (char *)thunk_FUN_0224e54c(lVar6 + 0x20,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80));
      if (*pcVar7 != '\0') {
        uStack_90 = 0;
        uStack_38 = (ulong)uStack_38._4_4_ << 0x20;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_90,&uStack_38,*(undefined8 *)PTR_DAT_04a6c498);
        puVar4 = PTR_DAT_049b5fb0;
        lVar13 = *(long *)PTR_DAT_049b5fb0;
        *(undefined8 *)(lVar6 + 0x44) = uStack_90;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar11 = System_DateTime__get_Now_30dd928(0);
        uStack_58 = *(undefined8 *)(lVar6 + 0x28);
        uStack_60 = *(undefined8 *)(lVar6 + 0x20);
        lVar13 = *(long *)(*(long *)puVar3 + 0x20);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_02229718();
        }
        pcVar7 = (char *)thunk_FUN_0224e54c(&uStack_60,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80));
        puVar5 = PTR_DAT_049d04a8;
        if (*pcVar7 != '\0') {
          lVar14 = *(long *)PTR_DAT_049d04a8;
          lVar12 = *(long *)(lVar14 + 0x20);
          uVar2 = *(ushort *)(lVar12 + 0x135);
          lVar13 = lVar12;
          if ((uVar2 & 1) == 0) {
            lVar12 = FUN_02229718(lVar12);
            lVar13 = *(long *)(lVar14 + 0x20);
            uVar2 = *(ushort *)(lVar13 + 0x135);
          }
          uVar1 = *(undefined4 *)(**(long **)(lVar12 + 0xc0) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar13 = FUN_02229718(lVar13);
          }
          uVar8 = thunk_FUN_0224e54c(&uStack_60,
                                     *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) +
                                     0x20);
          func_0x04608620(&uStack_90,uVar8,uVar1);
          uVar8 = uStack_90;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar9 = System_DateTime__op_GreaterThan_30df8ac(uVar11,uVar8,0);
          if ((uVar9 & 1) != 0) {
            uStack_58 = *(undefined8 *)(lVar6 + 0x28);
            uStack_60 = *(undefined8 *)(lVar6 + 0x20);
            uVar8 = *(undefined8 *)(lVar6 + 0x30);
            lVar13 = *(long *)(*(long *)puVar3 + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_02229718();
            }
            pcVar7 = (char *)thunk_FUN_0224e54c(&uStack_60,
                                                *(undefined8 *)
                                                 (*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80));
            if (*pcVar7 == '\0') {
              uStack_80 = 0;
              uStack_78 = 0;
            }
            else {
              lVar14 = *(long *)puVar5;
              lVar12 = *(long *)(lVar14 + 0x20);
              uVar2 = *(ushort *)(lVar12 + 0x135);
              lVar13 = lVar12;
              if ((uVar2 & 1) == 0) {
                lVar12 = FUN_02229718(lVar12);
                lVar13 = *(long *)(lVar14 + 0x20);
                uVar2 = *(ushort *)(lVar13 + 0x135);
              }
              uVar1 = *(undefined4 *)(**(long **)(lVar12 + 0xc0) + 0xfc);
              if ((uVar2 & 1) == 0) {
                lVar13 = FUN_02229718(lVar13);
              }
              uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                          *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80)
                                          + 0x20);
              func_0x04608620(&uStack_90,uVar10,uVar1);
              uVar10 = uStack_90;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uStack_38 = System_DateTime__op_Subtraction_30df69c(uVar11,uVar10,0);
              uStack_90 = 0;
              uStack_88 = 0;
              System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                        (&uStack_90,&uStack_38,*(undefined8 *)PTR_DAT_049d0608);
              uStack_78 = uStack_88;
              uStack_80 = uStack_90;
            }
            uStack_68 = uStack_78;
            uStack_70 = uStack_80;
            System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                      (&uStack_70,&uStack_90,*(undefined8 *)PTR_DAT_049d0578);
            uVar11 = uStack_90;
            if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar11 = System_TimeSpan__op_Addition_31176f0(uVar8,uVar11,0);
            *(undefined8 *)(lVar6 + 0x30) = uVar11;
          }
        }
      }
    }
    return;
  }
  return;
}

