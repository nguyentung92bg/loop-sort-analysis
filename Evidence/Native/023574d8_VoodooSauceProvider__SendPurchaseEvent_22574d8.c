/* IL2CPP: VoodooSauceProvider$$SendPurchaseEvent
void VoodooSauceProvider__SendPurchaseEvent (AnalyticsPurchaseEvent_o purchaseEvent, AnalyticsCustomEvent_o customEvent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$SendPurchaseEvent
   void VoodooSauceProvider__SendPurchaseEvent (AnalyticsPurchaseEvent_o purchaseEvent,
   AnalyticsCustomEvent_o customEvent, const MethodInfo* method); */

void VoodooSauceProvider__SendPurchaseEvent_22574d8
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  puVar4 = PTR_DAT_049b6438;
  puVar3 = PTR_DAT_049b6430;
  puVar2 = PTR_DAT_049b6428;
  puVar1 = PTR_DAT_049b6088;
                    /* catch() { ... } // from try @ 02357484 with catch @ 023574d8 */
                    /* try { // try from 023574f8 to 024574fb has its CatchHandler @ 02357504 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023574f8 with catch @ 02357504
                        */
                    /* try { // try from 02357508 to 02457537 has its CatchHandler @ 02357508
                       catch() { ... } // from try @ 02357508 with catch @ 02357508
                       catch() { ... } // from try @ 02357544 with catch @ 02357508 */
  uStack_50 = param_2;
  uStack_48 = param_3;
  if ((bRam0000000004f49bc4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6430);
    FUN_021f03f8(PTR_DAT_049b6438);
                    /* try { // try from 02357538 to 02457543 has its CatchHandler @ 02357564 */
    FUN_021f03f8(PTR_DAT_049b6428);
                    /* try { // try from 02357544 to 0245757f has its CatchHandler @ 02357508 */
    FUN_021f03f8(PTR_DAT_049b6088);
    bRam0000000004f49bc4 = 1;
  }
                    /* catch() { ... } // from try @ 02357538 with catch @ 02357564 */
  uStack_34 = *(undefined4 *)(param_1 + 8);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x78),&uStack_34);
                    /* try { // try from 02357580 to 024575f3 has its CatchHandler @ 02357580
                       catch() { ... } // from try @ 02357580 with catch @ 02357580
                       catch() { ... } // from try @ 02357608 with catch @ 02357580 */
  auStack_60 = AnalyticsCustomEvent__AddCustom_25410d0(&uStack_50,*(undefined8 *)puVar2,uVar5,0);
  auVar6 = AnalyticsCustomEvent__AddCustom_25410d0
                     (auStack_60,*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x20),0);
  auStack_60 = auVar6;
  auVar6 = AnalyticsCustomEvent__AddCustom_25410d0
                     (auStack_60,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x30),0);
  auStack_60 = auVar6;
  auVar6 = AnalyticsCustomEvent__AddCustom_25410d0
                     (auStack_60,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x10),0);
  auStack_60 = auVar6;
  auVar6 = AnalyticsCustomEvent__AddGameLevel_253ffe8(auStack_60,0);
  auStack_60 = auVar6;
                    /* try { // try from 023575f4 to 02457607 has its CatchHandler @ 0235761c */
  auVar6 = AnalyticsCustomEvent__AddDaysSinceInstall_25400b4(auStack_60,0);
  auStack_60 = auVar6;
                    /* try { // try from 02357608 to 02457633 has its CatchHandler @ 02357580 */
  AnalyticsCustomEvent__SendEvent_2540338(auStack_60,0);
                    /* catch() { ... } // from try @ 023575f4 with catch @ 0235761c */
  return;
}

