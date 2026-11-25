/* IL2CPP: FulfillItemsMonitor.<PlayBurst>d__3$$MoveNext
void FulfillItemsMonitor__PlayBurst_d__3__MoveNext (FulfillItemsMonitor__PlayBurst_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0253f56c) */
/* WARNING: Removing unreachable block (ram,0x0253fd4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FulfillItemsMonitor.<PlayBurst>d__3$$MoveNext
   void FulfillItemsMonitor__PlayBurst_d__3__MoveNext (FulfillItemsMonitor__PlayBurst_d__3_o __this,
   const MethodInfo* method); */

void FulfillItemsMonitor__PlayBurst_d__3__MoveNext_243f174(int *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_f0 [16];
  long **pplStack_e0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long *plStack_90;
  int iStack_84;
  
  if ((bRam0000000004f4b83f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4010);
    FUN_021f03f8(PTR_DAT_049c2d48);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c4018);
    FUN_021f03f8(PTR_DAT_049c4020);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c3d28);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b83f = 1;
  }
  puVar6 = PTR_DAT_049c2be8;
  plVar19 = (long *)PTR_DAT_049c1690;
  puVar5 = PTR_DAT_049c1670;
  puVar4 = PTR_DAT_049b5138;
  auStack_a0._8_8_ = 0;
  plStack_90 = (long *)0x0;
  auStack_a0._0_8_ = 0;
  auVar1 = ZEXT816(0);
  auStack_b0._8_8_ = 0;
  auStack_b0._0_8_ = 0;
  auVar28 = ZEXT816(0);
  iStack_84 = *param_1;
  lVar17 = *(long *)(param_1 + 4);
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  uStack_c8 = 0;
  if (iStack_84 != 0) {
    if (iStack_84 != 1) {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                         (lVar17,0xc80a90e6,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar10,0);
      lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                         (lVar10,0xbcdc2f95,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar20 = (long *)(param_1 + 0xc);
      *plVar20 = *(long *)(lVar11 + 0x20);
      thunk_FUN_021f190c(plVar20);
      if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      StatefulUI_Runtime_Core_ContainerView__Clear_3347548(*plVar20,0);
      plVar19 = *(long **)(param_1 + 6);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar11 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049c4018) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0253f398;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_02229a4c(plVar19,*(long *)PTR_DAT_049c4018,0);
LAB_0253f398:
      plStack_90 = (long *)(*(code *)*puVar13)(plVar19,puVar13[1]);
      puVar7 = PTR_DAT_049c4020;
      puVar3 = PTR_DAT_049b4360;
      auStack_f0._8_8_ = &iStack_84;
      auStack_f0._0_8_ = 0;
      pplStack_e0 = &plStack_90;
      do {
        plVar19 = plStack_90;
        if (plStack_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plStack_90;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0253f428;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_02229a4c(plStack_90,*(long *)puVar3,0);
LAB_0253f428:
        uVar15 = (*(code *)*puVar13)(plVar19,puVar13[1]);
        plVar8 = plStack_90;
        plVar19 = (long *)PTR_DAT_049c1690;
        if ((uVar15 & 1) == 0) {
          if ((-1 < iStack_84) || (plVar20 = *pplStack_e0, plVar20 == (long *)0x0))
          goto LAB_0253f560;
          lVar11 = *plVar20;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar15 == 0) goto LAB_0253f538;
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0253f520;
        }
        if (plStack_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plStack_90;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0253f48c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_02229a4c(plStack_90,*(long *)puVar7,0);
LAB_0253f48c:
        auVar28 = (*(code *)*puVar13)(plVar8,puVar13[1]);
        if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar12 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(*plVar20,0);
        FulfillItemsMonitor__CreateItemElement_243f078(lVar17,uVar12,auVar28._0_8_,auVar28._8_8_);
      } while( true );
    }
    auStack_c0 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    iStack_84 = -1;
    *param_1 = -1;
    auStack_b0 = ZEXT816(0);
    auStack_a0 = ZEXT816(0);
    goto LAB_0253fb6c;
  }
  auStack_c0 = *(undefined1 (*) [16])(param_1 + 0x12);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  iStack_84 = -1;
  *param_1 = -1;
  goto LAB_0253f8fc;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0253f520:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0253f554;
    }
  }
