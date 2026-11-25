/* IL2CPP: FulfillModule$$OnFulfillPurchase
void FulfillModule__OnFulfillPurchase (FulfillModule_o* __this, FulfillPurchaseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule$$OnFulfillPurchase
   void FulfillModule__OnFulfillPurchase (FulfillModule_o* __this, FulfillPurchaseMessage_o m, const
   MethodInfo* method); */

void FulfillModule__OnFulfillPurchase_254304c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_78 [80];
  long lStack_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 02643060 to 02743063 has its CatchHandler @ 02643114 */
  lStack_28 = *(long *)(lVar1 + 0x28);
  func_0x04608620(auStack_78,param_2,0x50);
  FulfillModule__FulfillPurchase_25430a4(param_1,auStack_78);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

