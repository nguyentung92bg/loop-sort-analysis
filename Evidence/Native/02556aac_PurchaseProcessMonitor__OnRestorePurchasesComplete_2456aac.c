/* IL2CPP: PurchaseProcessMonitor$$OnRestorePurchasesComplete
void PurchaseProcessMonitor__OnRestorePurchasesComplete (PurchaseProcessMonitor_o* __this, RestorePurchasesCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseProcessMonitor$$OnRestorePurchasesComplete
   void PurchaseProcessMonitor__OnRestorePurchasesComplete (PurchaseProcessMonitor_o* __this,
   RestorePurchasesCompleteMessage_o m, const MethodInfo* method); */

void PurchaseProcessMonitor__OnRestorePurchasesComplete_2456aac(long param_1,uint param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if ((param_2 & 1) == 0) {
    uStack_38 = Phrase__get_Failed_252ea44();
    thunk_FUN_021f190c(&uStack_38,uStack_38);
    uStack_30 = Phrase__get_PurchaseProcessRestoreFailed_252ebb8(0);
  }
  else {
    uStack_38 = Phrase__get_Success_252e94c(0);
    thunk_FUN_021f190c(&uStack_38,uStack_38);
    uStack_30 = Phrase__get_PurchaseProcessRestoreSuccess_252eb3c(0);
  }
  thunk_FUN_021f190c(&uStack_30,uStack_30);
  uStack_28 = CONCAT44(uStack_28._4_4_,param_2) & 0xffffffff00000001 ^ 1;
  if (param_1 != 0) {
    uStack_48 = uStack_30;
    uStack_50 = uStack_38;
    uStack_40 = uStack_28;
    PurchaseProcessMonitor__ShowPopup_24567b4(param_1,&uStack_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

