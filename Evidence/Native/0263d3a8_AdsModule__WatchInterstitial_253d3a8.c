/* IL2CPP: AdsModule$$WatchInterstitial
void AdsModule__WatchInterstitial (AdsModule_o* __this, System_String_o* placement, System_Action_bool__o* watched, System_Action_o* completed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$WatchInterstitial
   void AdsModule__WatchInterstitial (AdsModule_o* __this, System_String_o* placement,
   System_Action_bool__o* watched, System_Action_o* completed, const MethodInfo* method); */

ulong AdsModule__WatchInterstitial_253d3a8
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long alStack_68 [7];
  
  uVar2 = AdsModule__AreInterstitialConditionsMet_253d454();
  if ((uVar2 & 1) == 0) {
    if (param_3 == 0) goto LAB_0263d430;
    pcVar6 = *(code **)(param_3 + 0x18);
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    puVar4 = &stack0xffffffffffffffd8;
    uVar5 = *(undefined8 *)(param_3 + 0x28);
  }
  else {
    uVar2 = AdsModule__CanShowInterstitial_253d654(param_1);
    puVar1 = PTR_DAT_049ca438;
    if ((uVar2 & 1) != 0) {
      if ((bRam0000000004f4bf95 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049ca438);
        bRam0000000004f4bf95 = 1;
      }
      alStack_68[3] = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
      alStack_68[0] = 0;
      uStack_70 = 0;
      alStack_68[2] = 0;
      alStack_68[1] = 0;
      thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
      uStack_80 = param_1;
      thunk_FUN_021f190c(&uStack_80,param_1);
      uStack_70 = param_2;
      thunk_FUN_021f190c(&uStack_70,param_2);
      alStack_68[0] = param_3;
      thunk_FUN_021f190c(alStack_68,param_3);
      lStack_78 = param_4;
      thunk_FUN_021f190c(&lStack_78,param_4);
      uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
      Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
                ((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar1);
      return 0;
    }
    if (param_3 == 0) goto LAB_0263d430;
    pcVar6 = *(code **)(param_3 + 0x18);
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    puVar4 = &stack0xffffffffffffffdc;
    uVar5 = *(undefined8 *)(param_3 + 0x28);
  }
  uVar2 = (*pcVar6)(uVar3,puVar4,uVar5);
LAB_0263d430:
  if (param_4 != 0) {
    uVar2 = (**(code **)(param_4 + 0x18))
                      (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x28));
  }
  return uVar2;
}

