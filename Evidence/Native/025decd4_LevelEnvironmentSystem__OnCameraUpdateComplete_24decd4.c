/* IL2CPP: LevelEnvironmentSystem$$OnCameraUpdateComplete
void LevelEnvironmentSystem__OnCameraUpdateComplete (LevelEnvironmentSystem_o* __this, CameraUpdateCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelEnvironmentSystem$$OnCameraUpdateComplete
   void LevelEnvironmentSystem__OnCameraUpdateComplete (LevelEnvironmentSystem_o* __this,
   CameraUpdateCompleteMessage_o m, const MethodInfo* method); */

void LevelEnvironmentSystem__OnCameraUpdateComplete_24decd4(long param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong extraout_d0;
  ulong uVar11;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined4 in_s3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar4 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bc59 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bc59 = 1;
  }
  puVar3 = PTR_DAT_049b52a8;
  uVar12 = param_2[1];
  uVar13 = param_2[2];
  LevelEnvironmentSystem__CreateShineModel_24ded94(*param_2,param_1);
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar4;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x3a8);
  uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x3b0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  uVar5 = PlayerPrefsBool__op_Implicit_3f0e9e8(uVar8,uVar9,0);
  uVar11 = extraout_d0;
  if ((bRam0000000004f4bc5b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7940);
    FUN_021f03f8(PTR_DAT_049c6a90);
    FUN_021f03f8(PTR_DAT_049c6a80);
    uVar11 = FUN_021f03f8(PTR_DAT_049c6a88);
    bRam0000000004f4bc5b = 1;
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x40),0),
     puVar4 = PTR_DAT_049c7940, uVar11 = extraout_d0_00, lVar6 != 0)) {
    uVar1 = uVar5 & 1 ^ 1;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar6,uVar1,0);
    if (*(long *)(param_1 + 0x60) != 0) {
      UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(param_1 + 0x60),uVar1,0);
    }
    lVar10 = *(long *)puVar4;
    lVar6 = *(long *)(lVar10 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_02229718();
      lVar6 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar6 + 0x135);
    }
    puVar4 = PTR_DAT_049c6a80;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    thunk_FUN_0224e54c(param_1 + 0x68,
                       *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) + 0x20);
    lVar6 = *(long *)(*(long *)puVar4 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    pcVar7 = (char *)thunk_FUN_0224e54c(param_1 + 0x68,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
    if (*pcVar7 == '\0') {
      uVar11 = extraout_d0_01;
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_025df108;
      uStack_40 = UnityEngine_Camera__get_backgroundColor_3bcc1c8(*(long *)(param_1 + 0x48),0);
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_3c = uVar12;
      uStack_38 = uVar13;
      uStack_34 = in_s3;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_58,&uStack_40,*(undefined8 *)PTR_DAT_049c6a90);
      *(ulong *)(param_1 + 0x70) = uStack_50;
      *(ulong *)(param_1 + 0x68) = uStack_58;
      *(undefined4 *)(param_1 + 0x78) = uStack_48;
    }
    lVar6 = *(long *)(param_1 + 0x48);
    if ((uVar5 & 1) == 0) {
      System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                (param_1 + 0x68,&uStack_58,*(undefined8 *)PTR_DAT_049c6a88);
      uVar11 = uStack_58 & 0xffffffff;
      uVar14 = uStack_50 & 0xffffffff;
      uVar12 = uStack_58._4_4_;
      uVar13 = uStack_50._4_4_;
    }
    else {
      uVar11 = 0;
      uVar14 = 0;
      uVar12 = 0x3f800000;
      uVar13 = 0x3f800000;
    }
    if (lVar6 != 0) {
      UnityEngine_Camera__set_backgroundColor_3bcc2a0(uVar11,uVar12,uVar14,uVar13,lVar6,0);
      return;
    }
  }
LAB_025df108:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(uVar11);
}

