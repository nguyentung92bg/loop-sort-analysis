/* IL2CPP: PurchaseProcessMonitor$$HandleFailedOrder
void PurchaseProcessMonitor__HandleFailedOrder (PurchaseProcessMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseProcessMonitor$$HandleFailedOrder
   void PurchaseProcessMonitor__HandleFailedOrder (PurchaseProcessMonitor_o* __this, const
   MethodInfo* method); */

void PurchaseProcessMonitor__HandleFailedOrder_2456a2c(undefined8 param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_38 = Phrase__get_Failed_252ea44(0);
  thunk_FUN_021f190c(&uStack_38,uStack_38);
  uStack_30 = Phrase__get_PurchaseProcessFailed_252eac0(0);
  thunk_FUN_021f190c(&uStack_30,uStack_30);
  uStack_28 = CONCAT44(uStack_28._4_4_,1);
  uStack_48 = uStack_30;
  uStack_50 = uStack_38;
  uStack_40 = uStack_28;
  PurchaseProcessMonitor__ShowPopup_24567b4(param_1,&uStack_50);
  return;
}

