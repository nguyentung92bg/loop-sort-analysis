/* IL2CPP: ElevatorHole$$Fade
Cysharp_Threading_Tasks_UniTask_o ElevatorHole__Fade (ElevatorHole_o* __this, Carrier_o* carrier, float from, float to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$Fade
   Cysharp_Threading_Tasks_UniTask_o ElevatorHole__Fade (ElevatorHole_o* __this, Carrier_o* carrier,
   float from, float to, const MethodInfo* method); */

void ElevatorHole__Fade_241154c
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_60 [16];
  
  puVar1 = PTR_DAT_049c2b70;
  if ((bRam0000000004f4b723 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c2b78);
    FUN_021f03f8(PTR_DAT_049c2b70);
    bRam0000000004f4b723 = 1;
  }
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  ElevatorHole___c__DisplayClass35_0___ctor_24a1194(lVar5,0);
  puVar4 = PTR_DAT_049c2b78;
  puVar3 = PTR_DAT_049c20a8;
  puVar2 = PTR_DAT_049c2058;
  puVar1 = PTR_DAT_049b6110;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_3;
    thunk_FUN_021f190c((long *)(lVar5 + 0x10),param_3);
    *(undefined8 *)(lVar5 + 0x18) = param_4;
    thunk_FUN_021f190c((undefined8 *)(lVar5 + 0x18),param_4);
    auStack_60 = LitMotion_LMotion__Create_2ea9f9c
                           (param_1,param_2,*(undefined4 *)(param_3 + 0xcc),0);
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar6,lVar5,*(undefined8 *)puVar4,0);
    auVar7 = FUN_024f6d0c(auStack_60,uVar6,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar7 = Extensions__AddTo_24d83f4(auVar7._0_8_,auVar7._8_8_ & 0xffffffff,param_3,0);
    uVar6 = GameBehaviourBase__get_ReturnToken_24f6818(param_3,0);
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar7._0_8_,auVar7._8_8_ & 0xffffffff,uVar6,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

