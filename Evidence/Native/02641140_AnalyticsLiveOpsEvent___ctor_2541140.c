/* IL2CPP: AnalyticsLiveOpsEvent$$.ctor
void AnalyticsLiveOpsEvent___ctor (AnalyticsLiveOpsEvent_o __this, System_String_o* eventName, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$.ctor
   void AnalyticsLiveOpsEvent___ctor (AnalyticsLiveOpsEvent_o __this, System_String_o* eventName,
   int32_t liveOps, const MethodInfo* method); */

void AnalyticsLiveOpsEvent___ctor_2541140(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_049b5228;
  if ((bRam0000000004f4bfcd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b62c0);
    FUN_021f03f8(PTR_DAT_049ca590);
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b5f78);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049ca510);
    FUN_021f03f8(PTR_DAT_049ca598);
    FUN_021f03f8(PTR_DAT_049ca5a0);
    FUN_021f03f8(PTR_DAT_049ca5a8);
    FUN_021f03f8(PTR_DAT_049ca5b0);
    FUN_021f03f8(PTR_DAT_049b4e50);
    FUN_021f03f8(PTR_DAT_049c9360);
    FUN_021f03f8(PTR_DAT_049ca5b8);
    FUN_021f03f8(PTR_DAT_049b4bd0);
    FUN_021f03f8(PTR_DAT_049c9118);
    FUN_021f03f8(PTR_DAT_049ca5c0);
    FUN_021f03f8(PTR_DAT_049ca5c8);
    bRam0000000004f4bfcd = 1;
  }
  puVar2 = PTR_DAT_049b5f80;
  uStack_80 = 0;
  uStack_78 = 0;
  iStack_b4 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  *param_1 = param_2;
  thunk_FUN_021f190c(param_1,param_2);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar8 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
  if (lVar8 == 0) goto LAB_026416e4;
  FUN_0235c744(*(undefined8 *)(lVar8 + 0x50),&uStack_70,*(undefined8 *)PTR_DAT_049b5f78);
  if ((CONCAT44(uStack_6c,uStack_70) == 0) ||
     (lVar8 = *(long *)(CONCAT44(uStack_6c,uStack_70) + 0x88), lVar8 == 0)) goto LAB_026416e4;
  uStack_70 = param_3;
  lVar8 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                    (lVar8,&uStack_70,*(undefined8 *)PTR_DAT_049c2c68);
  puVar4 = PTR_DAT_049b6110;
  if (lVar8 == 0) goto LAB_026416e4;
  uStack_a8 = *(undefined8 *)(lVar8 + 0x70);
  uStack_b0 = *(undefined8 *)(lVar8 + 0x68);
  uStack_98 = *(undefined8 *)(lVar8 + 0x80);
  uStack_a0 = *(undefined8 *)(lVar8 + 0x78);
  uStack_88 = *(undefined8 *)(lVar8 + 0x90);
  uStack_90 = *(undefined8 *)(lVar8 + 0x88);
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (&uStack_b0,&uStack_70,*(undefined8 *)PTR_DAT_049b5fa8);
  uStack_80 = CONCAT44(uStack_6c,uStack_70);
  uStack_78 = uStack_68;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar9 = (long *)Extensions__ToClassInstance_24e79d0(param_3,0);
  puVar6 = PTR_DAT_049c9360;
  puVar3 = PTR_DAT_049b4340;
  puVar2 = PTR_DAT_049b4338;
  if (plVar9 == (long *)0x0) goto LAB_026416e4;
  lVar10 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
  plVar9 = param_1 + 2;
  *plVar9 = lVar10;
  thunk_FUN_021f190c(plVar9,lVar10);
  puVar1 = PTR_DAT_049b3bd0;
  if (*plVar9 == 0) {
LAB_0264142c:
    puVar5 = PTR_DAT_049b5050;
    if (*(int *)(*(long *)PTR_DAT_049b44e8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar7 = PTR_DAT_049ca5a8;
    uVar11 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar5);
    }
    plVar12 = (long *)System_DateTimeOffset__ToString_30e3768
                                (&uStack_80,*(undefined8 *)puVar7,uVar11,0);
  }
  else {
    System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be048
              (*plVar9,*(undefined8 *)puVar6,&uStack_70,*(undefined8 *)PTR_DAT_049ca590);
    plVar12 = (long *)CONCAT44(uStack_6c,uStack_70);
    if ((plVar12 == (long *)0x0) || (*plVar12 != *(long *)(puVar1 + 0x90))) goto LAB_0264142c;
  }
  lVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (lVar10,*(undefined8 *)puVar2);
  plVar14 = param_1 + 1;
  *plVar14 = lVar10;
  thunk_FUN_021f190c(plVar14,lVar10);
  lVar10 = *plVar14;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar11 = Extensions__ToAnalyticsName_24e78ac(param_3,0);
  puVar2 = PTR_DAT_049b5310;
  puVar4 = PTR_DAT_049b4df8;
  if (lVar10 == 0) goto LAB_026416e4;
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
            (lVar10,*(undefined8 *)PTR_DAT_049b4bd0,uVar11,*(undefined8 *)PTR_DAT_049b4df8);
  lVar10 = *(long *)puVar2;
  lVar15 = *plVar14;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
    lVar10 = *(long *)puVar2;
  }
  iStack_b4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar10 + 0xb8) + 0x60,0);
  iStack_b4 = iStack_b4 + 1;
  uVar11 = System_Int32__ToString_30fbaa0(&iStack_b4,0);
  if (lVar15 == 0) goto LAB_026416e4;
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
            (lVar15,*(undefined8 *)PTR_DAT_049ca510,uVar11,*(undefined8 *)puVar4);
  uStack_d8 = *(undefined8 *)(lVar8 + 0xd0);
  uStack_e0 = *(undefined8 *)(lVar8 + 200);
  uStack_c8 = *(undefined8 *)(lVar8 + 0xe0);
  uStack_d0 = *(undefined8 *)(lVar8 + 0xd8);
  lVar8 = *plVar14;
  iStack_b4 = CloudPrefsInt__get_Value_24e99c0(&uStack_e0,0);
  uVar11 = System_Int32__ToString_30fbaa0(&iStack_b4,0);
  puVar2 = PTR_DAT_049ca5a0;
  if (lVar8 == 0) goto LAB_026416e4;
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
            (lVar8,*(undefined8 *)PTR_DAT_049ca5c0,uVar11,*(undefined8 *)puVar4);
  lVar8 = *plVar14;
  uVar11 = System_String__Concat_2f72b28(*(undefined8 *)puVar2,plVar12,0);
  puVar2 = PTR_DAT_049c9118;
  if (lVar8 == 0) goto LAB_026416e4;
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
            (lVar8,*(undefined8 *)puVar6,uVar11,*(undefined8 *)puVar4);
  puVar3 = PTR_DAT_049b62c0;
  lVar10 = *plVar9;
  lVar8 = *plVar14;
  uVar11 = *(undefined8 *)puVar2;
  if (lVar10 == 0) {
LAB_0264162c:
    uStack_70 = 0;
    lVar10 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_70);
  }
  else {
    uStack_e4 = 0;
    uVar13 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_e4);
    System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
              (lVar10,*(undefined8 *)puVar2,uVar13,&uStack_70,*(undefined8 *)puVar3);
    lVar10 = CONCAT44(uStack_6c,uStack_70);
    if (lVar10 == 0) goto LAB_0264162c;
  }
  if (lVar8 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar8,uVar11,lVar10,*(undefined8 *)puVar4);
    if (*plVar14 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*plVar14,*(undefined8 *)PTR_DAT_049ca598,*(undefined8 *)PTR_DAT_049ca5c8,
                 *(undefined8 *)puVar4);
      puVar2 = PTR_DAT_049b4e50;
      if (*plVar14 != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (*plVar14,*(undefined8 *)PTR_DAT_049ca5b0,*(undefined8 *)PTR_DAT_049b4e50,
                   *(undefined8 *)puVar4);
        if (*plVar14 != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (*plVar14,*(undefined8 *)PTR_DAT_049ca5b8,*(undefined8 *)puVar2,
                     *(undefined8 *)puVar4);
          return;
        }
      }
    }
  }
LAB_026416e4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

