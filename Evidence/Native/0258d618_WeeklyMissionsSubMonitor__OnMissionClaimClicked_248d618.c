/* IL2CPP: WeeklyMissionsSubMonitor$$OnMissionClaimClicked
void WeeklyMissionsSubMonitor__OnMissionClaimClicked (WeeklyMissionsSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, WeeklyMissionSheet_Elem_o* data, int32_t milestoneLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor$$OnMissionClaimClicked
   void WeeklyMissionsSubMonitor__OnMissionClaimClicked (WeeklyMissionsSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, WeeklyMissionSheet_Elem_o* data, int32_t
   milestoneLevel, const MethodInfo* method); */

void WeeklyMissionsSubMonitor__OnMissionClaimClicked_248d618
               (long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong auStack_120 [4];
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  int iStack_64;
  
  if ((bRam0000000004f4ba56 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c5de8);
    bRam0000000004f4ba56 = 1;
  }
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_3 != 0) {
    uStack_88 = *(undefined8 *)(param_3 + 0x40);
    uStack_90 = *(undefined8 *)(param_3 + 0x38);
    uStack_78 = *(undefined8 *)(param_3 + 0x50);
    uStack_80 = *(undefined8 *)(param_3 + 0x48);
    CloudPrefsBool__Set_24eb1bc(&uStack_90,1,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (param_2,0x240695d9,0);
    puVar4 = PTR_DAT_049b3c20;
    if (*(long *)(param_3 + 0x30) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_3 + 0x30),&uStack_c8,*(undefined8 *)PTR_DAT_049b6370);
      puVar3 = PTR_DAT_049b3bd0;
      puStack_a8 = puStack_c0;
      uStack_b0 = uStack_c8;
      uStack_a0 = uStack_b8;
      uStack_c8 = 0;
      puStack_c0 = &uStack_b0;
      while (uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_b0,*(undefined8 *)PTR_DAT_049b6348), (uVar6 & 1) != 0) {
        lVar11 = *(long *)PTR_DAT_049b6350;
        lVar7 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
        lVar8 = lVar7;
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
          lVar7 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar7 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar7 = FUN_02229718();
        }
        uVar9 = thunk_FUN_0224e54c(&uStack_b0,
                                   *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
        func_0x04608620(&uStack_70,uVar9,uVar1);
        uVar6 = uStack_70;
        iVar13 = (int)uStack_70;
        if (iVar13 == 0x1e) {
          if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          WeeklyMissions__AddBlock_252cb98(*(long *)(param_1 + 0x58),uStack_70 >> 0x20,0);
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)(param_1 + 0xc0));
        uVar9 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_70);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,param_4);
        uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_d0);
        uVar9 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049c5de8,uVar9,uVar10,0);
        iVar12 = (int)(uVar6 >> 0x20);
        if (iVar13 != 0x1e) {
          if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FulfillModule__FulfillFreePayout_254358c
                    (*(long *)(param_1 + 0x60),uVar6 & 0xffffffff,(double)iVar12,uVar9,0);
        }
        lVar8 = *(long *)(param_1 + 0x68);
        uStack_70 = 0;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,param_4);
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_70,&uStack_d0,*(undefined8 *)puVar4);
        uVar6 = uStack_70;
        uStack_d0 = 0;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(param_1 + 0xc0));
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_d0,&uStack_d8,*(undefined8 *)puVar4);
        uVar5 = uStack_d0;
        uStack_d8 = 0;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar13);
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_d8,&uStack_e0,*(undefined8 *)PTR_DAT_049c2ce8);
        uVar10 = uStack_d8;
        uStack_e0 = 0;
        uStack_e8 = uStack_e8 & 0xffffffff00000000;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_e0,&uStack_e8,*(undefined8 *)PTR_DAT_049c2ce0);
        uVar9 = uStack_e0;
        uStack_e8 = 0;
        iStack_64 = iVar12;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_e8,&iStack_64,*(undefined8 *)puVar4);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        auStack_120[1] = 0;
        auStack_120[2] = 0;
        auStack_120[0] = uVar6;
        auStack_120[3] = uVar10;
        uStack_100 = uVar9;
        uStack_f8 = uStack_e8;
        uStack_f0 = uVar5;
        AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar8,9,auStack_120,0);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_b0,*(undefined8 *)PTR_DAT_049b6330);
      lVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                        (param_2,0xbcdc2f95,0);
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) &&
         (lVar8 = StatefulUI_Runtime_Core_ContainerView__get_RectTransform_3346638
                            (*(long *)(lVar8 + 0x20),0), lVar8 != 0)) {
        UnityEngine_Transform__get_position_3c2d540(lVar8,0);
        if (*(long *)(param_1 + 0x70) != 0) {
          FulfillItemsMonitor__Show_243ebf8
                    (*(long *)(param_1 + 0x70),*(undefined8 *)(param_3 + 0x30),0);
          WeeklyMissionsSubMonitor__UpdateProgressView_248c388(param_1,1);
          WeeklyMissionsSubMonitor__HandleGiftBox_248da74(param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

