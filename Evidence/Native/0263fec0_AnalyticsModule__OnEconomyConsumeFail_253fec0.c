/* IL2CPP: AnalyticsModule$$OnEconomyConsumeFail
void AnalyticsModule__OnEconomyConsumeFail (AnalyticsModule_o* __this, EconomyConsumeFailMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$OnEconomyConsumeFail
   void AnalyticsModule__OnEconomyConsumeFail (AnalyticsModule_o* __this,
   EconomyConsumeFailMessage_o m, const MethodInfo* method); */

void AnalyticsModule__OnEconomyConsumeFail_253fec0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049ca500;
                    /* try { // try from 0263fec8 to 0273fedf has its CatchHandler @ 0263ff70 */
  if (*(int *)(param_2 + 0x10) == 1) {
    if ((bRam0000000004f4bfb8 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049ca500);
      bRam0000000004f4bfb8 = 1;
    }
    uStack_30 = 0;
    uStack_28 = 0;
    auStack_40._0_8_ = 0;
    auStack_40._8_8_ = 0;
    AnalyticsCustomEvent___ctor_253ff58(&uStack_30,*(undefined8 *)puVar1);
    auStack_40 = AnalyticsCustomEvent__AddGameLevel_253ffe8(&uStack_30);
    auVar2 = AnalyticsCustomEvent__AddDaysSinceInstall_25400b4(auStack_40);
    auStack_40 = auVar2;
    auVar2 = AnalyticsCustomEvent__AddGameCoinBalance_2540228(auStack_40);
    auStack_40 = auVar2;
    AnalyticsCustomEvent__SendEvent_2540338(auStack_40);
    return;
  }
  return;
}

