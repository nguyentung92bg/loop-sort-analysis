/* IL2CPP: PlayingMonitor$$HandleHoldInput
void PlayingMonitor__HandleHoldInput (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$HandleHoldInput
   void PlayingMonitor__HandleHoldInput (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__HandleHoldInput_24504f4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 in_s3;
  undefined1 auVar10 [16];
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_049c4860;
  if ((bRam0000000004f4b8d1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c1ae0);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c1678);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c2240);
    FUN_021f03f8(PTR_DAT_049c4868);
    FUN_021f03f8(PTR_DAT_049c4860);
    bRam0000000004f4b8d1 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  PlayingMonitor___c__DisplayClass55_0___ctor_2451d7c(lVar3,0);
  if (lVar3 == 0) goto LAB_02550894;
  *(long *)(lVar3 + 0x10) = param_1;
  thunk_FUN_021f190c((long *)(lVar3 + 0x10),param_1);
  auVar10._8_8_ = auStack_50._8_8_;
  auVar10._0_8_ = auStack_50._0_8_;
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_02550894;
  if (*(char *)(*(long *)(param_1 + 0x138) + 0x1e) == '\0') {
    return;
  }
  auStack_50 = auVar10;
  if (*(long *)(param_1 + 0x98) == 0) goto LAB_02550894;
  uVar4 = GameMachine__IsInState_object__261a580
                    (*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_049c1ae0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c(param_1,0xcf943524,0);
  plVar8 = (long *)(lVar3 + 0x18);
  *plVar8 = lVar5;
  thunk_FUN_021f190c(plVar8,lVar5);
  if (*(long *)(param_1 + 0x130) == 0) goto LAB_02550894;
  uVar4 = ConveyorSpeedSystem__IsHoldInputActive_24b5cf8(*(long *)(param_1 + 0x130),0);
  iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x160,0);
  if (iVar2 < 3) {
    if ((uVar4 & 1) != 0) goto LAB_025506c4;
LAB_02550654:
    if (*(long *)(param_1 + 0x130) == 0) goto LAB_02550894;
    uVar6 = ConveyorSpeedSystem__IsLastCarrier_24b5b40(*(long *)(param_1 + 0x130),0);
    if ((uVar6 & 1) == 0) goto LAB_025506c4;
    if (*(char *)(param_1 + 0x19c) == '\0') {
      if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_02550894;
      LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_1 + 0x1b8),0);
      *(undefined1 *)(param_1 + 0x19c) = 1;
      auStack_50 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,0x3e800000,0);
      auVar10 = FUN_024f4e50(auStack_50,5,*(undefined8 *)PTR_DAT_049c1358);
      goto LAB_02550724;
    }
  }
  else {
    if (4 < iVar2 - *(int *)(param_1 + 0x198) && (uVar4 & 1) == 0) goto LAB_02550654;
LAB_025506c4:
    if (*(char *)(param_1 + 0x19c) != '\0') {
      if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_02550894;
      LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_1 + 0x1b8),0);
      *(undefined1 *)(param_1 + 0x19c) = 0;
      if (*(long *)(param_1 + 400) == 0) goto LAB_02550894;
      uVar9 = UnityEngine_CanvasGroup__get_alpha_3ec2acc(*(long *)(param_1 + 400),0);
      auStack_50 = LitMotion_LMotion__Create_2ea9f9c(uVar9,0,0x3e800000,0);
      auVar10 = FUN_024f4e50(auStack_50,5,*(undefined8 *)PTR_DAT_049c1358);
LAB_02550724:
      auVar10 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                          (auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(param_1 + 400),
                           *(undefined8 *)PTR_DAT_049c2be8);
      LitMotion_MotionHandleExtensions__AddTo_2eacb44
                (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0x1b8),0);
    }
  }
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0x18c) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x18c) = 0;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_1 + 0x1b0),0);
      plVar7 = (long *)*plVar8;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
        auVar10 = LitMotion_LMotion__Create_2ea9f9c(in_s3,0,0x3e800000,0);
        auStack_50 = auVar10;
        auVar10 = FUN_024f4e50(auStack_50,5,*(undefined8 *)PTR_DAT_049c1358);
        goto LAB_02550858;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x18c) != '\0') {
      return;
    }
    *(int *)(param_1 + 0x198) = iVar2;
    *(undefined1 *)(param_1 + 0x18c) = 1;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_1 + 0x1b0),0);
      auVar10 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f000000,0x3e800000,0);
      auStack_50 = auVar10;
      auVar10 = FUN_024f4e50(auStack_50,5,*(undefined8 *)PTR_DAT_049c1358);
      auStack_50 = auVar10;
      uVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
      System_Action___ctor_306b98c(uVar9,lVar3,*(undefined8 *)PTR_DAT_049c4868,0);
      auVar10 = FUN_024f6b84(auStack_50,uVar9,*(undefined8 *)PTR_DAT_049c2240);
LAB_02550858:
      auVar10 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673a8c
                          (auVar10._0_8_,auVar10._8_8_,*plVar8,*(undefined8 *)PTR_DAT_049c1678);
      LitMotion_MotionHandleExtensions__AddTo_2eacb44
                (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0x1b0),0);
      return;
    }
  }
LAB_02550894:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