LAB_0253f538:
  puVar13 = (undefined8 *)FUN_02229a4c(plVar20,*(long *)PTR_DAT_049b3cc8,0);
LAB_0253f554:
  (*(code *)*puVar13)(plVar20,puVar13[1]);
LAB_0253f560:
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar11 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lVar10,0);
  plVar20 = (long *)(param_1 + 0xe);
  *plVar20 = lVar11;
  thunk_FUN_021f190c(plVar20);
  lVar11 = *plVar20;
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  puVar3 = PTR_DAT_049bbf90;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  puVar14 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  UnityEngine_Transform__set_localScale_3c2ddfc(*puVar14,puVar14[1],puVar14[2],lVar11,0);
  fVar22 = (float)param_1[9];
  MonitorBase__WorldToCanvasSpace_256cc8c
            (param_1[8],fVar22,param_1[10],lVar17,*(undefined8 *)(param_1 + 0xe),0);
  if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar21 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(*plVar20,0);
  if (cRam0000000004f4a196 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f4a196 = '\x01';
  }
  fVar24 = *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x10);
  fVar23 = *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x14);
  fVar22 = fVar22 + fVar23 * 100.0;
  fVar21 = fVar21 + fVar24 * 100.0;
  auStack_a0 = LitMotion_LMotion__Create_2eaa148
                         (fVar21,fVar22,fVar21 + fVar24 * 175.0,fVar22 + fVar23 * 175.0,0x3f800000,0
                         );
  auVar28 = FUN_024f6e90(_UNK_013aa838,auStack_a0,0,1,*(undefined8 *)PTR_DAT_049c3d28);
  auVar28 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                      (auVar28._0_8_,auVar28._8_8_,*plVar20,*(undefined8 *)PTR_DAT_049c2f70);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar17,0)
  ;
  lVar11 = *plVar19;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
    lVar11 = *plVar19;
  }
  puVar14 = *(undefined4 **)(lVar11 + 0xb8);
  uVar25 = *puVar14;
  uVar26 = puVar14[1];
  uVar27 = puVar14[2];
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar11 = *(long *)(*(long *)puVar3 + 0xb8);
  auStack_b0 = LitMotion_LMotion__Create_2eaa1b4
                         (uVar25,uVar26,uVar27,*(undefined4 *)(lVar11 + 0xc),
                          *(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                          _UNK_013aa8dc,0);
  auVar28 = FUN_024f4e50(auStack_b0,0x1a,*(undefined8 *)PTR_DAT_049c1680);
  auVar28 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                      (auVar28._0_8_,auVar28._8_8_,*plVar20,*(undefined8 *)puVar5);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar17,0)
  ;
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (lVar10,auStack_f0,*(undefined8 *)PTR_DAT_049c2d48);
  plVar20 = (long *)(param_1 + 0x10);
  *plVar20 = auStack_f0._0_8_;
  thunk_FUN_021f190c(plVar20);
  if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_CanvasGroup__set_alpha_3ec2b80(0,*plVar20,0);
  auVar28 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa62c,0);
  auVar28 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                      (auVar28._0_8_,auVar28._8_8_,*plVar20,*(undefined8 *)puVar6);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar17,0)
  ;
  uVar12 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar17,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_f0 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(1000,0,8,uVar12,0,0);
  thunk_FUN_021f190c(auStack_f0,0);
  auStack_c0 = auStack_f0;
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
  uVar12 = auStack_c0._0_8_;
  auVar28 = auStack_b0;
  auVar1 = auStack_a0;
  if ((long *)auStack_c0._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_c0._0_8_;
    uVar18 = auStack_c0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0253f8e8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_02229a4c(auStack_c0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0253f8e8:
    iVar9 = (*(code *)*puVar13)(uVar12,uVar18,puVar13[1]);
    auVar28 = auStack_b0;
    auVar1 = auStack_a0;
    if (iVar9 == 0) {
      iStack_84 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x12) = auStack_c0;
      thunk_FUN_021f190c(param_1 + 0x12,0);
      FUN_0235c420(param_1 + 2,auStack_c0,param_1,*(undefined8 *)PTR_DAT_049c4010);
      return;
    }
  }
