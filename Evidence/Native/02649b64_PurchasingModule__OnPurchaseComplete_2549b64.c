/* IL2CPP: PurchasingModule$$OnPurchaseComplete
void PurchasingModule__OnPurchaseComplete (PurchasingModule_o* __this, PurchaseCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$OnPurchaseComplete
   void PurchasingModule__OnPurchaseComplete (PurchasingModule_o* __this, PurchaseCompleteMessage_o
   m, const MethodInfo* method); */

void PurchasingModule__OnPurchaseComplete_2549b64(long param_1,int *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [104];
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [88];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
                    /* try { // try from 02649b68 to 02749b7f has its CatchHandler @ 02649be0 */
  lVar1 = tpidr_el0;
                    /* try { // try from 02649b80 to 02749bcf has its CatchHandler @ 02649880 */
  lStack_48 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4c028 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4c028 = 1;
  }
  uStack_1c0 = 0;
  uStack_50 = 0;
  uStack_1f8 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
                    /* try { // try from 02649bd0 to 02749bdf has its CatchHandler @ 02649be0 */
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
                    /* catch() { ... } // from try @ 02649b68 with catch @ 02649be0
                       catch() { ... } // from try @ 02649bd0 with catch @ 02649be0 */
  func_0x04608620(auStack_108,param_2,0x68);
                    /* try { // try from 02649be4 to 02749be7 has its CatchHandler @ 02649bf0 */
                    /* try { // try from 02649be8 to 02749bf3 has its CatchHandler @ 02649880 */
                    /* catch() { ... } // from try @ 02649be4 with catch @ 02649bf0 */
  func_0x04608620(auStack_150,auStack_f8,0x48);
  AnalyticsPurchaseEvent__CreateFrom_2540ca4(&uStack_1f0,auStack_150);
  if (*param_2 == 2) {
    uStack_1c0 = *(undefined8 *)(param_2 + 2);
    thunk_FUN_021f190c(&uStack_1c0);
    if (*(long *)(param_1 + 0x20) != 0) {
      uStack_278 = uStack_1e8;
      uStack_280 = uStack_1f0;
      uStack_268 = uStack_1d8;
      uStack_270 = uStack_1e0;
      uStack_258 = uStack_1c8;
      uStack_260 = uStack_1d0;
      uStack_250 = uStack_1c0;
      AnalyticsModule__FailPurchase_253f414(*(long *)(param_1 + 0x20),&uStack_280);
      goto LAB_02649d18;
    }
  }
  else {
    if (*param_2 == 1) {
      PurchasingModule__GetProductMetadata_2549880(&uStack_a0,param_1,*(undefined8 *)(param_2 + 4));
                    /* try { // try from 02649c2c to 02749e1b has its CatchHandler @ 02649c2c
                       catch() { ... } // from try @ 02649c2c with catch @ 02649c2c
                       catch() { ... } // from try @ 02649e88 with catch @ 02649c2c
                       catch() { ... } // from try @ 02649ef0 with catch @ 02649c2c
                       catch() { ... } // from try @ 02649f20 with catch @ 02649c2c
                       catch() { ... } // from try @ 02649f5c with catch @ 02649c2c
                       catch() { ... } // from try @ 02649f80 with catch @ 02649c2c */
      iVar3 = CloudPrefsInt__get_Value_24e99c0(&uStack_68,0);
      CloudPrefsInt__Set_24e9aa8(&uStack_68,iVar3 + 1,0);
      puVar2 = PTR_DAT_049b5310;
      lVar4 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(lVar4 + 0xb8);
      iVar3 = CloudPrefsInt__get_Value_24e99c0(lVar4 + 0x578,0);
      CloudPrefsInt__set_Value_24e9a2c(lVar4 + 0x578,iVar3 + 1,0);
      lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
      fVar5 = (float)CloudPrefsFloat__get_Value_24ea234(lVar4 + 0x558,0);
      CloudPrefsFloat__set_Value_24ea2a0(fVar5 + (float)uStack_a0,lVar4 + 0x558,0);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_02649d88;
      uStack_238 = uStack_1e8;
      uStack_240 = uStack_1f0;
      uStack_228 = uStack_1d8;
      uStack_230 = uStack_1e0;
      uStack_218 = uStack_1c8;
      uStack_220 = uStack_1d0;
      uStack_210 = uStack_1c0;
      AnalyticsModule__CompletePurchase_253f2e8(*(long *)(param_1 + 0x20),&uStack_240);
    }
LAB_02649d18:
    if (*(long *)(param_1 + 0x28) != 0) {
      CloudSaveModule__Flush_24ec420(*(long *)(param_1 + 0x28),0);
      func_0x04608620(auStack_1b8,param_2,0x68);
      uStack_298 = uStack_1c8;
      uStack_2a0 = uStack_1d0;
      uStack_2b8 = uStack_1e8;
      uStack_2c0 = uStack_1f0;
      uStack_2a8 = uStack_1d8;
      uStack_2b0 = uStack_1e0;
      uStack_290 = uStack_1c0;
      PurchasingModule__LogPurchaseComplete_2549e70(param_1,auStack_1b8,&uStack_2c0);
      if (*(long *)(lVar1 + 0x28) == lStack_48) {
        return;
      }
      goto LAB_02649e68;
    }
  }
LAB_02649d88:
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02649e68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

