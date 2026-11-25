/* IL2CPP: VideoRewardsScene.<HopGift>d__36$$MoveNext
void VideoRewardsScene__HopGift_d__36__MoveNext (VideoRewardsScene__HopGift_d__36_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VideoRewardsScene.<HopGift>d__36$$MoveNext
   void VideoRewardsScene__HopGift_d__36__MoveNext (VideoRewardsScene__HopGift_d__36_o __this, const
   MethodInfo* method); */

void VideoRewardsScene__HopGift_d__36__MoveNext_246b00c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if ((bRam0000000004f4b981 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5418);
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c2f78);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b981 = 1;
  }
  puVar5 = PTR_DAT_049c2f78;
  puVar4 = PTR_DAT_049c2f70;
  puVar3 = PTR_DAT_049c2d70;
  puVar2 = PTR_DAT_049c2288;
  puVar1 = PTR_DAT_049b5138;
  auStack_70._8_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auStack_80._0_8_ = 0;
  auVar21 = ZEXT816(0);
  if (*param_1 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      auStack_70 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      auStack_80 = auVar21;
      goto LAB_0256b51c;
    }
    lVar10 = *(long *)(param_1 + 6);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(lVar10 + 0x50);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(uint *)(lVar9 + 0x18) <= (uint)param_1[8]) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    piVar12 = param_1 + 0xc;
    *(undefined8 *)piVar12 = *(undefined8 *)(lVar9 + (long)param_1[8] * 8 + 0x20);
    thunk_FUN_021f190c(piVar12);
    cVar6 = cRam0000000004f4a196;
    lVar10 = *(long *)(lVar10 + 0xa8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(uint *)(lVar10 + 0x18) <= (uint)param_1[8]) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    uVar20 = *(undefined8 *)(lVar10 + (long)param_1[8] * 8 + 0x20);
    *(undefined8 *)(param_1 + 0xe) = uVar20;
    fVar18 = (float)((ulong)uVar20 >> 0x20);
    fVar16 = fVar18;
    fVar15 = (float)uVar20;
    if (cVar6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a18);
      cRam0000000004f4a196 = '\x01';
      fVar16 = (float)param_1[0xf];
      fVar15 = (float)param_1[0xe];
    }
    uVar17 = NEON_fmov(0x41b00000,4);
    uVar19 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x10);
    fVar18 = fVar18 + (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar17 >> 0x20);
    uVar20 = CONCAT44(fVar18,(float)uVar20 + (float)uVar19 * (float)uVar17);
    *(undefined8 *)(param_1 + 0x10) = uVar20;
    auStack_80 = LitMotion_LMotion__Create_2eaa148(fVar15,fVar16,uVar20,fVar18,_UNK_013aa5f0,0);
    auVar21 = FUN_024f4e50(auStack_80,5,*(undefined8 *)puVar3);
    lVar10 = *(long *)puVar2;
    auStack_80 = auVar21;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)puVar2;
    }
    auVar21 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x60),
                           *(undefined8 *)puVar5);
    auVar21 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                        (auVar21._0_8_,auVar21._8_8_,*(undefined8 *)piVar12,*(undefined8 *)puVar4);
    auStack_60 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                           (auVar21._0_8_,auVar21._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 10),0
                           );
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_60,0);
    auStack_70 = auStack_60;
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
    uVar20 = auStack_70._0_8_;
    auVar21 = auStack_80;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar10 = *(long *)auStack_70._0_8_;
      uVar14 = auStack_70._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0256b30c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0256b30c:
      iVar7 = (*(code *)*puVar8)(uVar20,uVar14,puVar8[1]);
      auVar21 = auStack_80;
      if (iVar7 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x12) = auStack_70;
        thunk_FUN_021f190c(param_1 + 0x12,0);
        FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c5418);
        return;
      }
    }
  }
  auStack_80 = auVar21;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar20 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_70._0_8_;
    uVar14 = auStack_70._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0256b3a0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0256b3a0:
    (*(code *)*puVar8)(uVar20,uVar14,puVar8[1]);
  }
  auVar21 = LitMotion_LMotion__Create_2eaa148
                      (param_1[0x10],param_1[0x11],param_1[0xe],param_1[0xf],_UNK_013aa7f0,0);
  auStack_80 = auVar21;
  auVar21 = FUN_024f4e50(auStack_80,0x1d,*(undefined8 *)puVar3);
  lVar10 = *(long *)puVar2;
  auStack_80 = auVar21;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
    lVar10 = *(long *)puVar2;
  }
  auVar21 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x60),
                         *(undefined8 *)puVar5);
  auVar21 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                      (auVar21._0_8_,auVar21._8_8_,*(undefined8 *)(param_1 + 0xc),
                       *(undefined8 *)puVar4);
  auVar21 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar21._0_8_,auVar21._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 10),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_60 = auVar21;
  thunk_FUN_021f190c(auStack_60,0);
  auStack_70 = auStack_60;
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
  uVar20 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_70._0_8_;
    uVar14 = auStack_70._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0256b508;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0256b508:
    iVar7 = (*(code *)*puVar8)(uVar20,uVar14,puVar8[1]);
    if (iVar7 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x12) = auStack_70;
      thunk_FUN_021f190c(param_1 + 0x12,0);
      FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c5418);
      return;
    }
  }
LAB_0256b51c:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar20 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_70._0_8_;
    uVar14 = auStack_70._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0256b59c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0256b59c:
    (*(code *)*puVar8)(uVar20,uVar14,puVar8[1]);
  }
  *param_1 = -2;
  piVar12 = param_1 + 0xc;
  piVar12[0] = 0;
  piVar12[1] = 0;
  thunk_FUN_021f190c(piVar12,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0256b644;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049b56d0,2);
LAB_0256b644:
    (*(code *)*puVar8)(plVar13,puVar8[1]);
  }
  return;
}

