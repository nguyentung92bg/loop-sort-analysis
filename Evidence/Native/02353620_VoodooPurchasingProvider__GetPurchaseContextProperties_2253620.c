/* IL2CPP: VoodooPurchasingProvider$$GetPurchaseContextProperties
System_Collections_Generic_Dictionary_string__object__o* VoodooPurchasingProvider__GetPurchaseContextProperties (VoodooPurchasingProvider_o* __this, PurchaseRequest_o request, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$GetPurchaseContextProperties
   System_Collections_Generic_Dictionary_string__object__o*
   VoodooPurchasingProvider__GetPurchaseContextProperties (VoodooPurchasingProvider_o* __this,
   PurchaseRequest_o request, const MethodInfo* method); */

long VoodooPurchasingProvider__GetPurchaseContextProperties_2253620(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  double dVar17;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined1 auStack_d8 [16];
  int iStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [72];
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f49bae & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049b60f8);
    FUN_021f03f8(PTR_DAT_049b6100);
    FUN_021f03f8(PTR_DAT_049b6108);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b6118);
    FUN_021f03f8(PTR_DAT_049b6120);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b6130);
    FUN_021f03f8(PTR_DAT_049b6138);
    FUN_021f03f8(PTR_DAT_049b6140);
    FUN_021f03f8(PTR_DAT_049b6148);
    FUN_021f03f8(PTR_DAT_049b6150);
    FUN_021f03f8(PTR_DAT_049b6158);
    FUN_021f03f8(PTR_DAT_049b6160);
    FUN_021f03f8(PTR_DAT_049b6168);
    bRam0000000004f49bae = 1;
  }
  puVar5 = PTR_DAT_049b6128;
  uStack_c0 = 0;
  iStack_c4 = 0;
  auStack_d8._0_8_ = 0;
  auStack_d8._8_8_ = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar11 = LifeModule__GetUnlimitedTime_2546498(*(long *)(param_1 + 0x20),0);
    lVar15 = *(long *)puVar5;
    uStack_c0 = uVar11;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      FUN_021f0574(lVar15);
      lVar15 = *(long *)puVar5;
    }
    puVar4 = PTR_DAT_049b4340;
    puVar3 = PTR_DAT_049b4338;
    uVar12 = System_TimeSpan__op_GreaterThan_3117960(uVar11,**(undefined8 **)(lVar15 + 0xb8),0);
    dVar17 = 0.0;
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      dVar17 = (double)System_TimeSpan__get_TotalSeconds_3116bf4(&uStack_c0,0);
    }
    iStack_c4 = -0x80000000;
    if (dVar17 != INFINITY) {
      iStack_c4 = (int)dVar17;
    }
    lVar15 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
              (lVar15,*(undefined8 *)puVar3);
    puVar8 = PTR_DAT_049b6168;
    puVar7 = PTR_DAT_049b6158;
    puVar6 = PTR_DAT_049b6148;
    puVar4 = PTR_DAT_049b6138;
    puVar1 = (undefined8 *)PTR_DAT_049b6130;
    puVar3 = PTR_DAT_049b5310;
    puVar5 = PTR_DAT_049b4358;
    if (lVar15 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar15,*(undefined8 *)PTR_DAT_049b6140,*(undefined8 *)PTR_DAT_049b6150,
                 *(undefined8 *)PTR_DAT_049b4358);
      lVar13 = *(long *)puVar3;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        FUN_021f0574();
        lVar13 = *(long *)puVar3;
      }
      uVar10 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar13 + 0xb8) + 0xe0,0);
      puVar3 = PTR_DAT_049b3bd0;
      uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar10);
      uVar11 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_e8);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar15,*(undefined8 *)puVar7,uVar11,*(undefined8 *)puVar5);
      uVar11 = System_Int32__ToString_30fbaa0(&iStack_c4,0);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar15,*(undefined8 *)puVar6,uVar11,*(undefined8 *)puVar5);
      func_0x04608620(auStack_b0,param_2,0x48);
      uVar11 = VoodooPurchasingProvider__GetProductMaster_22549f8(param_1,auStack_b0);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar15,*(undefined8 *)puVar4,uVar11,*(undefined8 *)puVar5);
      uVar12 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_2 + 0x40),0);
      if ((uVar12 & 1) == 0) {
        puVar1 = (undefined8 *)(param_2 + 0x40);
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar15,*(undefined8 *)puVar8,*puVar1,*(undefined8 *)puVar5);
      puVar9 = PTR_DAT_049b6160;
      puVar8 = PTR_DAT_049b6118;
      puVar7 = PTR_DAT_049b6110;
      puVar6 = PTR_DAT_049b6108;
      puVar4 = PTR_DAT_049b6100;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x40), lVar13 != 0)) {
        auStack_d8 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                               (lVar13,*(undefined8 *)PTR_DAT_049b6120);
        puStack_e0 = auStack_d8;
        uStack_e8 = 0;
        while( true ) {
          uVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                             (auStack_d8,*(undefined8 *)puVar4);
          if ((uVar12 & 1) == 0) break;
          lVar13 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                             (auStack_d8,*(undefined8 *)puVar6);
          if (lVar13 == 0) {
            if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_02353b4c;
          }
          plVar16 = *(long **)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0);
          uVar10 = *(undefined4 *)(plVar16[1] + 0xfc);
          uVar11 = thunk_FUN_0224e54c(lVar13,*(undefined8 *)(*plVar16 + 0x80));
          func_0x04608620(&uStack_b4,uVar11,uVar10);
          uVar10 = uStack_b4;
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar11 = Extensions__ToEconomyItem_24e5d5c(uVar10,0);
          uVar11 = Extensions__ToAnalyticsName_24e74e4(uVar11,0);
          uVar11 = System_String__Concat_2f72b28(uVar11,*(undefined8 *)puVar9,0);
          uStack_b4 = BoosterSheet_Booster__GetCount_2559e80(lVar13,0);
          uVar14 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_b4);
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                    (lVar15,uVar11,uVar14,*(undefined8 *)puVar5);
        }
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_d8,*(undefined8 *)PTR_DAT_049b60f8);
        if (*(long *)(lVar2 + 0x28) == lStack_68) {
          return lVar15;
        }
        goto LAB_02353b4c;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02353b4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

