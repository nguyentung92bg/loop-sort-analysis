/* IL2CPP: VoodooSauceProvider$$LiveOpsPurchase
void VoodooSauceProvider__LiveOpsPurchase (VoodooSauceProvider_o* __this, int32_t liveOps, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$LiveOpsPurchase
   void VoodooSauceProvider__LiveOpsPurchase (VoodooSauceProvider_o* __this, int32_t liveOps,
   System_String_o* placement, const MethodInfo* method); */

void VoodooSauceProvider__LiveOpsPurchase_22583ac
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b6490;
  if ((bRam0000000004f49bcf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6490);
    bRam0000000004f49bcf = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  AnalyticsLiveOpsEvent___ctor_2541140(&uStack_48,*(undefined8 *)puVar1,param_2,0);
  AnalyticsLiveOpsEvent__AddGeneralData_2541798(&uStack_48,param_2,0);
                    /* catch() { ... } // from try @ 02358368 with catch @ 02358418 */
  AnalyticsLiveOpsEvent__SetPlacement_25426c4(&uStack_48,param_3,0);
  AnalyticsLiveOpsEvent__SendEvent_25416e8(&uStack_48,0);
  return;
}

