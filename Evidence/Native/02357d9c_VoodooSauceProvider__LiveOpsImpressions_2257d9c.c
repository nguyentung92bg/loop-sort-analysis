/* IL2CPP: VoodooSauceProvider$$LiveOpsImpressions
void VoodooSauceProvider__LiveOpsImpressions (VoodooSauceProvider_o* __this, int32_t liveOps, int32_t trigger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$LiveOpsImpressions
   void VoodooSauceProvider__LiveOpsImpressions (VoodooSauceProvider_o* __this, int32_t liveOps,
   int32_t trigger, const MethodInfo* method); */

void VoodooSauceProvider__LiveOpsImpressions_2257d9c
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b6468;
  if ((bRam0000000004f49bcc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6468);
    bRam0000000004f49bcc = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  AnalyticsLiveOpsEvent___ctor_2541140(&uStack_48,*(undefined8 *)puVar1,param_2,0);
  AnalyticsLiveOpsEvent__AddGeneralData_2541798(&uStack_48,param_2,0);
  AnalyticsLiveOpsEvent__SetImpressionTrigger_2541f24(&uStack_48,param_3,0);
                    /* try { // try from 02357e1c to 02457e27 has its CatchHandler @ 02357ed0 */
  AnalyticsLiveOpsEvent__SendEvent_25416e8(&uStack_48,0);
  return;
}

