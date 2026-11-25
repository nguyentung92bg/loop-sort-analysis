/* IL2CPP: VideoRewardsScene.<PeekLid>d__35$$MoveNext
void VideoRewardsScene__PeekLid_d__35__MoveNext (VideoRewardsScene__PeekLid_d__35_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VideoRewardsScene.<PeekLid>d__35$$MoveNext
   void VideoRewardsScene__PeekLid_d__35__MoveNext (VideoRewardsScene__PeekLid_d__35_o __this, const
   MethodInfo* method); */

void VideoRewardsScene__PeekLid_d__35__MoveNext_246b824(int *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  if ((bRam0000000004f4b982 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5420);
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c27e8);
    FUN_021f03f8(PTR_DAT_049c1678);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2f78);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b982 = 1;
  }
  puVar8 = PTR_DAT_049c2bf0;
  puVar7 = PTR_DAT_049c27e8;
  puVar6 = PTR_DAT_049c2288;
  puVar5 = PTR_DAT_049c1678;
  puVar4 = PTR_DAT_049c1358;
  puVar3 = PTR_DAT_049b5138;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auVar1 = ZEXT816(0);
  auStack_a0._8_8_ = 0;
  iVar10 = *param_1;
  lVar17 = *(long *)(param_1 + 6);
  auStack_b0._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  auStack_b0._0_8_ = 0;
  auVar20 = ZEXT816(0);
  if (iVar10 == 0) {
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_0256bc0c:
    auStack_b0 = auVar20;
    auStack_90 = auVar1;
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar19 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar11 = *(long *)auStack_a0._0_8_;
      uVar16 = auStack_a0._8_8_ & 0xffff;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar12 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_0256bc8c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0256bc8c:
      (*(code *)*puVar12)(uVar19,uVar16,puVar12[1]);
    }
    uVar19 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar20 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(700,1,8,uVar19,0,0);
    auStack_80 = auVar20;
    thunk_FUN_021f190c(auStack_80,0);
    auStack_a0 = auStack_80;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar19 = auStack_a0._0_8_;
    auVar20 = auStack_b0;
    auVar1 = auStack_90;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar11 = *(long *)auStack_a0._0_8_;
      uVar16 = auStack_a0._8_8_ & 0xffff;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar12 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0256bd94;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0256bd94:
      iVar10 = (*(code *)*puVar12)(uVar19,uVar16,puVar12[1]);
      auVar20 = auStack_b0;
      auVar1 = auStack_90;
      if (iVar10 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_a0;
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235c25c(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c5420);
        return;
      }
    }
  }
  else {
    if (iVar10 != 1) {
      if (iVar10 == 2) {
        auStack_a0 = *(undefined1 (*) [16])(param_1 + 0xc);
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = -1;
        auStack_b0 = auVar20;
        auStack_90 = auVar1;
        goto LAB_0256c07c;
      }
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar19 = *(undefined8 *)(lVar17 + 0x9c);
      if (cRam0000000004f4a196 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f4a196 = '\x01';
      }
      uVar18 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x10);
      *(ulong *)(param_1 + 10) =
           CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar18 >> 0x20) * 58.0,
                    (float)uVar19 + (float)uVar18 * 58.0);
      auStack_90 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,0x3e800000,0);
      lVar11 = *(long *)puVar6;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        FUN_021f0574();
        lVar11 = *(long *)puVar6;
      }
      auVar20 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x60),
                             *(undefined8 *)puVar8);
      auVar20 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673a8c
                          (auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(lVar17 + 0x60),
                           *(undefined8 *)puVar5);
      LitMotion_MotionHandleExtensions__AddTo_2eace68
                (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(lVar17 + 0x60),0);
      uVar2 = _UNK_013aa7f0;
      auVar20 = LitMotion_LMotion__Create_2ea9f9c(0,0x41600000,_UNK_013aa7f0,0);
      auStack_90 = auVar20;
      auVar20 = FUN_024f4e50(auStack_90,0x1a,*(undefined8 *)puVar4);
      auStack_90 = auVar20;
      auVar20 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x60),
                             *(undefined8 *)puVar8);
      auVar20 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalEulerAnglesZ___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2671254
                          (auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(lVar17 + 0x58),
                           *(undefined8 *)puVar7);
      LitMotion_MotionHandleExtensions__AddTo_2eaccf0
                (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(lVar17 + 0x58),0);
      auStack_b0 = LitMotion_LMotion__Create_2eaa148
                             (*(undefined4 *)(lVar17 + 0x9c),*(undefined4 *)(lVar17 + 0xa0),
                              param_1[10],param_1[0xb],uVar2,0);
      auVar20 = FUN_024f4e50(auStack_b0,0x1a,*(undefined8 *)PTR_DAT_049c2d70);
      auStack_b0 = auVar20;
      auVar20 = FUN_02526574(auStack_b0,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x60),
                             *(undefined8 *)PTR_DAT_049c2f78);
      auVar20 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                          (auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(lVar17 + 0x58),
                           *(undefined8 *)PTR_DAT_049c2f70);
      auStack_80 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                             (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),
                              0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      thunk_FUN_021f190c(auStack_80,0);
      auStack_a0 = auStack_80;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar19 = auStack_a0._0_8_;
      auVar20 = auStack_b0;
      auVar1 = auStack_90;
      if ((long *)auStack_a0._0_8_ != (long *)0x0) {
        lVar11 = *(long *)auStack_a0._0_8_;
        uVar16 = auStack_a0._8_8_ & 0xffff;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar12 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0256bbf8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar12 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0256bbf8:
        iVar10 = (*(code *)*puVar12)(uVar19,uVar16,puVar12[1]);
        auVar20 = auStack_b0;
        auVar1 = auStack_90;
        if (iVar10 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0xc) = auStack_a0;
          thunk_FUN_021f190c(param_1 + 0xc,0);
          FUN_0235c25c(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c5420);
          return;
        }
      }
      goto LAB_0256bc0c;
    }
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  auStack_b0 = auVar20;
  auStack_90 = auVar1;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar19 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_a0._0_8_;
    uVar16 = auStack_a0._8_8_ & 0xffff;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_0256be28;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0256be28:
    (*(code *)*puVar12)(uVar19,uVar16,puVar12[1]);
  }
  auVar20 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,_UNK_013aa8fc,0);
  lVar11 = *(long *)puVar6;
  auStack_90 = auVar20;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
    lVar11 = *(long *)puVar6;
  }
  auVar20 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x60),
                         *(undefined8 *)puVar8);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar20 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673a8c
                      (auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(lVar17 + 0x60),
                       *(undefined8 *)puVar5);
  LitMotion_MotionHandleExtensions__AddTo_2eace68
            (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(lVar17 + 0x60),0);
  uVar2 = _UNK_013aa8dc;
  auVar20 = LitMotion_LMotion__Create_2ea9f9c(0x41600000,0,_UNK_013aa8dc,0);
  auStack_90 = auVar20;
  auVar20 = FUN_024f4e50(auStack_90,0x1d,*(undefined8 *)puVar4);
  auStack_90 = auVar20;
  auVar20 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x60),
                         *(undefined8 *)puVar8);
  auVar20 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalEulerAnglesZ___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2671254
                      (auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(lVar17 + 0x58),
                       *(undefined8 *)puVar7);
  LitMotion_MotionHandleExtensions__AddTo_2eaccf0
            (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(lVar17 + 0x58),0);
  auVar20 = LitMotion_LMotion__Create_2eaa148
                      (param_1[10],param_1[0xb],*(undefined4 *)(lVar17 + 0x9c),
                       *(undefined4 *)(lVar17 + 0xa0),uVar2,0);
  auStack_b0 = auVar20;
  auVar20 = FUN_024f4e50(auStack_b0,0x1d,*(undefined8 *)PTR_DAT_049c2d70);
  auStack_b0 = auVar20;
  auVar20 = FUN_02526574(auStack_b0,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x60),
                         *(undefined8 *)PTR_DAT_049c2f78);
  auVar20 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                      (auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(lVar17 + 0x58),
                       *(undefined8 *)PTR_DAT_049c2f70);
  auVar20 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_80 = auVar20;
  thunk_FUN_021f190c(auStack_80,0);
  auStack_a0 = auStack_80;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar19 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar17 = *(long *)auStack_a0._0_8_;
    uVar16 = auStack_a0._8_8_ & 0xffff;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0256c068;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0256c068:
    iVar10 = (*(code *)*puVar12)(uVar19,uVar16,puVar12[1]);
    if (iVar10 == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0xc) = auStack_a0;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235c25c(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c5420);
      return;
    }
  }
LAB_0256c07c:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar19 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar17 = *(long *)auStack_a0._0_8_;
    uVar16 = auStack_a0._8_8_ & 0xffff;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_0256c0fc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0256c0fc:
    (*(code *)*puVar12)(uVar19,uVar16,puVar12[1]);
  }
  cVar9 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar9 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar15 = *(long **)(param_1 + 2);
  if (plVar15 != (long *)0x0) {
    lVar17 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_0256c194;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)PTR_DAT_049b56d0,2);
LAB_0256c194:
    (*(code *)*puVar12)(plVar15,puVar12[1]);
  }
  return;
}

