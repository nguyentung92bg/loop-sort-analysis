/* IL2CPP: VideoRewardsScene.<PlayReward>d__32$$MoveNext
void VideoRewardsScene__PlayReward_d__32__MoveNext (VideoRewardsScene__PlayReward_d__32_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VideoRewardsScene.<PlayReward>d__32$$MoveNext
   void VideoRewardsScene__PlayReward_d__32__MoveNext (VideoRewardsScene__PlayReward_d__32_o __this,
   const MethodInfo* method); */

void VideoRewardsScene__PlayReward_d__32__MoveNext_246c3f0(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4b983 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5428);
    FUN_021f03f8(PTR_DAT_049c1678);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b983 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auVar13 = ZEXT816(0);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar10 = *(long *)(param_1 + 6);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined4 *)(lVar10 + 0x84) = 0x408ccccc;
    auStack_50 = LitMotion_LMotion__Create_2ea9f9c(_UNK_013aa3e4,0,_UNK_013aa8dc,0);
    puVar1 = PTR_DAT_049c2288;
    lVar5 = *(long *)PTR_DAT_049c2288;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar1;
    }
    auVar13 = FUN_02526574(auStack_50,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x60),
                           *(undefined8 *)PTR_DAT_049c2bf0);
    auVar13 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673a8c
                        (auVar13._0_8_,auVar13._8_8_,*(undefined8 *)(lVar10 + 0x38),
                         *(undefined8 *)PTR_DAT_049c1678);
    LitMotion_MotionHandleExtensions__AddTo_2eace68
              (auVar13._0_8_,auVar13._8_8_ & 0xffffffff,*(undefined8 *)(lVar10 + 0x38),0);
    VideoRewardsScene__JumpTruck_246a218(lVar10);
    puVar1 = PTR_DAT_049b5138;
    uVar11 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_40 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x15e,1,8,uVar11,0,0);
    thunk_FUN_021f190c(auStack_40,0);
    uVar3 = auStack_40._8_8_;
    uVar11 = auStack_40._0_8_;
    auStack_60 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar13 = auStack_50;
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
      auVar13 = auStack_50;
    }
    if ((long *)uVar11 != (long *)0x0) {
      lVar10 = *(long *)uVar11;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0256c61c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      auStack_50 = auVar13;
      puVar6 = (undefined8 *)FUN_02229a4c(uVar11,*(long *)PTR_DAT_049b54e0,0);
      auVar13 = auStack_50;
LAB_0256c61c:
      auStack_50 = auVar13;
      iVar4 = (*(code *)*puVar6)(uVar11,uVar3 & 0xffffffff,puVar6[1]);
      auVar13 = auStack_50;
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c5428);
        return;
      }
    }
  }
  auStack_50 = auVar13;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar11 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_60._0_8_;
    uVar12 = auStack_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0256c6b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0256c6b4:
    (*(code *)*puVar6)(uVar11,uVar12,puVar6[1]);
  }
  cVar2 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0256c74c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b56d0,2);
LAB_0256c74c:
    (*(code *)*puVar6)(plVar9,puVar6[1]);
  }
  return;
}

