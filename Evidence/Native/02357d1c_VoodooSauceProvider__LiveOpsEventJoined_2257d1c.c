/* IL2CPP: VoodooSauceProvider$$LiveOpsEventJoined
void VoodooSauceProvider__LiveOpsEventJoined (VoodooSauceProvider_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$LiveOpsEventJoined
   void VoodooSauceProvider__LiveOpsEventJoined (VoodooSauceProvider_o* __this, int32_t liveOps,
   const MethodInfo* method); */

void VoodooSauceProvider__LiveOpsEventJoined_2257d1c(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b6460;
  if ((bRam0000000004f49bcb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6460);
    bRam0000000004f49bcb = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  AnalyticsLiveOpsEvent___ctor_2541140(&uStack_38,*(undefined8 *)puVar1,param_2,0);
  AnalyticsLiveOpsEvent__AddGeneralData_2541798(&uStack_38,param_2,0);
  AnalyticsLiveOpsEvent__SendEvent_25416e8(&uStack_38,0);
                    /* catch() { ... } // from try @ 02357e90 with catch @ 02357d8c */
  return;
}

