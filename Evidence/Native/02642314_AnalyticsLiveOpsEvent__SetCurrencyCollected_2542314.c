/* IL2CPP: AnalyticsLiveOpsEvent$$SetCurrencyCollected
void AnalyticsLiveOpsEvent__SetCurrencyCollected (AnalyticsLiveOpsEvent_o __this, int32_t quantity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetCurrencyCollected
   void AnalyticsLiveOpsEvent__SetCurrencyCollected (AnalyticsLiveOpsEvent_o __this, int32_t
   quantity, const MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetCurrencyCollected_2542314(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bfd7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049ca5f0);
    bRam0000000004f4bfd7 = 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  uStack_24 = param_2;
  uVar1 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar2,*(undefined8 *)PTR_DAT_049ca5f0,uVar1,*(undefined8 *)PTR_DAT_049b4df8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

