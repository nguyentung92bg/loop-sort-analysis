/* IL2CPP: AnalyticsCustomEvent$$AddCustom
AnalyticsCustomEvent_o AnalyticsCustomEvent__AddCustom (AnalyticsCustomEvent_o __this, System_String_o* key, Il2CppObject* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsCustomEvent$$AddCustom
   AnalyticsCustomEvent_o AnalyticsCustomEvent__AddCustom (AnalyticsCustomEvent_o __this,
   System_String_o* key, Il2CppObject* value, const MethodInfo* method); */

undefined1  [16]
AnalyticsCustomEvent__AddCustom_25410d0
          (undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3)

{
  if ((bRam0000000004f4bfc6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4358);
    bRam0000000004f4bfc6 = 1;
  }
  if (*(long *)(*param_1 + 8) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (*(long *)(*param_1 + 8),param_2,param_3,*(undefined8 *)PTR_DAT_049b4358);
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

