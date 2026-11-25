/* IL2CPP: VideoRewardsScene$$PlayIntro
void VideoRewardsScene__PlayIntro (VideoRewardsScene_o* __this, System_Collections_Generic_IReadOnlyList_StatefulComponent__o* milestoneViews, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VideoRewardsScene$$PlayIntro
   void VideoRewardsScene__PlayIntro (VideoRewardsScene_o* __this,
   System_Collections_Generic_IReadOnlyList_StatefulComponent__o* milestoneViews, const MethodInfo*
   method); */

void VideoRewardsScene__PlayIntro_2469b8c(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  long lStack_88;
  
  if ((bRam0000000004f4b97a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d48);
    FUN_021f03f8(PTR_DAT_049c53e8);
    FUN_021f03f8(PTR_DAT_049c53f0);
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c20d8);
    FUN_021f03f8(PTR_DAT_049c3d28);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2f78);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4b97a = 1;
  }
  puVar9 = PTR_DAT_049c3d28;
  puVar8 = PTR_DAT_049c2f78;
  puVar7 = PTR_DAT_049c2d70;
  puVar6 = PTR_DAT_049c2288;
  puVar5 = PTR_DAT_049b8a18;
  fVar3 = _UNK_013aa810;
  fVar20 = _UNK_013aa764;
  uVar2 = _UNK_013aa4b8;
  lVar12 = *(long *)(param_1 + 0x50);
  auStack_98 = ZEXT816(0);
  auStack_a8._0_8_ = 0;
  auStack_a8._8_8_ = 0;
  auVar24 = ZEXT816(0);
  if (lVar12 != 0) {
    uVar17 = 0;
    auStack_98 = ZEXT816(0);
    do {
      auVar24._8_8_ = auStack_a8._8_8_;
      auVar24._0_8_ = auStack_a8._0_8_;
      auVar1._8_8_ = auStack_a8._8_8_;
      auVar1._0_8_ = auStack_a8._0_8_;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar17) {
        if (*(long *)(param_1 + 0x68) != 0) {
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                    (*(long *)(param_1 + 0x68),&lStack_88,*(undefined8 *)PTR_DAT_049c2d48);
          auVar24._8_8_ = auStack_a8._8_8_;
          auVar24._0_8_ = auStack_a8._0_8_;
          if (lStack_88 != 0) {
            UnityEngine_CanvasGroup__set_alpha_3ec2b80(0,lStack_88,0);
            lVar12 = *(long *)(param_1 + 0x68);
            uVar22 = *(undefined8 *)(param_1 + 0xb0);
            if (cRam0000000004f4a198 == '\0') {
              FUN_021f03f8(PTR_DAT_049b8a18);
              cRam0000000004f4a198 = '\x01';
            }
            auVar24._8_8_ = auStack_a8._8_8_;
            auVar24._0_8_ = auStack_a8._0_8_;
            if (lVar12 != 0) {
              uVar18 = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
              fVar20 = (float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar18 >> 0x20) * 160.0;
              UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                        (CONCAT44(fVar20,(float)uVar22 + (float)uVar18 * 160.0),fVar20,lVar12,0);
              fVar20 = (float)*(undefined8 *)(param_1 + 0xb0);
              fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20);
              fVar19 = fVar21;
              fVar23 = fVar20;
              if (cRam0000000004f4a198 == '\0') {
                FUN_021f03f8(PTR_DAT_049b8a18);
                cRam0000000004f4a198 = '\x01';
                fVar19 = *(float *)(param_1 + 0xb4);
                fVar23 = *(float *)(param_1 + 0xb0);
              }
              fVar4 = _UNK_013aa8dc;
              uVar22 = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
              fVar21 = fVar21 + (float)((ulong)uVar22 >> 0x20) * 160.0;
              auVar24 = LitMotion_LMotion__Create_2eaa148
                                  (CONCAT44(fVar21,fVar20 + (float)uVar22 * 160.0),fVar21,fVar23,
                                   fVar19,_UNK_013aa8dc,0);
              uVar2 = _UNK_013aa62c;
              auStack_98 = auVar24;
              auVar24 = FUN_024f6e90(_UNK_013aa62c,auStack_98,0,1,*(undefined8 *)puVar9);
              auStack_98 = auVar24;
              auVar24 = FUN_024f4e50(auStack_98,0x1a,*(undefined8 *)puVar7);
              lVar12 = *(long *)puVar6;
              auStack_98 = auVar24;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                FUN_021f0574();
                lVar12 = *(long *)puVar6;
              }
              auVar24 = FUN_02526574(auStack_98,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x60),
                                     *(undefined8 *)puVar8);
              auVar24 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                                  (auVar24._0_8_,auVar24._8_8_,*(undefined8 *)(param_1 + 0x68),
                                   *(undefined8 *)PTR_DAT_049c2f70);
              LitMotion_MotionHandleExtensions__AddTo_2eaccf0
                        (auVar24._0_8_,auVar24._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0x68),0)
              ;
              auStack_a8 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,0x3e800000,0);
              auVar24 = FUN_024f6e90(uVar2,auStack_a8,0,1,*(undefined8 *)PTR_DAT_049c20d8);
              auStack_a8 = auVar24;
              auVar24 = FUN_02526574(auStack_a8,
                                     *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x60),
                                     *(undefined8 *)PTR_DAT_049c2bf0);
              auVar24 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                                  (auVar24._0_8_,auVar24._8_8_,lStack_88,
                                   *(undefined8 *)PTR_DAT_049c2be8);
              LitMotion_MotionHandleExtensions__AddTo_2eaccf0
                        (auVar24._0_8_,auVar24._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0x68),0)
              ;
              puVar6 = PTR_DAT_049c53f0;
              puVar5 = PTR_DAT_049c53e8;
              uVar2 = _UNK_013aa838;
              auVar24 = auStack_a8;
              if (param_2 != (long *)0x0) {
                iVar16 = 0;
                goto LAB_0256a030;
              }
            }
          }
        }
        break;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar17) {
LAB_0256a15c:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar13 = *(long *)(param_1 + 0xa8);
      auVar24 = auVar1;
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar17) goto LAB_0256a15c;
      lVar12 = *(long *)(lVar12 + (long)(int)uVar17 * 8 + 0x20);
      uVar22 = *(undefined8 *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
      if (cRam0000000004f4a196 == '\0') {
        FUN_021f03f8(puVar5);
        cRam0000000004f4a196 = '\x01';
      }
      auVar24._8_8_ = auStack_a8._8_8_;
      auVar24._0_8_ = auStack_a8._0_8_;
      if (lVar12 == 0) break;
      uVar18 = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      fVar23 = (float)((ulong)uVar22 >> 0x20);
      fVar19 = fVar23 + (float)((ulong)uVar18 >> 0x20) * 320.0;
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                (CONCAT44(fVar19,(float)uVar22 + (float)uVar18 * 320.0),fVar19,lVar12,0);
      if (cRam0000000004f4a196 == '\0') {
        FUN_021f03f8(puVar5);
        cRam0000000004f4a196 = '\x01';
      }
      uVar18 = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      fVar19 = fVar23 + (float)((ulong)uVar18 >> 0x20) * 320.0;
      auVar24 = LitMotion_LMotion__Create_2eaa148
                          (CONCAT44(fVar19,(float)uVar22 + (float)uVar18 * 320.0),fVar19,uVar22,
                           fVar23,uVar2,0);
      auStack_98 = auVar24;
      auVar24 = FUN_024f6e90((float)(int)uVar17 * fVar20 + fVar3,auStack_98,0,1,
                             *(undefined8 *)puVar9);
      auStack_98 = auVar24;
      auVar24 = FUN_024f4e50(auStack_98,0x1d,*(undefined8 *)puVar7);
      lVar13 = *(long *)puVar6;
      auStack_98 = auVar24;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        FUN_021f0574();
        lVar13 = *(long *)puVar6;
      }
      auVar24 = FUN_02526574(auStack_98,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x60),
                             *(undefined8 *)puVar8);
      auVar24 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                          (auVar24._0_8_,auVar24._8_8_,lVar12,*(undefined8 *)PTR_DAT_049c2f70);
      LitMotion_MotionHandleExtensions__AddTo_2eaccf0
                (auVar24._0_8_,auVar24._8_8_ & 0xffffffff,lVar12,0);
      auVar24._8_8_ = auStack_a8._8_8_;
      auVar24._0_8_ = auStack_a8._0_8_;
      lVar12 = *(long *)(param_1 + 0x50);
      uVar17 = uVar17 + 1;
    } while (lVar12 != 0);
  }
LAB_02569e0c:
  auStack_a8 = auVar24;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
LAB_0256a030:
  lVar12 = *param_2;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
        puVar11 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0256a07c;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar5,0);
LAB_0256a07c:
  iVar10 = (*(code *)*puVar11)(param_2,puVar11[1]);
  if (iVar10 <= iVar16) {
    UIMotionExtensions__PopIn_2412b20(_UNK_013aa8f4,_UNK_013aa734,*(undefined8 *)(param_1 + 0x70),0)
    ;
    return;
  }
  lVar12 = *param_2;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
        puVar11 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0256a0dc;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar6,0);
LAB_0256a0dc:
  lVar12 = (*(code *)*puVar11)(param_2,iVar16,puVar11[1]);
  auVar24 = auStack_a8;
  if (lVar12 == 0) goto LAB_02569e0c;
  uVar22 = UnityEngine_Component__get_transform_3c18724(lVar12,0);
  UIMotionExtensions__PopIn_2412b20((float)iVar16 * fVar3 + fVar4,uVar2,uVar22,0);
  iVar16 = iVar16 + 1;
  goto LAB_0256a030;
}