LAB_0253f8fc:
  auStack_b0 = auVar28;
  auStack_a0 = auVar1;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_c0._0_8_;
  if ((long *)auStack_c0._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_c0._0_8_;
    uVar18 = auStack_c0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_0253f97c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_02229a4c(auStack_c0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0253f97c:
    (*(code *)*puVar13)(uVar12,uVar18,puVar13[1]);
  }
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar10 = *plVar19;
  lVar11 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar25 = *(undefined4 *)(lVar11 + 0xc);
  uVar26 = *(undefined4 *)(lVar11 + 0x10);
  uVar27 = *(undefined4 *)(lVar11 + 0x14);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
    lVar10 = *plVar19;
  }
  uVar2 = _UNK_013aa5f0;
  puVar14 = *(undefined4 **)(lVar10 + 0xb8);
  auVar28 = LitMotion_LMotion__Create_2eaa1b4
                      (uVar25,uVar26,uVar27,*puVar14,puVar14[1],puVar14[2],_UNK_013aa5f0,0);
  auVar28 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                      (auVar28._0_8_,auVar28._8_8_,*(undefined8 *)(param_1 + 0xe),
                       *(undefined8 *)puVar5);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar17,0)
  ;
  auVar28 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,uVar2,0);
  auVar28 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                      (auVar28._0_8_,auVar28._8_8_,*(undefined8 *)(param_1 + 0x10),
                       *(undefined8 *)puVar6);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar28._0_8_,auVar28._8_8_ & 0xffffffff,lVar17,0)
  ;
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar12 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lVar17,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar28 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(500,0,8,uVar12,0,0);
  auStack_f0 = auVar28;
  thunk_FUN_021f190c(auStack_f0,0);
  auStack_c0 = auStack_f0;
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
  uVar12 = auStack_c0._0_8_;
  if ((long *)auStack_c0._0_8_ != (long *)0x0) {
    lVar17 = *(long *)auStack_c0._0_8_;
    uVar18 = auStack_c0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0253fb58;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_02229a4c(auStack_c0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0253fb58:
    iVar9 = (*(code *)*puVar13)(uVar12,uVar18,puVar13[1]);
    if (iVar9 == 0) {
      iStack_84 = 1;
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x12) = auStack_c0;
      thunk_FUN_021f190c(param_1 + 0x12,0);
      FUN_0235c420(param_1 + 2,auStack_c0,param_1,*(undefined8 *)PTR_DAT_049c4010);
      return;
    }
  }
LAB_0253fb6c:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_c0._0_8_;
  if ((long *)auStack_c0._0_8_ != (long *)0x0) {
    lVar17 = *(long *)auStack_c0._0_8_;
    uVar18 = auStack_c0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_0253fbec;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_02229a4c(auStack_c0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0253fbec:
    (*(code *)*puVar13)(uVar12,uVar18,puVar13[1]);
  }
  lVar17 = *(long *)(param_1 + 0xc);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar17,0);
  lVar17 = *(long *)(param_1 + 0xe);
  if (lVar17 != 0) {
    lVar17 = UnityEngine_Component__get_gameObject_3c187f4(lVar17,0);
    if (lVar17 != 0) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar17,0,0);
      *param_1 = -2;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      thunk_FUN_021f190c(param_1 + 0xe,0);
      piVar16 = param_1 + 0x10;
      piVar16[0] = 0;
      piVar16[1] = 0;
      thunk_FUN_021f190c(piVar16,0);
      FUN_0235afc8(param_1 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

