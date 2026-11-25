/* IL2CPP: AnalyticsLiveOpsEvent$$SetImpressionTrigger
void AnalyticsLiveOpsEvent__SetImpressionTrigger (AnalyticsLiveOpsEvent_o __this, int32_t trigger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetImpressionTrigger
   void AnalyticsLiveOpsEvent__SetImpressionTrigger (AnalyticsLiveOpsEvent_o __this, int32_t
   trigger, const MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetImpressionTrigger_2541f24(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_049ca628;
  if ((bRam0000000004f4bfd1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049ca628);
    FUN_021f03f8(PTR_DAT_049ca5e8);
    bRam0000000004f4bfd1 = 1;
  }
  uStack_48 = *(undefined8 *)puVar1;
  lVar3 = *(long *)(param_1 + 8);
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = param_2;
  uVar2 = System_Enum__ToString_3135e00(&uStack_48,0);
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar3,*(undefined8 *)PTR_DAT_049ca5e8,uVar2,*(undefined8 *)PTR_DAT_049b4df8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

