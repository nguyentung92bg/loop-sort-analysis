/* IL2CPP: StreakTowerSubMonitor.<ApplyChestClaimMotion>d__23$$MoveNext
void StreakTowerSubMonitor__ApplyChestClaimMotion_d__23__MoveNext (StreakTowerSubMonitor__ApplyChestClaimMotion_d__23_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02588ed8) */
/* WARNING: Removing unreachable block (ram,0x025896d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: StreakTowerSubMonitor.<ApplyChestClaimMotion>d__23$$MoveNext
   void StreakTowerSubMonitor__ApplyChestClaimMotion_d__23__MoveNext
   (StreakTowerSubMonitor__ApplyChestClaimMotion_d__23_o __this, const MethodInfo* method); */

void StreakTowerSubMonitor__ApplyChestClaimMotion_d__23__MoveNext_2488964
               (undefined1 param_1 [16],float param_2,float param_3,int *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [12];
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  long **pplStack_f0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  undefined8 uStack_a8;
  long **pplStack_a0;
  undefined1 auStack_98 [12];
  int iStack_88;
  undefined4 uStack_84;
  
  if ((bRam0000000004f4ba3f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5cc0);
    FUN_021f03f8(PTR_DAT_049c5cc8);
    FUN_021f03f8(PTR_DAT_049c2d48);
    FUN_021f03f8(PTR_DAT_049c5cd0);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c5cd8);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4ba3f = 1;
  }
  iStack_88 = *param_4;
  lVar20 = *(long *)(param_4 + 6);
  auStack_98._8_4_ = 0;
  pplStack_a0 = (long **)0x0;
  auStack_98._0_8_ = 0;
  auVar2 = ZEXT812(0);
  plStack_b0 = (long *)0x0;
  uStack_a8 = 0;
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  auVar28 = ZEXT816(0);
  auStack_d0._0_8_ = 0;
  auStack_d0._8_8_ = 0;
  uStack_d8 = 0;
  if (iStack_88 == 0) {
    auStack_98 = *(undefined1 (*) [12])(param_4 + 0x10);
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    iStack_88 = -1;
    *param_4 = -1;
LAB_02588c10:
    LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_98,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (*(undefined8 *)(param_4 + 8),0xbc956f6,0);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                      (lVar20,0x39cfe44a,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = UnityEngine_Component__get_transform_3c18724(lVar9,0);
    plVar19 = (long *)(param_4 + 0xc);
    *plVar19 = lVar11;
    thunk_FUN_021f190c(plVar19);
    if (*(long *)(param_4 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *(long *)(param_4 + 0xc);
    fVar23 = (float)UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 10),0);
    if (cRam0000000004f4a55e == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55e = '\x01';
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar15 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    param_3 = param_3 + *(float *)(lVar15 + 0x20) * 1.75;
    uVar17 = (ulong)(uint)(param_2 + *(float *)(lVar15 + 0x1c) * 1.75);
    UnityEngine_Transform__set_position_3c2d61c
              (fVar23 + *(float *)(lVar15 + 0x18) * 1.75,uVar17,param_3,lVar11,0);
    lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                       (lVar9,0xbcdc2f95,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar20 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar15 = *(long *)(lVar11 + 0x20);
    lVar11 = StreakTowerSheet_Stage__GetRewards_2568b84(*(long *)(lVar20 + 0x90),0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar11,auStack_100,*(undefined8 *)PTR_DAT_049b6370);
    puVar7 = PTR_DAT_049c2d00;
    puVar5 = PTR_DAT_049b6350;
    puVar4 = PTR_DAT_049b6348;
    uStack_a8 = auStack_100._8_8_;
    plStack_b0 = (long *)auStack_100._0_8_;
    pplStack_a0 = pplStack_f0;
    pplStack_f0 = &plStack_b0;
    auStack_100._0_8_ = 0;
    auStack_100._8_8_ = &iStack_88;
    while( true ) {
      uVar21 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&plStack_b0,*(undefined8 *)puVar4);
      puVar6 = PTR_DAT_049bbf90;
      fVar23 = (float)uVar17;
      if ((uVar21 & 1) == 0) break;
      lVar22 = *(long *)puVar5;
      lVar12 = *(long *)(lVar22 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
      lVar11 = lVar12;
      if ((uVar1 & 1) == 0) {
        lVar11 = FUN_02229718();
        lVar12 = *(long *)(lVar22 + 0x20);
        uVar1 = *(ushort *)(lVar12 + 0x135);
      }
      uVar25 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
      if ((uVar1 & 1) == 0) {
        lVar12 = FUN_02229718();
      }
      uVar10 = thunk_FUN_0224e54c(&plStack_b0,
                                  *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_118,uVar10,uVar25);
      uVar26 = uStack_114;
      uVar25 = uStack_118;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar10 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar15,0);
      if (*(long *)(lVar20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar11 = *(long *)(*(long *)(lVar20 + 0x60) + 0x20);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_84 = uVar25;
      GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                (lVar11,&uStack_84,&uStack_118,*(undefined8 *)puVar7);
      uStack_128 = uStack_110;
      uStack_120 = uStack_108;
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                (uVar10,0xbcdc2f95,auStack_130,0);
      if (*(long *)(lVar20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar13 = Shop__FormatItemQuantity_257016c(*(long *)(lVar20 + 0x58),uVar25,uVar26,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar10,0x9927ed9b,uVar13,0);
    }
    if (iStack_88 < 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (pplStack_f0,*(undefined8 *)PTR_DAT_049b6330);
    }
    if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar24 = (float)UnityEngine_Transform__get_position_3c2d540(*plVar19,0);
    if (cRam0000000004f4a55e == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55e = '\x01';
    }
    lVar11 = *(long *)(*(long *)puVar6 + 0xb8);
    auVar28 = LitMotion_LMotion__Create_2eaa1b4
                        (fVar24,fVar23,param_3,fVar24 + *(float *)(lVar11 + 0x18) * 4.25,
                         fVar23 + *(float *)(lVar11 + 0x1c) * 4.25,
                         param_3 + *(float *)(lVar11 + 0x20) * 4.25,_UNK_013aa530,0);
    auVar28 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                        (auVar28._0_8_,auVar28._8_8_,*plVar19,*(undefined8 *)PTR_DAT_049c20a0);
    LitMotion_MotionHandleExtensions__AddTo_2eace68
              (auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar20,0);
    puVar4 = PTR_DAT_049c1690;
    lVar11 = *(long *)PTR_DAT_049c1690;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_021f0574();
      lVar11 = *(long *)puVar4;
    }
    puVar16 = *(undefined4 **)(lVar11 + 0xb8);
    uVar25 = *puVar16;
    uVar26 = puVar16[1];
    uVar27 = puVar16[2];
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    uVar3 = _UNK_013aa62c;
    lVar11 = *(long *)(*(long *)puVar6 + 0xb8);
    auStack_c0 = LitMotion_LMotion__Create_2eaa1b4
                           (uVar25,uVar26,uVar27,*(undefined4 *)(lVar11 + 0xc),
                            *(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                            _UNK_013aa62c,0);
    auVar28 = FUN_024f4e50(auStack_c0,0x1a,*(undefined8 *)PTR_DAT_049c1680);
    auVar28 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar28._0_8_,auVar28._8_8_,*plVar19,*(undefined8 *)PTR_DAT_049c1670);
    LitMotion_MotionHandleExtensions__AddTo_2eace68
              (auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar20,0);
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (lVar9,auStack_100,*(undefined8 *)PTR_DAT_049c2d48);
    plVar19 = (long *)(param_4 + 0xe);
    *plVar19 = auStack_100._0_8_;
    thunk_FUN_021f190c(plVar19);
    if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_CanvasGroup__set_alpha_3ec2b80(0,*plVar19,0);
    auVar28 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,uVar3,0);
    auVar28 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                        (auVar28._0_8_,auVar28._8_8_,*plVar19,*(undefined8 *)PTR_DAT_049c2be8);
    LitMotion_MotionHandleExtensions__AddTo_2eace68
              (auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar20,0);
    uVar10 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar20,0);
    puVar4 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_100 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x41a,0,8,uVar10,0,0);
    thunk_FUN_021f190c(auStack_100,0);
    auStack_d0 = auStack_100;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar10 = auStack_d0._0_8_;
    auVar28 = auStack_c0;
    auVar2 = auStack_98;
    if ((long *)auStack_d0._0_8_ != (long *)0x0) {
      lVar9 = *(long *)auStack_d0._0_8_;
      uVar21 = auStack_d0._8_8_ & 0xffff;
      uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar14 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_025891f4;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar14 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025891f4:
      iVar8 = (*(code *)*puVar14)(uVar10,uVar21,puVar14[1]);
      auVar28 = auStack_c0;
      auVar2 = auStack_98;
      if (iVar8 == 0) {
        iStack_88 = 1;
        *param_4 = 1;
        *(undefined1 (*) [16])(param_4 + 0x14) = auStack_d0;
        thunk_FUN_021f190c(param_4 + 0x14,0);
        FUN_0235c25c(param_4 + 2,auStack_d0,param_4,*(undefined8 *)PTR_DAT_049c5cc0);
        return;
      }
    }
  }
  else {
    if (iStack_88 != 1) {
      if (iStack_88 == 2) {
        auStack_d0 = *(undefined1 (*) [16])(param_4 + 0x14);
        param_4[0x14] = 0;
        param_4[0x15] = 0;
        param_4[0x16] = 0;
        param_4[0x17] = 0;
        iStack_88 = -1;
        *param_4 = -1;
        auStack_c0 = ZEXT816(0);
        auStack_98 = ZEXT812(0);
        goto LAB_02589498;
      }
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (*(long *)(lVar20 + 0x98),*(undefined8 *)(lVar20 + 0x90),auStack_100,
                 *(undefined8 *)PTR_DAT_049c5cd0);
      lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                        (auStack_100._0_8_,0xd675ec2d,0);
      plVar19 = (long *)(param_4 + 8);
      *plVar19 = lVar9;
      thunk_FUN_021f190c(plVar19);
      if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar10 = UnityEngine_Component__get_transform_3c18724(*plVar19,0);
      piVar18 = param_4 + 10;
      *(undefined8 *)piVar18 = uVar10;
      thunk_FUN_021f190c(piVar18);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      param_2 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x10);
      param_3 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x14);
      auVar28 = LitMotion_LMotion_Shake__Create_2eaa970(0);
      auVar28 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                          (auVar28._0_8_,auVar28._8_8_,*(undefined8 *)piVar18,
                           *(undefined8 *)PTR_DAT_049c5cd8);
      auVar28 = LitMotion_MotionHandleExtensions__AddTo_2eace68
                          (auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar20,0);
      auStack_98 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                             (auVar28._0_8_,auVar28._8_8_ & 0xffffffff,0);
      uVar17 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_98,0);
      puVar4 = PTR_DAT_049c5cc8;
      if ((uVar17 & 1) == 0) {
        iStack_88 = 0;
        *param_4 = 0;
        uVar10 = *(undefined8 *)puVar4;
        *(undefined1 (*) [12])(param_4 + 0x10) = auStack_98;
        FUN_0235c25c(param_4 + 2,auStack_98,param_4,uVar10);
        return;
      }
      goto LAB_02588c10;
    }
    auStack_d0 = *(undefined1 (*) [16])(param_4 + 0x14);
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    param_4[0x16] = 0;
    param_4[0x17] = 0;
    iStack_88 = -1;
    *param_4 = -1;
  }
  auStack_c0 = auVar28;
  auStack_98 = auVar2;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_d0._0_8_;
  if ((long *)auStack_d0._0_8_ != (long *)0x0) {
    lVar9 = *(long *)auStack_d0._0_8_;
    uVar21 = auStack_d0._8_8_ & 0xffff;
    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar14 = (undefined8 *)(lVar9 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_02589288;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar14 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02589288:
    (*(code *)*puVar14)(uVar10,uVar21,puVar14[1]);
  }
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  puVar4 = PTR_DAT_049c1690;
  lVar9 = *(long *)PTR_DAT_049c1690;
  lVar11 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar25 = *(undefined4 *)(lVar11 + 0xc);
  uVar26 = *(undefined4 *)(lVar11 + 0x10);
  uVar27 = *(undefined4 *)(lVar11 + 0x14);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
    lVar9 = *(long *)puVar4;
  }
  uVar3 = _UNK_013aa5f0;
  puVar16 = *(undefined4 **)(lVar9 + 0xb8);
  auVar28 = LitMotion_LMotion__Create_2eaa1b4
                      (uVar25,uVar26,uVar27,*puVar16,puVar16[1],puVar16[2],_UNK_013aa5f0,0);
  auVar28 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                      (auVar28._0_8_,auVar28._8_8_,*(undefined8 *)(param_4 + 0xc),
                       *(undefined8 *)PTR_DAT_049c1670);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar20,0)
  ;
  auVar28 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,uVar3,0);
  auVar28 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                      (auVar28._0_8_,auVar28._8_8_,*(undefined8 *)(param_4 + 0xe),
                       *(undefined8 *)PTR_DAT_049c2be8);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar20,0)
  ;
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar10 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar20,0);
  puVar4 = PTR_DAT_049b5138;
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar28 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(200,0,8,uVar10,0,0);
  auStack_100 = auVar28;
  thunk_FUN_021f190c(auStack_100,0);
  auStack_d0 = auStack_100;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar10 = auStack_d0._0_8_;
  if ((long *)auStack_d0._0_8_ != (long *)0x0) {
    lVar20 = *(long *)auStack_d0._0_8_;
    uVar21 = auStack_d0._8_8_ & 0xffff;
    uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar14 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_02589484;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar14 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02589484:
    iVar8 = (*(code *)*puVar14)(uVar10,uVar21,puVar14[1]);
    if (iVar8 == 0) {
      iStack_88 = 2;
      *param_4 = 2;
      *(undefined1 (*) [16])(param_4 + 0x14) = auStack_d0;
      thunk_FUN_021f190c(param_4 + 0x14,0);
      FUN_0235c25c(param_4 + 2,auStack_d0,param_4,*(undefined8 *)PTR_DAT_049c5cc0);
      return;
    }
  }
