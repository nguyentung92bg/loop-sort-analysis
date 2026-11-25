/* IL2CPP: AnalyticsCustomEvent$$AddGameCoinBalance
AnalyticsCustomEvent_o AnalyticsCustomEvent__AddGameCoinBalance (AnalyticsCustomEvent_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsCustomEvent$$AddGameCoinBalance
   AnalyticsCustomEvent_o AnalyticsCustomEvent__AddGameCoinBalance (AnalyticsCustomEvent_o __this,
   const MethodInfo* method); */

undefined1  [16] AnalyticsCustomEvent__AddGameCoinBalance_2540228(undefined1 (*param_1) [16])

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_2c;
  long lStack_28;
  
  puVar1 = PTR_DAT_049b5228;
  if ((bRam0000000004f4bfc9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049c8258);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049ca520);
    bRam0000000004f4bfc9 = 1;
  }
  puVar2 = PTR_DAT_049b5f80;
  uStack_2c = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&lStack_28,*(undefined8 *)PTR_DAT_049c8258);
    if (lStack_28 != 0) {
      lVar3 = *(long *)(*param_1 + 8);
      uStack_2c = EconomyModule__GetAmount_2523ed0(lStack_28,1,0);
      uVar4 = System_Int32__ToString_30fbaa0(&uStack_2c,0);
      if (lVar3 != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar3,*(undefined8 *)PTR_DAT_049ca520,uVar4,*(undefined8 *)PTR_DAT_049b4358);
        return *param_1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

