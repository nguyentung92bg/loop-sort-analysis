/* IL2CPP: PlayingMonitor.<>c__DisplayClass55_0$$<HandleHoldInput>b__0
void PlayingMonitor___c__DisplayClass55_0___HandleHoldInput_b__0 (PlayingMonitor___c__DisplayClass55_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: PlayingMonitor.<>c__DisplayClass55_0$$<HandleHoldInput>b__0
   void PlayingMonitor___c__DisplayClass55_0___HandleHoldInput_b__0
   (PlayingMonitor___c__DisplayClass55_0_o* __this, const MethodInfo* method); */

void PlayingMonitor___c__DisplayClass55_0___HandleHoldInput_b__0_2451d84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_049c1358;
  if ((bRam0000000004f4b8dd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5238);
    FUN_021f03f8(PTR_DAT_049c1678);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c39f0);
    FUN_021f03f8(PTR_DAT_049c48e0);
    FUN_021f03f8(PTR_DAT_049c48e8);
    bRam0000000004f4b8dd = 1;
  }
  puVar4 = PTR_DAT_049c48e0;
  puVar3 = PTR_DAT_049c39f0;
  puVar2 = PTR_DAT_049c1678;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auStack_50 = LitMotion_LMotion__Create_2ea9f9c(0x3f000000,_UNK_013aa62c,0x3f000000,0);
  auVar6 = FUN_024f4e50(auStack_50,5,*(undefined8 *)puVar1);
  lVar5 = *(long *)(param_1 + 0x20);
  auStack_50 = auVar6;
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5238);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (lVar5,param_1,*(undefined8 *)PTR_DAT_049c48e8,0);
    *(long *)(param_1 + 0x20) = lVar5;
    thunk_FUN_021f190c((long *)(param_1 + 0x20),lVar5);
  }
  auVar6 = FUN_02551be8(auStack_50,lVar5,*(undefined8 *)puVar4);
  auStack_50 = auVar6;
  auVar6 = FUN_0253a3a4(auStack_50,0xffffffff,3,*(undefined8 *)puVar3);
  auVar6 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673a8c
                     (auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)puVar2);
  if (*(long *)(param_1 + 0x10) != 0) {
    LitMotion_MotionHandleExtensions__AddTo_2eacb44
              (auVar6._0_8_,auVar6._8_8_ & 0xffffffff,
               *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

