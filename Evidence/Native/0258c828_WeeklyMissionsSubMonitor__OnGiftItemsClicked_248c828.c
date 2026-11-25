/* IL2CPP: WeeklyMissionsSubMonitor$$OnGiftItemsClicked
void WeeklyMissionsSubMonitor__OnGiftItemsClicked (WeeklyMissionsSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, WeeklyMissionProgressSheet_Row_o* data, float progress01, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: WeeklyMissionsSubMonitor$$OnGiftItemsClicked
   void WeeklyMissionsSubMonitor__OnGiftItemsClicked (WeeklyMissionsSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, WeeklyMissionProgressSheet_Row_o* data, float
   progress01, const MethodInfo* method); */

void WeeklyMissionsSubMonitor__OnGiftItemsClicked_248c828
               (undefined4 param_1,long param_2,long param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((bRam0000000004f4ba4f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4ba4f = 1;
  }
  uStack_58 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_2,0x78eb7ac0,0);
  puVar2 = PTR_DAT_049b3b98;
  if (lVar6 != 0) {
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar6,0);
    plVar13 = (long *)(param_2 + 0xb8);
    lVar14 = *plVar13;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(lVar14,param_3,0);
    if ((uVar7 & 1) != 0) {
      *plVar13 = 0;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)plVar13 >> 0xc & 0x3f),
                     ((ulong)plVar13 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
    *plVar13 = param_3;
    thunk_FUN_021f190c(plVar13,param_3);
    lVar6 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar6,0);
    if ((((lVar6 != 0) &&
         (lVar14 = UnityEngine_Component__get_transform_3c18724(lVar6,0), param_3 != 0)) &&
        (lVar8 = UnityEngine_Component__get_transform_3c18724(param_3,0), lVar8 != 0)) &&
       ((UnityEngine_Transform__get_position_3c2d540(lVar8,0), lVar14 != 0 &&
        (UnityEngine_Transform__set_position_3c2d61c(lVar14,0), param_4 != 0)))) {
      uStack_58 = *(undefined4 *)(param_4 + 0x18);
      uVar9 = System_Int32__ToString_30fbaa0(&uStack_58,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (lVar6,0x5f7a3f9f,uVar9,0);
      lVar14 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                         (lVar6,0xbcdc2f95,0);
      if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x20), lVar14 != 0)) {
        StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar14,0);
        uVar15 = FUN_02596c9c(param_1,0,0x3f800000,_UNK_013aa838,_UNK_013aa8f4,0);
        lVar8 = StatefulUI_Runtime_Core_ContainerView__get_RectTransform_3346638(lVar14,0);
        if (lVar8 != 0) {
          UnityEngine_RectTransform__set_pivot_3c2c28c(uVar15,0,lVar8,0);
          if (*(long *)(param_4 + 0x48) != 0) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (*(long *)(param_4 + 0x48),&uStack_a8,*(undefined8 *)PTR_DAT_049b6370);
            puVar4 = PTR_DAT_049c2d00;
            puVar3 = PTR_DAT_049b6350;
            puVar2 = PTR_DAT_049b6348;
            uStack_78 = uStack_a0;
            puStack_b0 = &uStack_80;
            uStack_70 = uStack_98;
            uStack_b8 = 0;
            while( true ) {
              uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_80,*(undefined8 *)puVar2);
              if ((uVar7 & 1) == 0) {
                System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                          (&uStack_80,*(undefined8 *)PTR_DAT_049b6330);
                if (cRam0000000004f4a190 == '\0') {
                  FUN_021f03f8(PTR_DAT_049bbf90);
                  cRam0000000004f4a190 = '\x01';
                }
                lVar14 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                auStack_90 = LitMotion_LMotion__Create_2eaa1b4
                                       (*(float *)(lVar14 + 0xc) * 0.5,
                                        *(float *)(lVar14 + 0x10) * 0.5,
                                        *(float *)(lVar14 + 0x14) * 0.5,0);
                auVar16 = FUN_024f4e50(auStack_90,0x1a,*(undefined8 *)PTR_DAT_049c1680);
                uVar9 = UnityEngine_Component__get_transform_3c18724(lVar6,0);
                auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                    (auVar16._0_8_,auVar16._8_8_,uVar9,
                                     *(undefined8 *)PTR_DAT_049c1670);
                LitMotion_MotionHandleExtensions__AddTo_2eace68
                          (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,param_2,0);
                return;
              }
              lVar12 = *(long *)puVar3;
              lVar10 = *(long *)(lVar12 + 0x20);
              uVar1 = *(ushort *)(lVar10 + 0x135);
              lVar8 = lVar10;
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_02229718();
                lVar10 = *(long *)(lVar12 + 0x20);
                uVar1 = *(ushort *)(lVar10 + 0x135);
              }
              uVar15 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
              if ((uVar1 & 1) == 0) {
                lVar10 = FUN_02229718();
              }
              uVar9 = thunk_FUN_0224e54c(&uStack_80,
                                         *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) +
                                         0x60);
              func_0x04608620(&uStack_a8,uVar9,uVar15);
              uVar5 = uStack_a4;
              uVar15 = uStack_a8;
              uVar9 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar14,0);
              if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              lVar8 = *(long *)(*(long *)(param_2 + 0x48) + 0x28);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uStack_54 = uVar15;
              GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                        (lVar8,&uStack_54,&uStack_a8,*(undefined8 *)puVar4);
              uStack_c8 = uStack_a0;
              uStack_c0 = uStack_98;
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                        (uVar9,0x1a9a2c8b,auStack_d0,0);
              if (*(long *)(param_2 + 0x48) == 0) break;
              uVar11 = Shop__FormatItemQuantity_257016c(*(long *)(param_2 + 0x48),uVar15,uVar5,0);
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                        (uVar9,0x9927ed9b,uVar11,0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

