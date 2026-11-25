/* IL2CPP: FulfillRewardMonitor$$ShowFulfill
void FulfillRewardMonitor__ShowFulfill (FulfillRewardMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FulfillRewardMonitor$$ShowFulfill
   void FulfillRewardMonitor__ShowFulfill (FulfillRewardMonitor_o* __this, const MethodInfo*
   method); */

void FulfillRewardMonitor__ShowFulfill_2440490(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  
  puVar3 = PTR_DAT_049c4078;
  if ((bRam0000000004f4b847 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049b6098);
    FUN_021f03f8(PTR_DAT_049b60a0);
    FUN_021f03f8(PTR_DAT_049b60a8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c4080);
    FUN_021f03f8(PTR_DAT_049b60b8);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c4088);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c1fd0);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049c3958);
    FUN_021f03f8(PTR_DAT_049c4090);
    FUN_021f03f8(PTR_DAT_049c4078);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b847 = 1;
  }
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar8,0);
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar8 + 0x10),param_1);
    if (*(long *)(param_1 + 0xf0) != 0) {
      LitMotion_CompositeMotionHandle__Complete_2e8b020(*(long *)(param_1 + 0xf0),0);
      if (*(long *)(param_1 + 0xd0) != 0) {
        UnityEngine_CanvasGroup__set_alpha_3ec2b80(0x3f800000,*(long *)(param_1 + 0xd0),0);
        if (*(long *)(param_1 + 0xd8) != 0) {
          UnityEngine_CanvasGroup__set_alpha_3ec2b80(0x3f800000,*(long *)(param_1 + 0xd8),0);
          lVar15 = *(long *)(param_1 + 0xf8);
          if (lVar15 != 0) {
            lVar13 = *(long *)PTR_DAT_049c4080;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            puVar3 = PTR_DAT_049c3958;
            uVar9 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
            if ((uVar9 & 1) == 0) {
              *(undefined4 *)(lVar15 + 0x18) = 0;
            }
            else {
              iVar18 = *(int *)(lVar15 + 0x18);
              *(undefined4 *)(lVar15 + 0x18) = 0;
              if (0 < iVar18) {
                System_Array__Clear_31229cc(*(undefined8 *)(lVar15 + 0x10),0,iVar18,0);
              }
            }
            lVar15 = *(long *)puVar3;
            *(undefined1 *)(param_1 + 0xe8) = 0;
            lVar13 = *(long *)(param_1 + 0x30);
            if (*(int *)(lVar15 + 0xe4) == 0) {
              FUN_021f0574();
              lVar15 = *(long *)puVar3;
            }
            uStack_f0 = CONCAT71(uStack_f0._1_7_,**(undefined1 **)(lVar15 + 0xb8));
            uVar10 = thunk_FUN_0222c66c(lVar15,&uStack_f0);
            if (lVar13 != 0) {
              Monitors__Additive_object__26888e8(lVar13,uVar10,1,*(undefined8 *)PTR_DAT_049c4088);
              lVar15 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                                 (param_1,0x39cfe44a,0);
              plVar16 = (long *)(lVar8 + 0x18);
              *plVar16 = lVar15;
              thunk_FUN_021f190c(plVar16,lVar15);
              if (*plVar16 != 0) {
                lVar15 = UnityEngine_Component__get_gameObject_3c187f4(*plVar16,0);
                puVar3 = PTR_DAT_049c1690;
                if (lVar15 != 0) {
                  UnityEngine_GameObject__SetActive_3c1ce34(lVar15,0,0);
                  lVar15 = *(long *)puVar3;
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    FUN_021f0574();
                    lVar15 = *(long *)puVar3;
                  }
                  puVar3 = PTR_DAT_049c2288;
                  puVar14 = *(undefined4 **)(lVar15 + 0xb8);
                  uVar19 = *puVar14;
                  uVar20 = puVar14[1];
                  uVar21 = puVar14[2];
                  if (cRam0000000004f4a190 == '\0') {
                    FUN_021f03f8(PTR_DAT_049bbf90);
                    cRam0000000004f4a190 = '\x01';
                  }
                  puVar6 = PTR_DAT_049c2bc0;
                  puVar5 = PTR_DAT_049c2808;
                  puVar4 = PTR_DAT_049c1680;
                  lVar15 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                  uVar22 = *(undefined4 *)(lVar15 + 0xc);
                  uVar23 = *(undefined4 *)(lVar15 + 0x10);
                  uVar24 = *(undefined4 *)(lVar15 + 0x14);
                  auStack_a0 = LitMotion_LMotion__Create_2eaa1b4
                                         (uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,0x3f000000,0);
                  lVar15 = *(long *)puVar3;
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    FUN_021f0574();
                    lVar15 = *(long *)puVar3;
                  }
                  auVar25 = FUN_02526574(auStack_a0,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x60)
                                         ,*(undefined8 *)puVar6);
                  auStack_a0 = auVar25;
                  auVar25 = FUN_024f6e90(_UNK_013aa62c,auStack_a0,0,1,*(undefined8 *)puVar5);
                  auStack_a0 = auVar25;
                  auVar25 = FUN_024f4e50(auStack_a0,0x1a,*(undefined8 *)puVar4);
                  lVar15 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc
                                     (param_1,0x91273900,0);
                  puVar3 = PTR_DAT_049c1670;
                  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x38) != 0)) {
                    uVar10 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar15 + 0x38),0);
                    auVar25 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                        (auVar25._0_8_,auVar25._8_8_,uVar10,*(undefined8 *)puVar3);
                    LitMotion_MotionHandleExtensions__AddTo_2eacb44
                              (auVar25._0_8_,auVar25._8_8_ & 0xffffffff,
                               *(undefined8 *)(param_1 + 0xf0),0);
                    lVar15 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                                       (param_1,0xbcdc2f95,0);
                    if (lVar15 != 0) {
                      uVar10 = StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar15,0);
                      lVar13 = FulfillRewardMonitor__GetCustomFulfillPayouts_2440bc4
                                         (uVar10,*(undefined8 *)(param_1 + 0x100));
                      puVar6 = PTR_DAT_049b6110;
                      puVar5 = PTR_DAT_049b60a8;
                      puVar4 = PTR_DAT_049b60a0;
                      puVar3 = PTR_DAT_049b6098;
                      if (lVar13 != 0) {
                        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                                  (lVar13,&uStack_e0,*(undefined8 *)PTR_DAT_049b60b8);
                        puStack_e8 = &uStack_c0;
                        uStack_f0 = 0;
                        uStack_b8 = uStack_d8;
                        uStack_c0 = uStack_e0;
                        uStack_a8 = uStack_c8;
                        uStack_b0 = uStack_d0;
                        iVar18 = 2;
                        while( true ) {
                          uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                            (&uStack_c0,*(undefined8 *)puVar4);
                          if ((uVar9 & 1) == 0) break;
                          lVar17 = *(long *)puVar5;
                          lVar11 = *(long *)(lVar17 + 0x20);
                          uVar2 = *(ushort *)(lVar11 + 0x135);
                          lVar13 = lVar11;
                          if ((uVar2 & 1) == 0) {
                            lVar13 = FUN_02229718();
                            lVar11 = *(long *)(lVar17 + 0x20);
                            uVar2 = *(ushort *)(lVar11 + 0x135);
                          }
                          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc)
                          ;
                          if ((uVar2 & 1) == 0) {
                            lVar11 = FUN_02229718();
                          }
                          uVar10 = thunk_FUN_0224e54c(&uStack_c0,
                                                      *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) +
                                                                         8) + 0x80) + 0x60);
                          func_0x04608620(&uStack_e0,uVar10,uVar1);
                          uVar7 = uStack_d8;
                          uVar10 = uStack_e0;
                          uVar12 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                                             (lVar15,0);
                          FulfillRewardMonitor__CreateItemElement_244101c
                                    (param_1,uVar12,uVar10,uVar7,iVar18);
                          iVar18 = iVar18 + 1;
                        }
                        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                                  (&uStack_c0,*(undefined8 *)puVar3);
                        uVar10 = *(undefined8 *)(param_1 + 0xe0);
                        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                          FUN_021f0574();
                        }
                        Extensions__RebuildLayout_24e6b08(uVar10,0);
                        auVar25 = LitMotion_LMotion__Create_2eaa1b4
                                            (uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,0x3f000000,0)
                        ;
                        puVar6 = PTR_DAT_049c2bc0;
                        puVar5 = PTR_DAT_049c2808;
                        puVar4 = PTR_DAT_049c2288;
                        puVar3 = PTR_DAT_049c1680;
                        lVar15 = *(long *)PTR_DAT_049c2288;
                        auStack_a0 = auVar25;
                        if (*(int *)(lVar15 + 0xe4) == 0) {
                          FUN_021f0574();
                          lVar15 = *(long *)puVar4;
                        }
                        auVar25 = FUN_02526574(auStack_a0,
                                               *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x60),
                                               *(undefined8 *)puVar6);
                        auStack_a0 = auVar25;
                        auVar25 = FUN_024f6e90((float)iVar18 * _UNK_013aa388,auStack_a0,0,1,
                                               *(undefined8 *)puVar5);
                        auStack_a0 = auVar25;
                        auVar25 = FUN_024f4e50(auStack_a0,0x1a,*(undefined8 *)puVar3);
                        auStack_a0 = auVar25;
                        uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
                        System_Action___ctor_306b98c(uVar10,lVar8,*(undefined8 *)PTR_DAT_049c4090,0)
                        ;
                        auVar25 = FUN_024f6b84(auStack_a0,uVar10,*(undefined8 *)PTR_DAT_049c1fd0);
                        lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc
                                          (param_1,0x39cfe44a,0);
                        puVar3 = PTR_DAT_049c1670;
                        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) {
                          uVar10 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar8 + 0x38),0);
                          auVar25 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                              (auVar25._0_8_,auVar25._8_8_,uVar10,
                                               *(undefined8 *)puVar3);
                          LitMotion_MotionHandleExtensions__AddTo_2eacb44
                                    (auVar25._0_8_,auVar25._8_8_ & 0xffffffff,
                                     *(undefined8 *)(param_1 + 0xf0),0);
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

