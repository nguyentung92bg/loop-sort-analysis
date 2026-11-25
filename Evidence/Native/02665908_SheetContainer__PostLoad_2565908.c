/* IL2CPP: SheetContainer$$PostLoad
void SheetContainer__PostLoad (SheetContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0265f644) */
/* WARNING: Removing unreachable block (ram,0x0265f648) */
/* WARNING: Removing unreachable block (ram,0x0265f854) */
/* WARNING: Removing unreachable block (ram,0x0265f6a8) */
/* IL2CPP: SheetContainer$$PostLoad
   void SheetContainer__PostLoad (SheetContainer_o* __this, const MethodInfo* method); */

void SheetContainer__PostLoad_2565908(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined4 uStack_64;
  
  Cathei_BakingSheet_SheetContainerBase__PostLoad_22de00c(param_1,0);
  puVar7 = PTR_DAT_049cb860;
  lVar16 = *(long *)(param_1 + 0x38);
  if ((lVar16 == 0) || (lVar17 = *(long *)(param_1 + 0x60), lVar17 == 0)) {
    return;
  }
  if ((bRam0000000004f4c10a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb868);
    FUN_021f03f8(PTR_DAT_049c8cb0);
    FUN_021f03f8(PTR_DAT_049cb870);
    FUN_021f03f8(PTR_DAT_049cb878);
    FUN_021f03f8(PTR_DAT_049c8cb8);
    FUN_021f03f8(PTR_DAT_049cb880);
    FUN_021f03f8(PTR_DAT_049cb888);
    FUN_021f03f8(PTR_DAT_049cb890);
    FUN_021f03f8(PTR_DAT_049c8cc0);
    FUN_021f03f8(PTR_DAT_049cb898);
    FUN_021f03f8(PTR_DAT_049cb8a0);
    FUN_021f03f8(PTR_DAT_049cb8a8);
    FUN_021f03f8(PTR_DAT_049c8cc8);
    FUN_021f03f8(PTR_DAT_049cb8b0);
    FUN_021f03f8(PTR_DAT_049c7740);
    FUN_021f03f8(PTR_DAT_049c2788);
    FUN_021f03f8(PTR_DAT_049cb8b8);
    FUN_021f03f8(PTR_DAT_049cb860);
    FUN_021f03f8(PTR_DAT_049cb8c0);
    FUN_021f03f8(PTR_DAT_049cb8c8);
    bRam0000000004f4c10a = 1;
  }
  puVar11 = PTR_DAT_049cb8b8;
  puVar10 = PTR_DAT_049cb898;
  puVar9 = PTR_DAT_049cb888;
  puVar8 = PTR_DAT_049cb880;
  puVar6 = PTR_DAT_049c8cc0;
  puVar5 = PTR_DAT_049c8cb8;
  puVar4 = PTR_DAT_049c7740;
  puVar3 = PTR_DAT_049c2788;
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  auStack_88._8_8_ = 0;
  uStack_90 = 0;
  auStack_88._0_8_ = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  auStack_78 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                         (lVar16,*(undefined8 *)puVar7);
  puStack_100 = (undefined8 *)auStack_78;
  uStack_108 = 0;
  while( true ) {
    uVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                       (auStack_78,*(undefined8 *)puVar9);
    if ((uVar12 & 1) == 0) break;
    lVar13 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                       (auStack_78,*(undefined8 *)puVar10);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined4 *)(lVar13 + 0x1c) = 0;
  }
  Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
            (auStack_78,*(undefined8 *)PTR_DAT_049cb870);
  if (lVar17 != 0) {
    auStack_88 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar17,*(undefined8 *)puVar11);
    puStack_e8 = auStack_88;
    iVar19 = 0;
    lStack_f0 = 0;
    while( true ) {
      uVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                         (auStack_88,*(undefined8 *)puVar8);
      lVar17 = lStack_f0;
      if ((uVar12 & 1) == 0) break;
      lVar17 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                         (auStack_88,*(undefined8 *)PTR_DAT_049cb890);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_98 = *(undefined8 *)(lVar17 + 0x58);
      uStack_a0 = *(undefined8 *)(lVar17 + 0x50);
      uStack_90 = *(undefined8 *)(lVar17 + 0x60);
      lVar13 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                         (&uStack_a0,*(undefined8 *)puVar4);
      iVar19 = iVar19 + 1;
      if ((lVar13 != 0) && (*(char *)(lVar13 + 0x24) == '\0')) {
        FeatureSheet__MarkUnlocked_255f994(lVar16,0x14,iVar19);
      }
      uStack_b8 = *(undefined8 *)(lVar17 + 0x40);
      uStack_c0 = *(undefined8 *)(lVar17 + 0x38);
      uStack_b0 = *(undefined8 *)(lVar17 + 0x48);
      lVar17 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                         (&uStack_c0,*(undefined8 *)puVar3);
      if (lVar17 != 0) {
        if (*(long *)(lVar17 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(lVar17 + 0x58),&uStack_108,*(undefined8 *)PTR_DAT_049c8cc8);
        uStack_d0 = uStack_f8;
        puStack_d8 = puStack_100;
        uStack_e0 = uStack_108;
        uStack_108 = 0;
        puStack_100 = &uStack_e0;
        while( true ) {
          uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_e0,*(undefined8 *)puVar5);
          if ((uVar12 & 1) == 0) break;
          lVar20 = *(long *)puVar6;
          lVar13 = *(long *)(lVar20 + 0x20);
          uVar2 = *(ushort *)(lVar13 + 0x135);
          lVar17 = lVar13;
          if ((uVar2 & 1) == 0) {
            lVar17 = FUN_02229718();
            lVar13 = *(long *)(lVar20 + 0x20);
            uVar2 = *(ushort *)(lVar13 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar13 = FUN_02229718();
          }
          uVar14 = thunk_FUN_0224e54c(&uStack_e0,
                                      *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&uStack_64,uVar14,uVar1);
          FeatureSheet__MarkUnlocked_255f994(lVar16,uStack_64,iVar19);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_e0,*(undefined8 *)PTR_DAT_049c8cb0);
      }
    }
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (puStack_e8,*(undefined8 *)PTR_DAT_049cb878);
    if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar17);
    }
    lVar17 = *(long *)(lVar16 + 0x48);
    if (lVar17 != 0) {
      lVar13 = *(long *)PTR_DAT_049cb8a8;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      uVar12 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
      puVar7 = PTR_DAT_049cb860;
      if ((uVar12 & 1) == 0) {
        *(undefined4 *)(lVar17 + 0x18) = 0;
      }
      else {
        iVar19 = *(int *)(lVar17 + 0x18);
        *(undefined4 *)(lVar17 + 0x18) = 0;
        if (0 < iVar19) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar17 + 0x10),0,iVar19,0);
        }
      }
      auVar21 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                          (lVar16,*(undefined8 *)puVar7);
      puVar7 = PTR_DAT_049cb8a0;
      puStack_100 = (undefined8 *)auStack_78;
      uStack_108 = 0;
      auStack_78 = auVar21;
      while( true ) {
        uVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                           (auStack_78,*(undefined8 *)puVar9);
        if ((uVar12 & 1) == 0) break;
        uVar14 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                           (auStack_78,*(undefined8 *)puVar10);
        if (*(long *)(lVar16 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0(0,uVar14);
        }
        FUN_02333498(*(long *)(lVar16 + 0x48),uVar14,*(undefined8 *)puVar7);
      }
      Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                (auStack_78,*(undefined8 *)PTR_DAT_049cb870);
      puVar7 = PTR_DAT_049cb8c8;
      lVar17 = *(long *)(lVar16 + 0x48);
      lVar16 = *(long *)PTR_DAT_049cb8c8;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        FUN_021f0574();
        lVar16 = *(long *)puVar7;
      }
      puVar18 = *(undefined8 **)(lVar16 + 0xb8);
      lVar13 = puVar18[1];
      if (lVar13 == 0) {
        if (*(int *)(lVar16 + 0xe4) == 0) {
          FUN_021f0574();
          puVar18 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
        }
        uVar14 = *puVar18;
        lVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb868);
        System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                  (lVar13,uVar14,*(undefined8 *)PTR_DAT_049cb8c0,0);
        plVar15 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
        *plVar15 = lVar13;
        thunk_FUN_021f190c(plVar15,lVar13);
      }
      if (lVar17 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                  (lVar17,lVar13,*(undefined8 *)PTR_DAT_049cb8b0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

