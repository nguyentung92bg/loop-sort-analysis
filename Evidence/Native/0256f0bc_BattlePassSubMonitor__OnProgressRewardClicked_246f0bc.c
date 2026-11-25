/* IL2CPP: BattlePassSubMonitor$$OnProgressRewardClicked
void BattlePassSubMonitor__OnProgressRewardClicked (BattlePassSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, System_Collections_Generic_List_BattlePassSheet_RewardArgs__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BattlePassSubMonitor$$OnProgressRewardClicked
   void BattlePassSubMonitor__OnProgressRewardClicked (BattlePassSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view,
   System_Collections_Generic_List_BattlePassSheet_RewardArgs__o* rewards, const MethodInfo*
   method); */

void BattlePassSubMonitor__OnProgressRewardClicked_246f0bc
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_54;
  
  if ((bRam0000000004f4b996 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5528);
    FUN_021f03f8(PTR_DAT_049c5530);
    FUN_021f03f8(PTR_DAT_049c5538);
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c5540);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b996 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x803eb6ff,0);
  puVar3 = PTR_DAT_049b3b98;
  if (lVar7 != 0) {
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar7,0);
    puVar14 = (undefined8 *)(param_1 + 0xa8);
    uVar15 = *puVar14;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(uVar15,param_2,0);
    if ((uVar8 & 1) != 0) {
      *puVar14 = 0;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)puVar14 >> 0xc & 0x3f),
                     ((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
    *puVar14 = param_2;
    thunk_FUN_021f190c(puVar14,param_2);
    lVar7 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar7,0);
    if (lVar7 != 0) {
      lVar9 = UnityEngine_Component__get_transform_3c18724(lVar7,0);
      lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                         (param_2,0xbcdc2f95,0);
      if (((lVar10 != 0) &&
          (lVar10 = UnityEngine_Component__get_transform_3c18724(lVar10,0), lVar10 != 0)) &&
         (UnityEngine_Transform__get_position_3c2d540(lVar10,0), lVar9 != 0)) {
        UnityEngine_Transform__set_position_3c2d61c(lVar9,0);
        lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                          (lVar7,0xbcdc2f95,0);
        if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) &&
           (StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar9,0), param_3 != 0)) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (param_3,&uStack_98,*(undefined8 *)PTR_DAT_049c5540);
          puVar5 = PTR_DAT_049c5538;
          puVar4 = PTR_DAT_049c5530;
          puVar3 = PTR_DAT_049c2d00;
          uStack_68 = uStack_90;
          puStack_a0 = &uStack_70;
          uStack_60 = uStack_88;
          uStack_a8 = 0;
          while( true ) {
            uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_70,*(undefined8 *)puVar4);
            if ((uVar8 & 1) == 0) {
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&uStack_70,*(undefined8 *)PTR_DAT_049c5528);
              if (cRam0000000004f4a190 == '\0') {
                FUN_021f03f8(PTR_DAT_049bbf90);
                cRam0000000004f4a190 = '\x01';
              }
              lVar9 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
              auStack_80 = LitMotion_LMotion__Create_2eaa1b4
                                     (*(float *)(lVar9 + 0xc) * 0.5,*(float *)(lVar9 + 0x10) * 0.5,
                                      *(float *)(lVar9 + 0x14) * 0.5,0);
              auVar16 = FUN_024f4e50(auStack_80,0x1a,*(undefined8 *)PTR_DAT_049c1680);
              uVar15 = UnityEngine_Component__get_transform_3c18724(lVar7,0);
              auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                  (auVar16._0_8_,auVar16._8_8_,uVar15,
                                   *(undefined8 *)PTR_DAT_049c1670);
              LitMotion_MotionHandleExtensions__AddTo_2eace68
                        (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,param_1,0);
              return;
            }
            lVar13 = *(long *)puVar5;
            lVar11 = *(long *)(lVar13 + 0x20);
            uVar2 = *(ushort *)(lVar11 + 0x135);
            lVar10 = lVar11;
            if ((uVar2 & 1) == 0) {
              lVar10 = FUN_02229718();
              lVar11 = *(long *)(lVar13 + 0x20);
              uVar2 = *(ushort *)(lVar11 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar11 = FUN_02229718();
            }
            uVar15 = thunk_FUN_0224e54c(&uStack_70,
                                        *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&uStack_98,uVar15,uVar1);
            uVar6 = uStack_94;
            uVar1 = uStack_98;
            uVar15 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar9,0);
            if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uStack_54 = uVar1;
            GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                      (lVar10,&uStack_54,&uStack_98,*(undefined8 *)puVar3);
            uStack_b8 = uStack_90;
            uStack_b0 = uStack_88;
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                      (uVar15,0x1a9a2c8b,auStack_c0,0);
            if (*(long *)(param_1 + 0x60) == 0) break;
            uVar12 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x60),uVar1,uVar6,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                      (uVar15,0x9927ed9b,uVar12,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

