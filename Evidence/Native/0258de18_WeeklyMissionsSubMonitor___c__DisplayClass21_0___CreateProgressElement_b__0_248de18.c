/* IL2CPP: WeeklyMissionsSubMonitor.<>c__DisplayClass21_0$$<CreateProgressElement>b__0
void WeeklyMissionsSubMonitor___c__DisplayClass21_0___CreateProgressElement_b__0 (WeeklyMissionsSubMonitor___c__DisplayClass21_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: WeeklyMissionsSubMonitor.<>c__DisplayClass21_0$$<CreateProgressElement>b__0
   void WeeklyMissionsSubMonitor___c__DisplayClass21_0___CreateProgressElement_b__0
   (WeeklyMissionsSubMonitor___c__DisplayClass21_0_o* __this, const MethodInfo* method); */

void WeeklyMissionsSubMonitor___c__DisplayClass21_0___CreateProgressElement_b__0_248de18
               (long param_1)

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
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
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
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *(long *)(param_1 + 0x18);
  lVar10 = *(long *)(param_1 + 0x20);
  uVar16 = *(undefined4 *)(param_1 + 0x28);
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
                    (lVar12,0x78eb7ac0,0);
  puVar2 = PTR_DAT_049b3b98;
  if (lVar6 != 0) {
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar6,0);
    plVar14 = (long *)(lVar12 + 0xb8);
    lVar15 = *plVar14;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(lVar15,lVar8,0);
    if ((uVar7 & 1) != 0) {
      *plVar14 = 0;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)plVar14 >> 0xc & 0x3f),
                     ((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
    *plVar14 = lVar8;
    thunk_FUN_021f190c(plVar14,lVar8);
    lVar6 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar6,0);
    if ((((lVar6 != 0) &&
         (lVar15 = UnityEngine_Component__get_transform_3c18724(lVar6,0), lVar8 != 0)) &&
        (lVar8 = UnityEngine_Component__get_transform_3c18724(lVar8,0), lVar8 != 0)) &&
       ((UnityEngine_Transform__get_position_3c2d540(lVar8,0), lVar15 != 0 &&
        (UnityEngine_Transform__set_position_3c2d61c(lVar15,0), lVar10 != 0)))) {
      uStack_58 = *(undefined4 *)(lVar10 + 0x18);
      uVar9 = System_Int32__ToString_30fbaa0(&uStack_58,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (lVar6,0x5f7a3f9f,uVar9,0);
      lVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                        (lVar6,0xbcdc2f95,0);
      if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) {
        StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar8,0);
        uVar16 = FUN_02596c9c(uVar16,0,0x3f800000,_UNK_013aa838,_UNK_013aa8f4,0);
        lVar15 = StatefulUI_Runtime_Core_ContainerView__get_RectTransform_3346638(lVar8,0);
        if (lVar15 != 0) {
          UnityEngine_RectTransform__set_pivot_3c2c28c(uVar16,0,lVar15,0);
          if (*(long *)(lVar10 + 0x48) != 0) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (*(long *)(lVar10 + 0x48),&uStack_a8,*(undefined8 *)PTR_DAT_049b6370);
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
                lVar8 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                auStack_90 = LitMotion_LMotion__Create_2eaa1b4
                                       (*(float *)(lVar8 + 0xc) * 0.5,*(float *)(lVar8 + 0x10) * 0.5
                                        ,*(float *)(lVar8 + 0x14) * 0.5,0);
                auVar17 = FUN_024f4e50(auStack_90,0x1a,*(undefined8 *)PTR_DAT_049c1680);
                uVar9 = UnityEngine_Component__get_transform_3c18724(lVar6,0);
                auVar17 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                    (auVar17._0_8_,auVar17._8_8_,uVar9,
                                     *(undefined8 *)PTR_DAT_049c1670);
                LitMotion_MotionHandleExtensions__AddTo_2eace68
                          (auVar17._0_8_,auVar17._8_8_ & 0xffffffff,lVar12,0);
                return;
              }
              lVar13 = *(long *)puVar3;
              lVar15 = *(long *)(lVar13 + 0x20);
              uVar1 = *(ushort *)(lVar15 + 0x135);
              lVar10 = lVar15;
              if ((uVar1 & 1) == 0) {
                lVar10 = FUN_02229718();
                lVar15 = *(long *)(lVar13 + 0x20);
                uVar1 = *(ushort *)(lVar15 + 0x135);
              }
              uVar16 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
              if ((uVar1 & 1) == 0) {
                lVar15 = FUN_02229718();
              }
              uVar9 = thunk_FUN_0224e54c(&uStack_80,
                                         *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) +
                                         0x60);
              func_0x04608620(&uStack_a8,uVar9,uVar16);
              uVar5 = uStack_a4;
              uVar16 = uStack_a8;
              uVar9 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar8,0);
              if (*(long *)(lVar12 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              lVar10 = *(long *)(*(long *)(lVar12 + 0x48) + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uStack_54 = uVar16;
              GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                        (lVar10,&uStack_54,&uStack_a8,*(undefined8 *)puVar4);
              uStack_c8 = uStack_a0;
              uStack_c0 = uStack_98;
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                        (uVar9,0x1a9a2c8b,auStack_d0,0);
              if (*(long *)(lVar12 + 0x48) == 0) break;
              uVar11 = Shop__FormatItemQuantity_257016c(*(long *)(lVar12 + 0x48),uVar16,uVar5,0);
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

