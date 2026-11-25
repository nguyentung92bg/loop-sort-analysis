/* IL2CPP: FulfillRewardMonitor$$OnClaimClicked
void FulfillRewardMonitor__OnClaimClicked (FulfillRewardMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor$$OnClaimClicked
   void FulfillRewardMonitor__OnClaimClicked (FulfillRewardMonitor_o* __this, const MethodInfo*
   method); */

undefined8 FulfillRewardMonitor__OnClaimClicked_2441100(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c(param_1,0x39cfe44a,0)
  ;
  if ((lVar2 != 0) && (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0), lVar2 != 0))
  {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar2,0,0);
    puVar1 = PTR_DAT_049c40e0;
    if ((bRam0000000004f4b84a & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c40e0);
      bRam0000000004f4b84a = 1;
    }
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
    uStack_40 = param_1;
    thunk_FUN_021f190c(&uStack_40,param_1);
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
              ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

