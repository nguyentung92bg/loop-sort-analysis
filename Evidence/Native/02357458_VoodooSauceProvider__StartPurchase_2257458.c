/* IL2CPP: VoodooSauceProvider$$StartPurchase
void VoodooSauceProvider__StartPurchase (VoodooSauceProvider_o* __this, AnalyticsPurchaseEvent_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$StartPurchase
   void VoodooSauceProvider__StartPurchase (VoodooSauceProvider_o* __this, AnalyticsPurchaseEvent_o
   args, const MethodInfo* method); */

void VoodooSauceProvider__StartPurchase_2257458(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b6420;
  if ((bRam0000000004f49bc1 & 1) == 0) {
                    /* try { // try from 02357484 to 0245748b has its CatchHandler @ 023574d8 */
    FUN_021f03f8(PTR_DAT_049b6420);
                    /* try { // try from 0235748c to 024574eb has its CatchHandler @ 02357438 */
    bRam0000000004f49bc1 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  AnalyticsCustomEvent___ctor_253ff58(&uStack_30,*(undefined8 *)puVar1,0);
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_40 = param_2[6];
  VoodooSauceProvider__SendPurchaseEvent_22574d8(&uStack_70,uStack_30,uStack_28);
  return;
}

