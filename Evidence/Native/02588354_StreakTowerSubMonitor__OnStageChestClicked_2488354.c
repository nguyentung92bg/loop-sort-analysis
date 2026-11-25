/* IL2CPP: StreakTowerSubMonitor$$OnStageChestClicked
void StreakTowerSubMonitor__OnStageChestClicked (StreakTowerSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, StreakTowerSheet_Stage_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: StreakTowerSubMonitor$$OnStageChestClicked
   void StreakTowerSubMonitor__OnStageChestClicked (StreakTowerSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, StreakTowerSheet_Stage_o* data, const
   MethodInfo* method); */

void StreakTowerSubMonitor__OnStageChestClicked_2488354
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined4 uStack_54;
  
  if ((bRam0000000004f4ba3c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    bRam0000000004f4ba3c = 1;
  }
  auStack_68._0_8_ = 0;
  auStack_68._8_8_ = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0xc80a90e6,0);
  if (lVar8 != 0) {
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar8,0);
    lVar8 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar8,0);
    lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                      (lVar8,0xbcdc2f95,0);
    auVar15._8_8_ = auStack_68._8_8_;
    auVar15._0_8_ = auStack_68._0_8_;
    if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), auStack_68 = auVar15, lVar9 != 0)) {
      StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar9,0);
      lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                         (param_2,0xd675ec2d,0);
      if (lVar8 != 0) {
        lVar11 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
        if (lVar10 != 0) {
          lVar10 = UnityEngine_Component__get_transform_3c18724(lVar10,0);
          if (lVar10 != 0) {
            UnityEngine_Transform__get_position_3c2d540(lVar10,0);
            puVar4 = PTR_DAT_049c1680;
            puVar3 = PTR_DAT_049c1670;
            if (lVar11 != 0) {
              UnityEngine_Transform__set_position_3c2d61c(lVar11,0);
              if (cRam0000000004f4a190 == '\0') {
                FUN_021f03f8(PTR_DAT_049bbf90);
                cRam0000000004f4a190 = '\x01';
              }
              lVar10 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
              auStack_68 = LitMotion_LMotion__Create_2eaa1b4
                                     (*(float *)(lVar10 + 0xc) * 0.5,*(float *)(lVar10 + 0x10) * 0.5
                                      ,*(float *)(lVar10 + 0x14) * 0.5,0);
              auVar15 = FUN_024f4e50(auStack_68,0x1a,*(undefined8 *)puVar4);
              uVar12 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
              auVar15 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                  (auVar15._0_8_,auVar15._8_8_,uVar12,*(undefined8 *)puVar3);
              LitMotion_MotionHandleExtensions__AddTo_2eace68
                        (auVar15._0_8_,auVar15._8_8_ & 0xffffffff,param_1,0);
              if (param_3 != 0) {
                lVar8 = StreakTowerSheet_Stage__GetRewards_2568b84(param_3,0);
                puVar6 = PTR_DAT_049c2d00;
                puVar5 = PTR_DAT_049b6350;
                puVar4 = PTR_DAT_049b6348;
                puVar3 = PTR_DAT_049b6330;
                if (lVar8 != 0) {
                  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                            (lVar8,&uStack_98,*(undefined8 *)PTR_DAT_049b6370);
                  uStack_70 = uStack_88;
                  puStack_a0 = &uStack_80;
                  uStack_78 = uStack_90;
                  uStack_a8 = 0;
                  while( true ) {
                    uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                       (&uStack_80,*(undefined8 *)puVar4);
                    if ((uVar13 & 1) == 0) {
                      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                                (&uStack_80,*(undefined8 *)puVar3);
                      return;
                    }
                    lVar11 = *(long *)puVar5;
                    lVar10 = *(long *)(lVar11 + 0x20);
                    uVar2 = *(ushort *)(lVar10 + 0x135);
                    lVar8 = lVar10;
                    if ((uVar2 & 1) == 0) {
                      lVar8 = FUN_02229718();
                      lVar10 = *(long *)(lVar11 + 0x20);
                      uVar2 = *(ushort *)(lVar10 + 0x135);
                    }
                    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
                    if ((uVar2 & 1) == 0) {
                      lVar10 = FUN_02229718();
                    }
                    uVar12 = thunk_FUN_0224e54c(&uStack_80,
                                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) +
                                                         0x80) + 0x60);
                    func_0x04608620(&uStack_98,uVar12,uVar1);
                    uVar7 = uStack_94;
                    uVar1 = uStack_98;
                    uVar12 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                                       (lVar9,0);
                    if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x20);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    uStack_54 = uVar1;
                    GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                              (lVar8,&uStack_54,&uStack_98,*(undefined8 *)puVar6);
                    uStack_b8 = uStack_90;
                    uStack_b0 = uStack_88;
                    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                              (uVar12,0xbcdc2f95,auStack_c0,0);
                    if (*(long *)(param_1 + 0x58) == 0) break;
                    uVar14 = Shop__FormatItemQuantity_257016c
                                       (*(long *)(param_1 + 0x58),uVar1,uVar7,0);
                    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                              (uVar12,0x9927ed9b,uVar14,0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

