/* IL2CPP: GiftBoxElement.<ApplyUnlockMotion>d__7$$MoveNext
void GiftBoxElement__ApplyUnlockMotion_d__7__MoveNext (GiftBoxElement__ApplyUnlockMotion_d__7_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: GiftBoxElement.<ApplyUnlockMotion>d__7$$MoveNext
   void GiftBoxElement__ApplyUnlockMotion_d__7__MoveNext (GiftBoxElement__ApplyUnlockMotion_d__7_o
   __this, const MethodInfo* method); */

void GiftBoxElement__ApplyUnlockMotion_d__7__MoveNext_241a990(int *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  if ((bRam0000000004f4b754 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ed8);
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2d50);
    FUN_021f03f8(PTR_DAT_049c2ee0);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    FUN_021f03f8(PTR_DAT_049c2ee8);
    bRam0000000004f4b754 = 1;
  }
  puVar8 = PTR_DAT_049c2808;
  puVar7 = PTR_DAT_049c2288;
  puVar6 = PTR_DAT_049c1690;
  puVar4 = PTR_DAT_049c1670;
  auStack_90._8_8_ = 0;
  iVar9 = *param_1;
  lVar18 = *(long *)(param_1 + 6);
  auStack_a0._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auVar1 = ZEXT816(0);
  auVar24 = ZEXT816(0);
  auStack_a0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  auStack_c0._0_8_ = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  if (iVar9 == 0) {
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
LAB_0251ae44:
    auStack_90 = auVar24;
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar10 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar13 = *(long *)auStack_a0._0_8_;
      uVar20 = auStack_a0._8_8_ & 0xffff;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_0251aec4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0251aec4:
      (*(code *)*puVar11)(uVar10,uVar20,puVar11[1]);
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(param_1 + 8),0,0);
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar13 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 10),0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar13,1,0);
    lVar13 = *(long *)(param_1 + 0xc);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar19 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    UnityEngine_Transform__set_localScale_3c2ddfc
              (*(undefined4 *)(lVar19 + 0xc),*(undefined4 *)(lVar19 + 0x10),
               *(undefined4 *)(lVar19 + 0x14),lVar13,0);
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar13 = Spine_Unity_SkeletonGraphic__get_AnimationState_331b0d0(*(long *)(param_1 + 10),0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = Spine_AnimationState__SetAnimation_32d33f8
                       (lVar13,0,*(undefined8 *)PTR_DAT_049c2ee8,0,0);
    piVar16 = param_1 + 0x12;
    *(undefined8 *)piVar16 = uVar10;
    thunk_FUN_021f190c(piVar16);
    uVar10 = *(undefined8 *)piVar16;
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar24 = Extensions__WaitUntilFirstEvent_24e6e20(uVar10,0,0);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_f0 = auVar24;
    thunk_FUN_021f190c(auStack_f0,0);
    auStack_a0 = auStack_f0;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar10 = auStack_a0._0_8_;
    auVar1 = auStack_90;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar13 = *(long *)auStack_a0._0_8_;
      uVar20 = auStack_a0._8_8_ & 0xffff;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0251b0b4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0251b0b4:
      iVar9 = (*(code *)*puVar11)(uVar10,uVar20,puVar11[1]);
      auVar1 = auStack_90;
      if (iVar9 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x14) = auStack_a0;
        thunk_FUN_021f190c(param_1 + 0x14,0);
        FUN_0235c25c(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c2ed8);
        return;
      }
    }
  }
  else {
    if (iVar9 != 1) {
      if (iVar9 == 2) {
        auStack_a0 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
        auStack_90 = auVar24;
        auStack_c0 = ZEXT816(0);
        goto LAB_0251b548;
      }
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                         (lVar18,0x85f8a9cf,0);
      *(undefined8 *)(param_1 + 8) = uVar10;
      thunk_FUN_021f190c();
      lVar13 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc
                         (lVar18,0x6d8b1339,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar19 = *(long *)(lVar13 + 0x38);
      lVar13 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                         (lVar18,0xc24dc4d1,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (lVar13,auStack_f0,*(undefined8 *)PTR_DAT_049c2ee0);
      plVar17 = (long *)(param_1 + 10);
      *plVar17 = auStack_f0._0_8_;
      thunk_FUN_021f190c(plVar17);
      if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar10 = UnityEngine_Component__get_transform_3c18724(*plVar17,0);
      *(undefined8 *)(param_1 + 0xc) = uVar10;
      thunk_FUN_021f190c();
      lVar13 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc
                         (lVar18,0x4f91ca30,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(lVar13 + 0x38);
      thunk_FUN_021f190c();
      lVar13 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                         (lVar18,0x8204c370,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (lVar13,auStack_f0,*(undefined8 *)PTR_DAT_049c2d50);
      plVar17 = (long *)(param_1 + 0x10);
      *plVar17 = auStack_f0._0_8_;
      thunk_FUN_021f190c(plVar17);
      if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      AssetKits_ParticleImage_ParticleImage__Clear_32a75c8(*plVar17,0);
      if (*(long *)(lVar18 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      HapticModule__PlaySuccess_25354f4(*(long *)(lVar18 + 0x38),0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      lVar13 = *(long *)puVar6;
      lVar12 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      uVar21 = *(undefined4 *)(lVar12 + 0xc);
      uVar22 = *(undefined4 *)(lVar12 + 0x10);
      uVar23 = *(undefined4 *)(lVar12 + 0x14);
      if (*(int *)(lVar13 + 0xe4) == 0) {
        FUN_021f0574();
        lVar13 = *(long *)puVar6;
      }
      uVar2 = _UNK_013aa62c;
      puVar14 = *(undefined4 **)(lVar13 + 0xb8);
      auStack_90 = LitMotion_LMotion__Create_2eaa1b4
                             (uVar21,uVar22,uVar23,*puVar14,puVar14[1],puVar14[2],_UNK_013aa62c,0);
      lVar13 = *(long *)puVar7;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        FUN_021f0574();
        lVar13 = *(long *)puVar7;
      }
      auVar24 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x60),
                             *(undefined8 *)PTR_DAT_049c2bc0);
      auStack_90 = auVar24;
      auVar24 = FUN_024f6e90(uVar2,auStack_90,0,1,*(undefined8 *)puVar8);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar10 = TMPro_TMP_Text__get_transform_3b0c9d0(lVar19,0);
      LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                (auVar24._0_8_,auVar24._8_8_,uVar10,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_f0 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(400,1,8,0,0,0);
      thunk_FUN_021f190c(auStack_f0,0);
      auStack_a0 = auStack_f0;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar10 = auStack_a0._0_8_;
      auVar24 = auStack_90;
      if ((long *)auStack_a0._0_8_ != (long *)0x0) {
        lVar13 = *(long *)auStack_a0._0_8_;
        uVar20 = auStack_a0._8_8_ & 0xffff;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0251ae30;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0251ae30:
        iVar9 = (*(code *)*puVar11)(uVar10,uVar20,puVar11[1]);
        auVar24 = auStack_90;
        if (iVar9 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x14) = auStack_a0;
          thunk_FUN_021f190c(param_1 + 0x14,0);
          FUN_0235c25c(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c2ed8);
          return;
        }
      }
      goto LAB_0251ae44;
    }
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  auStack_90 = auVar1;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar13 = *(long *)auStack_a0._0_8_;
    uVar20 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_0251b148;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0251b148:
    (*(code *)*puVar11)(uVar10,uVar20,puVar11[1]);
  }
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar18 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  HapticModule__PlaySuccess_25354f4(*(long *)(lVar18 + 0x38),0);
  if (*(long *)(lVar18 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  AudioModule__GetPlayer_2530858(auStack_f0,*(long *)(lVar18 + 0x40),0);
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  auStack_c0 = auStack_f0;
  if (*(long *)(lVar18 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar13 = *(long *)(*(long *)(lVar18 + 0x40) + 0x10);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar10 = *(undefined8 *)(lVar13 + 0x50);
  if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
    FUN_021f0574();
  }
  AudioPlayer__Play_2530c98(auStack_c0,uVar10,0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  AssetKits_ParticleImage_ParticleImage__Play_32a75e0(*(long *)(param_1 + 0x10),0);
  lVar18 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                     (lVar18,0xbcdc2f95,0);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar13 = UnityEngine_Component__get_gameObject_3c187f4(lVar18,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar13,1,0);
  lVar13 = *(long *)puVar6;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    FUN_021f0574();
    lVar13 = *(long *)puVar6;
  }
  puVar14 = *(undefined4 **)(lVar13 + 0xb8);
  uVar21 = *puVar14;
  uVar22 = puVar14[1];
  uVar23 = puVar14[2];
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  puVar3 = PTR_DAT_049bbf90;
  uVar2 = _UNK_013aa8fc;
  lVar13 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  auVar24 = LitMotion_LMotion__Create_2eaa1b4
                      (uVar21,uVar22,uVar23,*(undefined4 *)(lVar13 + 0xc),
                       *(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x14),_UNK_013aa8fc,0
                      );
  lVar13 = *(long *)puVar7;
  auStack_90 = auVar24;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    FUN_021f0574();
    lVar13 = *(long *)puVar7;
  }
  auVar24 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x60),
                         *(undefined8 *)PTR_DAT_049c2bc0);
  puVar5 = PTR_DAT_049c1680;
  auStack_90 = auVar24;
  auVar24 = FUN_024f4e50(auStack_90,0x1a,*(undefined8 *)PTR_DAT_049c1680);
  uVar10 = UnityEngine_Component__get_transform_3c18724(lVar18,0);
  LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
            (auVar24._0_8_,auVar24._8_8_,uVar10,*(undefined8 *)puVar4);
  if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar18 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xe),0);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar18,1,0);
  puVar14 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
  uVar21 = *puVar14;
  uVar22 = puVar14[1];
  uVar23 = puVar14[2];
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar18 = *(long *)(*(long *)puVar3 + 0xb8);
  auVar24 = LitMotion_LMotion__Create_2eaa1b4
                      (uVar21,uVar22,uVar23,*(undefined4 *)(lVar18 + 0xc),
                       *(undefined4 *)(lVar18 + 0x10),*(undefined4 *)(lVar18 + 0x14),uVar2,0);
  auStack_90 = auVar24;
  auVar24 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x60),
                         *(undefined8 *)PTR_DAT_049c2bc0);
  auStack_90 = auVar24;
  auVar24 = FUN_024f6e90(_UNK_013aa838,auStack_90,0,1,*(undefined8 *)puVar8);
  auStack_90 = auVar24;
  auVar24 = FUN_024f4e50(auStack_90,0x1a,*(undefined8 *)puVar5);
  if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar10 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(param_1 + 0xe),0);
  LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
            (auVar24._0_8_,auVar24._8_8_,uVar10,*(undefined8 *)puVar4);
  uVar10 = *(undefined8 *)(param_1 + 0x12);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar24 = Extensions__WaitUntilComplete_24e6d68(uVar10,0,0);
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_f0 = auVar24;
  thunk_FUN_021f190c(auStack_f0,0);
  auStack_a0 = auStack_f0;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar10 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar18 = *(long *)auStack_a0._0_8_;
    uVar20 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0251b534;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0251b534:
    iVar9 = (*(code *)*puVar11)(uVar10,uVar20,puVar11[1]);
    if (iVar9 == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x14) = auStack_a0;
      thunk_FUN_021f190c(param_1 + 0x14,0);
      FUN_0235c25c(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c2ed8);
      return;
    }
  }
