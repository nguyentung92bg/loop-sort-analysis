/* IL2CPP: ElevatorHole$$Travel
Cysharp_Threading_Tasks_UniTask_o ElevatorHole__Travel (ElevatorHole_o* __this, Carrier_o* carrier, float from, float to, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$Travel
   Cysharp_Threading_Tasks_UniTask_o ElevatorHole__Travel (ElevatorHole_o* __this, Carrier_o*
   carrier, float from, float to, float duration, const MethodInfo* method); */

void ElevatorHole__Travel_24113a8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_DAT_049c2b60;
  if ((bRam0000000004f4b722 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c2b68);
    FUN_021f03f8(PTR_DAT_049c2b60);
    bRam0000000004f4b722 = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  ElevatorHole___c__DisplayClass34_0___ctor_24a1168(lVar5,0);
  puVar4 = PTR_DAT_049c2b68;
  puVar3 = PTR_DAT_049c20a8;
  puVar2 = PTR_DAT_049c2058;
  puVar1 = PTR_DAT_049b6110;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_4;
    thunk_FUN_021f190c((undefined8 *)(lVar5 + 0x10),param_4);
    *(undefined8 *)(lVar5 + 0x18) = param_5;
    thunk_FUN_021f190c((undefined8 *)(lVar5 + 0x18),param_5);
    auStack_70 = LitMotion_LMotion__Create_2ea9f9c(param_1,param_2,param_3,0);
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar6,lVar5,*(undefined8 *)puVar4,0);
    auVar7 = FUN_024f6d0c(auStack_70,uVar6,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar7 = Extensions__AddTo_24d83f4(auVar7._0_8_,auVar7._8_8_ & 0xffffffff,param_4,0);
    uVar6 = GameBehaviourBase__get_ReturnToken_24f6818(param_4,0);
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar7._0_8_,auVar7._8_8_ & 0xffffffff,uVar6,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

