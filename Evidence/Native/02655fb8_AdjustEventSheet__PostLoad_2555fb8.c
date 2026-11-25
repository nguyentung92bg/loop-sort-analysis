/* IL2CPP: AdjustEventSheet$$PostLoad
void AdjustEventSheet__PostLoad (AdjustEventSheet_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdjustEventSheet$$PostLoad
   void AdjustEventSheet__PostLoad (AdjustEventSheet_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void AdjustEventSheet__PostLoad_2555fb8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  
  puVar4 = PTR_DAT_049cb160;
  if ((bRam0000000004f4c0a9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb168);
    FUN_021f03f8(PTR_DAT_049cb170);
    FUN_021f03f8(PTR_DAT_049cb178);
    FUN_021f03f8(PTR_DAT_049cb180);
    FUN_021f03f8(PTR_DAT_049be138);
    FUN_021f03f8(PTR_DAT_049cb188);
    FUN_021f03f8(PTR_DAT_049cb190);
    FUN_021f03f8(PTR_DAT_049be150);
    FUN_021f03f8(PTR_DAT_049cb198);
    FUN_021f03f8(PTR_DAT_049cb1a0);
    FUN_021f03f8(PTR_DAT_049cb1a8);
    FUN_021f03f8(PTR_DAT_049cb1b0);
    FUN_021f03f8(PTR_DAT_049cb1b8);
    FUN_021f03f8(PTR_DAT_049cb160);
    FUN_021f03f8(PTR_DAT_049cb1c0);
    FUN_021f03f8(PTR_DAT_049cb1c8);
    FUN_021f03f8(PTR_DAT_049cb1d0);
    FUN_021f03f8(PTR_DAT_049cb1d8);
    FUN_021f03f8(PTR_DAT_049cb1e0);
    FUN_021f03f8(PTR_DAT_049cb1e8);
    FUN_021f03f8(PTR_DAT_049cb1f0);
    FUN_021f03f8(PTR_DAT_049cb1f8);
    bRam0000000004f4c0a9 = 1;
  }
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___PostLoad_2987db4
            (param_1,param_2,*(undefined8 *)puVar4);
  lVar19 = *(long *)(param_1 + 0x48);
  if (lVar19 != 0) {
    lVar17 = *(long *)PTR_DAT_049cb190;
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    uVar13 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200));
    if ((uVar13 & 1) == 0) {
      *(undefined4 *)(lVar19 + 0x18) = 0;
    }
    else {
      iVar12 = *(int *)(lVar19 + 0x18);
      *(undefined4 *)(lVar19 + 0x18) = 0;
      if (0 < iVar12) {
        System_Array__Clear_31229cc(*(undefined8 *)(lVar19 + 0x10),0,iVar12,0);
      }
    }
    puVar11 = PTR_DAT_049cb1f8;
    puVar7 = PTR_DAT_049cb1e8;
    puVar10 = PTR_DAT_049cb1e0;
    puVar8 = PTR_DAT_049cb1b0;
    puVar6 = PTR_DAT_049cb188;
    puVar5 = PTR_DAT_049cb180;
    puVar4 = PTR_DAT_049cb178;
    auStack_90 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (param_1,*(undefined8 *)PTR_DAT_049cb1b8);
    puStack_68 = auStack_90;
    lStack_70 = 0;
    while (uVar13 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                              (auStack_90,*(undefined8 *)puVar4), (uVar13 & 1) != 0) {
      lVar19 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                         (auStack_90,*(undefined8 *)puVar5);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar15 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
      uVar14 = thunk_FUN_0224e54c(lVar19,*(undefined8 *)(*plVar15 + 0x80));
      func_0x04608620(&lStack_80,uVar14,uVar1);
      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar13 = System_String__EndsWith_2f7aea8(lStack_80,*(undefined8 *)puVar7,0);
      if ((uVar13 & 1) != 0) {
        plVar15 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
        uVar14 = thunk_FUN_0224e54c(lVar19,*(undefined8 *)(*plVar15 + 0x80));
        func_0x04608620(&lStack_80,uVar14,uVar1);
        lVar17 = lStack_80;
        plVar15 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
        uVar14 = thunk_FUN_0224e54c(lVar19,*(undefined8 *)(*plVar15 + 0x80));
        func_0x04608620(&lStack_80,uVar14,uVar1);
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar18 = *(long *)puVar7;
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar14 = System_String__Substring_2f7f570
                           (lVar17,0,*(int *)(lStack_80 + 0x10) - *(int *)(lVar18 + 0x10),0);
        uVar13 = System_Int32__TryParse_30fc1b4(uVar14,(long)&uStack_98 + 4,0);
        if ((uVar13 & 1) != 0) {
          lStack_b0 = 0;
          puStack_a8 = (undefined1 *)0x0;
          lVar17 = *(long *)(param_1 + 0x48);
          lStack_80 = CONCAT44(lStack_80._4_4_,uStack_98._4_4_);
          System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
                    (&lStack_b0,&lStack_80,*(undefined8 *)(lVar19 + 0x20),
                     *(undefined8 *)PTR_DAT_049cb1d8);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          puStack_78 = puStack_a8;
          lStack_80 = lStack_b0;
          FUN_02333498(lVar17,&lStack_80,*(undefined8 *)puVar6);
        }
      }
    }
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (auStack_90,*(undefined8 *)PTR_DAT_049cb170);
    puVar9 = PTR_DAT_049cb1d0;
    puVar7 = PTR_DAT_049cb1a0;
    lVar17 = *(long *)(param_1 + 0x48);
    lVar19 = *(long *)PTR_DAT_049cb1d0;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      FUN_021f0574();
      lVar19 = *(long *)puVar9;
    }
    puVar16 = *(undefined8 **)(lVar19 + 0xb8);
    lVar18 = puVar16[1];
    if (lVar18 == 0) {
      if (*(int *)(lVar19 + 0xe4) == 0) {
        FUN_021f0574();
        puVar16 = *(undefined8 **)(*(long *)PTR_DAT_049cb1d0 + 0xb8);
      }
      uVar14 = *puVar16;
      lVar18 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb168);
      System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                (lVar18,uVar14,*(undefined8 *)PTR_DAT_049cb1c0,0);
      plVar15 = (long *)(*(long *)(*(long *)PTR_DAT_049cb1d0 + 0xb8) + 8);
      *plVar15 = lVar18;
      thunk_FUN_021f190c(plVar15,lVar18);
    }
    if (lVar17 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                (lVar17,lVar18,*(undefined8 *)puVar7);
      lVar19 = *(long *)(param_1 + 0x50);
      if (lVar19 != 0) {
        lVar17 = *(long *)PTR_DAT_049cb190;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        uVar13 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200));
        if ((uVar13 & 1) == 0) {
          *(undefined4 *)(lVar19 + 0x18) = 0;
        }
        else {
          iVar12 = *(int *)(lVar19 + 0x18);
          *(undefined4 *)(lVar19 + 0x18) = 0;
          if (0 < iVar12) {
            System_Array__Clear_31229cc(*(undefined8 *)(lVar19 + 0x10),0,iVar12,0);
          }
        }
        auVar20 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                            (param_1,*(undefined8 *)PTR_DAT_049cb1b8);
        puStack_a8 = auStack_90;
        lStack_b0 = 0;
        auStack_90 = auVar20;
        while (uVar13 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                                  (auStack_90,*(undefined8 *)puVar4), (uVar13 & 1) != 0) {
          lVar19 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                             (auStack_90,*(undefined8 *)puVar5);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          plVar15 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
          uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
          uVar14 = thunk_FUN_0224e54c(lVar19,*(undefined8 *)(*plVar15 + 0x80));
          func_0x04608620(&lStack_70,uVar14,uVar1);
          if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar13 = System_String__StartsWith_2f7b870(lStack_70,*(undefined8 *)puVar10,0);
          if ((uVar13 & 1) != 0) {
            plVar15 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
            uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
            uVar14 = thunk_FUN_0224e54c(lVar19,*(undefined8 *)(*plVar15 + 0x80));
            func_0x04608620(&lStack_70,uVar14,uVar1);
            lVar17 = *(long *)puVar10;
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uVar14 = System_String__Substring_2f81c00(lStack_70,*(undefined4 *)(lVar17 + 0x10),0);
            uVar13 = System_Int32__TryParse_30fc1b4(uVar14,&uStack_98,0);
            if ((uVar13 & 1) != 0) {
              lStack_c0 = 0;
              puStack_b8 = (undefined1 *)0x0;
              lVar17 = *(long *)(param_1 + 0x50);
              lStack_70 = CONCAT44(lStack_70._4_4_,(undefined4)uStack_98);
              System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
                        (&lStack_c0,&lStack_70,*(undefined8 *)(lVar19 + 0x20),
                         *(undefined8 *)PTR_DAT_049cb1d8);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              puStack_68 = puStack_b8;
              lStack_70 = lStack_c0;
              FUN_02333498(lVar17,&lStack_70,*(undefined8 *)puVar6);
            }
          }
        }
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_90,*(undefined8 *)PTR_DAT_049cb170);
        puVar10 = PTR_DAT_049cb1f0;
        puVar6 = PTR_DAT_049cb1d0;
        lVar19 = *(long *)PTR_DAT_049cb1d0;
        lVar17 = *(long *)(param_1 + 0x50);
        if (*(int *)(lVar19 + 0xe4) == 0) {
          FUN_021f0574();
          lVar19 = *(long *)puVar6;
        }
        puVar16 = *(undefined8 **)(lVar19 + 0xb8);
        lVar18 = puVar16[2];
        if (lVar18 == 0) {
          if (*(int *)(lVar19 + 0xe4) == 0) {
            FUN_021f0574();
            puVar16 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
          }
          uVar14 = *puVar16;
          lVar18 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb168);
          System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                    (lVar18,uVar14,*(undefined8 *)PTR_DAT_049cb1c8,0);
          plVar15 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
          *plVar15 = lVar18;
          thunk_FUN_021f190c(plVar15,lVar18);
        }
        if (lVar17 != 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                    (lVar17,lVar18,*(undefined8 *)puVar7);
          lVar19 = *(long *)(param_1 + 0x58);
          if (lVar19 != 0) {
            lVar17 = *(long *)PTR_DAT_049be150;
            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
            uVar13 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200))
            ;
            if ((uVar13 & 1) == 0) {
              *(undefined4 *)(lVar19 + 0x18) = 0;
            }
            else {
              iVar12 = *(int *)(lVar19 + 0x18);
              *(undefined4 *)(lVar19 + 0x18) = 0;
              if (0 < iVar12) {
                System_Array__Clear_31229cc(*(undefined8 *)(lVar19 + 0x10),0,iVar12,0);
              }
            }
            auVar20 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                                (param_1,*(undefined8 *)PTR_DAT_049cb1b8);
            puStack_a8 = auStack_90;
            lStack_b0 = 0;
            auStack_90 = auVar20;
            while (uVar13 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                                      (auStack_90,*(undefined8 *)puVar4), (uVar13 & 1) != 0) {
              lVar19 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                                 (auStack_90,*(undefined8 *)puVar5);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              plVar15 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
              uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
              uVar14 = thunk_FUN_0224e54c(lVar19,*(undefined8 *)(*plVar15 + 0x80));
              func_0x04608620(&lStack_c0,uVar14,uVar1);
              if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              iVar12 = System_String__IndexOf_2f82c48(lStack_c0,*(undefined8 *)puVar11,0);
              if (0 < iVar12) {
                plVar15 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
                uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
                uVar14 = thunk_FUN_0224e54c(lVar19,*(undefined8 *)(*plVar15 + 0x80));
                func_0x04608620(&lStack_c0,uVar14,uVar1);
                if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                uVar13 = System_String__EndsWith_2f7aea8(lStack_c0,*(undefined8 *)puVar10,0);
                if ((uVar13 & 1) != 0) {
                  lVar17 = *(long *)puVar11;
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  iVar2 = *(int *)(lVar17 + 0x10);
                  plVar15 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
                  uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
                  uVar14 = thunk_FUN_0224e54c(lVar19,*(undefined8 *)(*plVar15 + 0x80));
                  func_0x04608620(&lStack_c0,uVar14,uVar1);
                  if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  lVar17 = *(long *)puVar10;
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  iVar2 = iVar2 + iVar12;
                  iVar3 = (*(int *)(lStack_c0 + 0x10) - *(int *)(lVar17 + 0x10)) - iVar2;
                  if (0 < iVar3) {
                    plVar15 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
                    uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
                    uVar14 = thunk_FUN_0224e54c(lVar19,*(undefined8 *)(*plVar15 + 0x80));
                    func_0x04608620(&lStack_c0,uVar14,uVar1);
                    if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    uVar14 = System_String__Substring_2f7f570(lStack_c0,0,iVar12,0);
                    uVar13 = System_Int32__TryParse_30fc1b4(uVar14,&uStack_a0,0);
                    if ((uVar13 & 1) != 0) {
                      plVar15 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
                      uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
                      uVar14 = thunk_FUN_0224e54c(lVar19,*(undefined8 *)(*plVar15 + 0x80));
                      func_0x04608620(&lStack_c0,uVar14,uVar1);
                      if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                      uVar14 = System_String__Substring_2f7f570(lStack_c0,iVar2,iVar3,0);
                      uVar13 = System_Int32__TryParse_30fc1b4(uVar14,(long)&uStack_a0 + 4,0);
                      if ((uVar13 & 1) != 0) {
                        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        lStack_c0 = CONCAT44(lStack_c0._4_4_,uStack_a0._4_4_);
                        uVar13 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                                           (*(long *)(param_1 + 0x58),&lStack_c0,
                                            *(undefined8 *)PTR_DAT_049cb198);
                        if ((uVar13 & 1) == 0) {
                          if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_021f06a0();
                          }
                          lStack_c0 = CONCAT44(lStack_c0._4_4_,uStack_a0._4_4_);
                          FUN_02333498(*(long *)(param_1 + 0x58),&lStack_c0,
                                       *(undefined8 *)PTR_DAT_049be138);
                        }
                      }
                    }
                  }
                }
              }
            }
            Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                      (auStack_90,*(undefined8 *)PTR_DAT_049cb170);
            if (*(long *)(param_1 + 0x58) != 0) {
              System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0988
                        (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_049cb1a8);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

