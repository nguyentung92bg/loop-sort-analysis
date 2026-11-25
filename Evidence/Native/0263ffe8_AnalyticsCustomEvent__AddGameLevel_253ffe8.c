/* IL2CPP: AnalyticsCustomEvent$$AddGameLevel
AnalyticsCustomEvent_o AnalyticsCustomEvent__AddGameLevel (AnalyticsCustomEvent_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsCustomEvent$$AddGameLevel
   AnalyticsCustomEvent_o AnalyticsCustomEvent__AddGameLevel (AnalyticsCustomEvent_o __this, const
   MethodInfo* method); */

undefined1  [16] AnalyticsCustomEvent__AddGameLevel_253ffe8(undefined1 (*param_1) [16])

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bfc7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049ca510);
    bRam0000000004f4bfc7 = 1;
  }
  lVar2 = *(long *)puVar1;
  lVar4 = *(long *)(*param_1 + 8);
  uStack_24 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  uStack_24 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar2 + 0xb8) + 0x60,0);
  uVar3 = System_Int32__ToString_30fbaa0(&uStack_24,0);
  if (lVar4 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar4,*(undefined8 *)PTR_DAT_049ca510,uVar3,*(undefined8 *)PTR_DAT_049b4358);
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

