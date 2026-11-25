/* IL2CPP: WeeklyMissionsSubMonitor.<ApplyGiftBoxMoveMotion>d__34$$MoveNext
void WeeklyMissionsSubMonitor__ApplyGiftBoxMoveMotion_d__34__MoveNext (WeeklyMissionsSubMonitor__ApplyGiftBoxMoveMotion_d__34_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: WeeklyMissionsSubMonitor.<ApplyGiftBoxMoveMotion>d__34$$MoveNext
   void WeeklyMissionsSubMonitor__ApplyGiftBoxMoveMotion_d__34__MoveNext
   (WeeklyMissionsSubMonitor__ApplyGiftBoxMoveMotion_d__34_o __this, const MethodInfo* method); */

void WeeklyMissionsSubMonitor__ApplyGiftBoxMoveMotion_d__34__MoveNext_248e05c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  int iVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4ba5e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c5e18);
    FUN_021f03f8(PTR_DAT_049c3a60);
    FUN_021f03f8(PTR_DAT_049c2ee0);
    FUN_021f03f8(PTR_DAT_049c5e20);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c5e28);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049c5e30);
    FUN_021f03f8(PTR_DAT_049c5e38);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4ba5e = 1;
  }
  puVar2 = PTR_DAT_049b6128;
  puVar1 = PTR_DAT_049b5138;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_90._8_8_ = 0;
  lVar13 = *(long *)(param_1 + 6);
  auStack_a0._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_a0._0_8_ = 0;
  uStack_a8 = 0;
  if (*param_1 == 0) {
    auStack_80 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      auStack_a0 = ZEXT816(0);
      auStack_90 = ZEXT816(0);
      goto LAB_0258e898;
    }
    lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c5e38);
    System_Object___ctor_3142338(lVar4,0);
    plVar12 = (long *)(param_1 + 10);
    *plVar12 = lVar4;
    thunk_FUN_021f190c(plVar12,lVar4);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (lVar13,0x8ac5d02c,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar4,auStack_d0,*(undefined8 *)PTR_DAT_049c3a60);
    uVar8 = auStack_d0._0_8_;
    uVar16 = 0x3f800000;
    uVar19 = 0x3f000000;
    auVar20 = LitMotion_LMotion__Create_2ea9f9c(0,0);
    auVar20 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                        (auVar20._0_8_,auVar20._8_8_,uVar8,*(undefined8 *)PTR_DAT_049c2be8);
    LitMotion_MotionHandleExtensions__AddTo_2eace68
              (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,lVar13,0);
    lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                      (*(undefined8 *)(param_1 + 8),0x1a9a2c8b,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar13 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
              (*(long *)(lVar13 + 0x98),*(undefined8 *)(lVar4 + 0xd8),auStack_d0,
               *(undefined8 *)PTR_DAT_049c5e20);
    uVar8 = auStack_d0._0_8_;
    uVar15 = auStack_d0._0_4_;
    uVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                      (lVar13,0x4645bb5c,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (uVar5,uVar8 & 0xffffffff,0);
    lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                      (uVar5,0xc24dc4d1,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (*(long *)(lVar6 + 0x20),auStack_d0,*(undefined8 *)PTR_DAT_049c2ee0);
    uVar8 = auStack_d0._0_8_;
    if (auStack_d0._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = Spine_Unity_SkeletonGraphic__get_SkeletonData_331ae34(auStack_d0._0_8_,0);
    uStack_c0 = uVar15;
    auStack_d0._0_8_ = *(undefined8 *)PTR_DAT_049c5e28;
    auStack_d0._8_8_ = 0xffffffffffffffff;
    lVar7 = System_Enum__ToString_3135e00(auStack_d0,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = System_String__ToLower_2f81d54(lVar7,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar5,uVar5);
    }
    uVar5 = Spine_SkeletonData__FindSkin_32f0b54(lVar6,uVar5,0);
    lVar6 = Spine_Unity_SkeletonGraphic__get_Skeleton_330f3c0(uVar8,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Spine_Skeleton__SetSkin_32e265c(lVar6,uVar5,0);
    if (*(long *)(lVar13 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar12;
    uVar8 = UnityEngine_Component__get_transform_3c18724(*(long *)(lVar13 + 0xa0),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar9 = (undefined8 *)(lVar6 + 0x28);
    *puVar9 = uVar8;
    thunk_FUN_021f190c(puVar9);
    lVar6 = *plVar12;
    lVar4 = UnityEngine_Component__get_transform_3c18724(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar15 = UnityEngine_Transform__get_position_3c2d540(lVar4,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined4 *)(lVar6 + 0x10) = uVar15;
    *(undefined4 *)(lVar6 + 0x14) = uVar16;
    *(undefined4 *)(lVar6 + 0x18) = uVar19;
    lVar4 = *plVar12;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar15 = UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar4 + 0x28),0);
    *(undefined4 *)(lVar4 + 0x1c) = uVar15;
    *(undefined4 *)(lVar4 + 0x20) = uVar16;
    cVar3 = cRam0000000004f4a190;
    *(undefined4 *)(lVar4 + 0x24) = uVar19;
    if (cVar3 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    lVar4 = *(long *)PTR_DAT_049bbf90;
    lVar6 = *(long *)(lVar4 + 0xb8);
    uVar8 = *(undefined8 *)(lVar6 + 0xc);
    fVar17 = *(float *)(lVar6 + 0x14) * _UNK_013aa838;
    *(ulong *)(param_1 + 0xc) = CONCAT44((float)((ulong)uVar8 >> 0x20) * 0.3,(float)uVar8 * 0.3);
    param_1[0xe] = (int)fVar17;
    lVar6 = *(long *)(lVar4 + 0xb8);
    lVar4 = *(long *)(param_1 + 10);
    iVar18 = *(int *)(lVar6 + 0x14);
    *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(lVar6 + 0xc);
    param_1[0x11] = iVar18;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__set_position_3c2d61c
              (*(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),
               *(undefined4 *)(lVar4 + 0x18),*(long *)(lVar4 + 0x28),0);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *(long *)(*plVar12 + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__set_localScale_3c2ddfc(param_1[0xc],param_1[0xd],param_1[0xe],lVar4,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar8 = System_TimeSpan__FromMilliseconds_3116fac(_UNK_013a8008,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_70 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar8,0,8,0,0,0);
    thunk_FUN_021f190c(auStack_70,0);
    auStack_80 = auStack_70;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar8 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_80._0_8_;
      uVar14 = auStack_80._8_8_ & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar9 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0258e5a8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0258e5a8:
      iVar18 = (*(code *)*puVar9)(uVar8,uVar14,puVar9[1]);
      if (iVar18 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x12) = auStack_80;
        thunk_FUN_021f190c(param_1 + 0x12,0);
        FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5e18);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar8 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar4 = *(long *)auStack_80._0_8_;
    uVar14 = auStack_80._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar9 = (undefined8 *)(lVar4 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0258e63c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0258e63c:
    (*(code *)*puVar9)(uVar8,uVar14,puVar9[1]);
  }
  uVar16 = _UNK_013aa4b8;
  auStack_90 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa4b8,0);
  auVar20 = FUN_024f4e50(auStack_90,3,*(undefined8 *)PTR_DAT_049c1358);
  uVar5 = *(undefined8 *)(param_1 + 10);
  auStack_90 = auVar20;
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar8,uVar5,*(undefined8 *)PTR_DAT_049c5e30,0);
  auVar20 = FUN_024f6d0c(auStack_90,uVar8,*(undefined8 *)PTR_DAT_049c20a8);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar20._0_8_,auVar20._8_8_ & 0xffffffff,lVar13,0)
  ;
  auStack_a0 = LitMotion_LMotion__Create_2eaa1b4
                         (param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],param_1[0x10],
                          param_1[0x11],uVar16,0);
  auVar20 = FUN_024f6e90(_UNK_013aa810,auStack_a0,0,1,*(undefined8 *)PTR_DAT_049c2808);
  auStack_a0 = auVar20;
  auVar20 = FUN_024f4e50(auStack_a0,3,*(undefined8 *)PTR_DAT_049c1680);
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar20 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                      (auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(*(long *)(param_1 + 10) + 0x28),
                       *(undefined8 *)PTR_DAT_049c1670);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar20._0_8_,auVar20._8_8_ & 0xffffffff,lVar13,0)
  ;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar8 = System_TimeSpan__FromMilliseconds_3116fac(_UNK_013a7878,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_d0 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar8,0,8,0,0,0);
  thunk_FUN_021f190c(auStack_d0,0);
  auStack_80 = auStack_d0;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar8 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar13 = *(long *)auStack_80._0_8_;
    uVar14 = auStack_80._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0258e884;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0258e884:
    iVar18 = (*(code *)*puVar9)(uVar8,uVar14,puVar9[1]);
    if (iVar18 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x12) = auStack_80;
      thunk_FUN_021f190c(param_1 + 0x12,0);
      FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5e18);
      return;
    }
  }
LAB_0258e898:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar8 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar13 = *(long *)auStack_80._0_8_;
    uVar14 = auStack_80._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0258e918;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0258e918:
    (*(code *)*puVar9)(uVar8,uVar14,puVar9[1]);
  }
  *param_1 = -2;
  piVar11 = param_1 + 10;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_021f190c(piVar11,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar12 = *(long **)(param_1 + 2);
  if (plVar12 != (long *)0x0) {
    lVar13 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0258e9c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049b56d0,2);
LAB_0258e9c0:
    (*(code *)*puVar9)(plVar12,puVar9[1]);
  }
  return;
}