LAB_0251b548:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar18 = *(long *)auStack_a0._0_8_;
    uVar20 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar11 = (undefined8 *)(lVar18 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_0251b5c8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0251b5c8:
    (*(code *)*puVar11)(uVar10,uVar20,puVar11[1]);
  }
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar18 = *(long *)puVar6;
  lVar13 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar21 = *(undefined4 *)(lVar13 + 0xc);
  uVar22 = *(undefined4 *)(lVar13 + 0x10);
  uVar23 = *(undefined4 *)(lVar13 + 0x14);
  if (*(int *)(lVar18 + 0xe4) == 0) {
    FUN_021f0574();
    lVar18 = *(long *)puVar6;
  }
  puVar14 = *(undefined4 **)(lVar18 + 0xb8);
  auVar24 = LitMotion_LMotion__Create_2eaa1b4
                      (uVar21,uVar22,uVar23,*puVar14,puVar14[1],puVar14[2],_UNK_013aa8fc,0);
  lVar18 = *(long *)puVar7;
  auStack_90 = auVar24;
  if (*(int *)(lVar18 + 0xe4) == 0) {
    FUN_021f0574();
    lVar18 = *(long *)puVar7;
  }
  auVar24 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x60),
                         *(undefined8 *)PTR_DAT_049c2bc0);
  auStack_90 = auVar24;
  auVar24 = FUN_024f6e90(_UNK_013aa62c,auStack_90,0,1,*(undefined8 *)puVar8);
  LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
            (auVar24._0_8_,auVar24._8_8_,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)puVar4);
  *param_1 = -2;
  piVar16 = param_1 + 8;
  piVar16[0] = 0;
  piVar16[1] = 0;
  thunk_FUN_021f190c(piVar16,0);
  piVar16 = param_1 + 10;
  piVar16[0] = 0;
  piVar16[1] = 0;
  thunk_FUN_021f190c(piVar16,0);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  thunk_FUN_021f190c(param_1 + 0xc,0);
  piVar16 = param_1 + 0xe;
  piVar16[0] = 0;
  piVar16[1] = 0;
  thunk_FUN_021f190c(piVar16,0);
  piVar16 = param_1 + 0x10;
  piVar16[0] = 0;
  piVar16[1] = 0;
  thunk_FUN_021f190c(piVar16,0);
  piVar16 = param_1 + 0x12;
  piVar16[0] = 0;
  piVar16[1] = 0;
  thunk_FUN_021f190c(piVar16,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar17 = *(long **)(param_1 + 2);
  if (plVar17 != (long *)0x0) {
    lVar18 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar11 = (undefined8 *)(lVar18 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_0251b79c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049b56d0,2);
LAB_0251b79c:
    (*(code *)*puVar11)(plVar17,puVar11[1]);
  }
  return;
}

