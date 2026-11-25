/* IL2CPP: PurchaseProcessMonitor$$HandleConfirmedOrder
void PurchaseProcessMonitor__HandleConfirmedOrder (PurchaseProcessMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseProcessMonitor$$HandleConfirmedOrder
   void PurchaseProcessMonitor__HandleConfirmedOrder (PurchaseProcessMonitor_o* __this, const
   MethodInfo* method); */

void PurchaseProcessMonitor__HandleConfirmedOrder_24569b4(undefined8 param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_38 = Phrase__get_Success_252e94c(0);
  thunk_FUN_021f190c(&uStack_38,uStack_38);
  uStack_30 = Phrase__get_PurchaseProcessSuccess_252e9c8(0);
  thunk_FUN_021f190c(&uStack_30,uStack_30);
  uStack_28 = uStack_28 & 0xffffffff00000000;
  uStack_48 = uStack_30;
  uStack_50 = uStack_38;
  uStack_40 = uStack_28;
  PurchaseProcessMonitor__ShowPopup_24567b4(param_1,&uStack_50);
  return;
}