LAB_02589498:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_d0._0_8_;
  if ((long *)auStack_d0._0_8_ != (long *)0x0) {
    lVar20 = *(long *)auStack_d0._0_8_;
    uVar21 = auStack_d0._8_8_ & 0xffff;
    uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar14 = (undefined8 *)(lVar20 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_02589518;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar14 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02589518:
    (*(code *)*puVar14)(uVar10,uVar21,puVar14[1]);
  }
  *param_4 = -2;
  piVar18 = param_4 + 8;
  piVar18[0] = 0;
  piVar18[1] = 0;
  thunk_FUN_021f190c(piVar18,0);
  piVar18 = param_4 + 10;
  piVar18[0] = 0;
  piVar18[1] = 0;
  thunk_FUN_021f190c(piVar18,0);
  piVar18 = param_4 + 0xc;
  piVar18[0] = 0;
  piVar18[1] = 0;
  thunk_FUN_021f190c(piVar18,0);
  piVar18 = param_4 + 0xe;
  piVar18[0] = 0;
  piVar18[1] = 0;
  thunk_FUN_021f190c(piVar18,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar19 = *(long **)(param_4 + 2);
  if (plVar19 != (long *)0x0) {
    lVar20 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar14 = (undefined8 *)(lVar20 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_025895f0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar14 = (undefined8 *)FUN_02229a4c(plVar19,*(long *)PTR_DAT_049b56d0,2);
LAB_025895f0:
    (*(code *)*puVar14)(plVar19,puVar14[1]);
  }
  return;
}

