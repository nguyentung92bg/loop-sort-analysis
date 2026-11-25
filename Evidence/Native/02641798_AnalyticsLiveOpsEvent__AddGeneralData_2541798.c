/* IL2CPP: AnalyticsLiveOpsEvent$$AddGeneralData
void AnalyticsLiveOpsEvent__AddGeneralData (AnalyticsLiveOpsEvent_o __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$AddGeneralData
   void AnalyticsLiveOpsEvent__AddGeneralData (AnalyticsLiveOpsEvent_o __this, int32_t liveOps,
   const MethodInfo* method); */

void AnalyticsLiveOpsEvent__AddGeneralData_2541798(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_049b5228;
  if ((bRam0000000004f4bfcf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62c0);
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c8258);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b6380);
    FUN_021f03f8(PTR_DAT_049ca520);
    FUN_021f03f8(PTR_DAT_049c9930);
    FUN_021f03f8(PTR_DAT_049ca5d0);
    FUN_021f03f8(PTR_DAT_049ca5d8);
    FUN_021f03f8(PTR_DAT_049ca5e0);
    FUN_021f03f8(PTR_DAT_049ca5e8);
    FUN_021f03f8(PTR_DAT_049b4e50);
    FUN_021f03f8(PTR_DAT_049c9938);
    FUN_021f03f8(PTR_DAT_049ca5f0);
    FUN_021f03f8(PTR_DAT_049ca5f8);
    FUN_021f03f8(PTR_DAT_049ca600);
    FUN_021f03f8(PTR_DAT_049ca608);
    FUN_021f03f8(PTR_DAT_049c9940);
    FUN_021f03f8(PTR_DAT_049ca610);
    FUN_021f03f8(PTR_DAT_049b6088);
    bRam0000000004f4bfcf = 1;
  }
  puVar1 = PTR_DAT_049b5f80;
  uStack_6c = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar8 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar1);
  if (lVar8 == 0) goto LAB_02641cfc;
  FUN_0235c744(*(undefined8 *)(lVar8 + 0x50),&uStack_68,*(undefined8 *)PTR_DAT_049c8258);
  puVar1 = PTR_DAT_049b6110;
  puVar3 = PTR_DAT_049b4e50;
  lVar8 = CONCAT44(uStack_64,uStack_68);
  if (lVar8 == 0) goto LAB_02641cfc;
  uVar6 = EconomyModule__GetAmount_2523ed0(lVar8,1,0);
  uVar11 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  iVar7 = Extensions__ToItem_24e79a8(param_2,0);
  if (iVar7 != 0) {
    uStack_6c = EconomyModule__GetAmount_2523ed0(lVar8,iVar7,0);
    uVar11 = System_Int32__ToString_30fbaa0(&uStack_6c,0);
  }
  puVar2 = PTR_DAT_049c9938;
  puVar1 = PTR_DAT_049b5310;
  if (param_2 == 9) {
    lVar8 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar1;
    }
    uVar11 = CloudPrefsInt__ToString_24ea0b0(*(long *)(lVar8 + 0xb8) + 0x438,0);
  }
  puVar4 = PTR_DAT_049b62c0;
  puVar1 = PTR_DAT_049b3bd0;
  lVar8 = *(long *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  uVar12 = *(undefined8 *)puVar2;
  if (lVar10 == 0) {
LAB_02641a30:
    uStack_68 = 0;
    lVar10 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
  }
  else {
    uStack_70 = 0;
    uVar9 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_70);
    System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
              (lVar10,*(undefined8 *)puVar2,uVar9,&uStack_68,*(undefined8 *)puVar4);
    lVar10 = CONCAT44(uStack_64,uStack_68);
    if (lVar10 == 0) goto LAB_02641a30;
  }
  puVar5 = PTR_DAT_049c9940;
  puVar2 = PTR_DAT_049b4df8;
  if (lVar8 == 0) goto LAB_02641cfc;
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
            (lVar8,uVar12,lVar10,*(undefined8 *)PTR_DAT_049b4df8);
  lVar8 = *(long *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  uVar12 = *(undefined8 *)puVar5;
  if (lVar10 == 0) {
LAB_02641aa8:
    uStack_68 = 1;
    lVar10 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
  }
  else {
    uStack_70 = 1;
    uVar9 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_70);
    System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
              (lVar10,*(undefined8 *)puVar5,uVar9,&uStack_68,*(undefined8 *)puVar4);
    lVar10 = CONCAT44(uStack_64,uStack_68);
    if (lVar10 == 0) goto LAB_02641aa8;
  }
  puVar5 = PTR_DAT_049c9930;
  if (lVar8 == 0) goto LAB_02641cfc;
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
            (lVar8,uVar12,lVar10,*(undefined8 *)puVar2);
  lVar8 = *(long *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  uVar12 = *(undefined8 *)puVar5;
  if (lVar10 == 0) {
LAB_02641b1c:
    uStack_68 = 1;
    lVar10 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
  }
  else {
    uStack_70 = 1;
    uVar9 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_70);
    System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
              (lVar10,*(undefined8 *)puVar5,uVar9,&uStack_68,*(undefined8 *)puVar4);
    lVar10 = CONCAT44(uStack_64,uStack_68);
    if (lVar10 == 0) goto LAB_02641b1c;
  }
  if (lVar8 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar8,uVar12,lVar10,*(undefined8 *)puVar2);
    lVar8 = *(long *)(param_1 + 8);
    uStack_68 = uVar6;
    uVar12 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
    if (lVar8 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar8,*(undefined8 *)PTR_DAT_049ca520,uVar12,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 8) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049ca610,uVar11,
                   *(undefined8 *)puVar2);
        if (*(long *)(param_1 + 8) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049ca5f0,*(undefined8 *)puVar3,
                     *(undefined8 *)puVar2);
          if (*(long *)(param_1 + 8) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                      (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049ca600,*(undefined8 *)puVar3,
                       *(undefined8 *)puVar2);
            if (*(long *)(param_1 + 8) != 0) {
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                        (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049ca5e8,
                         *(undefined8 *)puVar3,*(undefined8 *)puVar2);
              if (*(long *)(param_1 + 8) != 0) {
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049ca5f8,
                           *(undefined8 *)puVar3,*(undefined8 *)puVar2);
                if (*(long *)(param_1 + 8) != 0) {
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                            (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049b6380,
                             *(undefined8 *)puVar3,*(undefined8 *)puVar2);
                  if (*(long *)(param_1 + 8) != 0) {
                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                              (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049ca5d8,
                               *(undefined8 *)puVar3,*(undefined8 *)puVar2);
                    if (*(long *)(param_1 + 8) != 0) {
                      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                                (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049ca608,
                                 *(undefined8 *)puVar3,*(undefined8 *)puVar2);
                      if (*(long *)(param_1 + 8) != 0) {
                        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                                  (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049ca5e0,
                                   *(undefined8 *)puVar3,*(undefined8 *)puVar2);
                        if (*(long *)(param_1 + 8) != 0) {
                          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                                    (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049b6088,
                                     *(undefined8 *)puVar3,*(undefined8 *)puVar2);
                          if (*(long *)(param_1 + 8) != 0) {
                            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                                      (*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_049ca5d0,
                                       *(undefined8 *)puVar3,*(undefined8 *)puVar2);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02641cfc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

