/* IL2CPP: CoinRushSubMonitor$$OnPurchase
void CoinRushSubMonitor__OnPurchase (CoinRushSubMonitor_o* __this, FulfillPurchaseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRushSubMonitor$$OnPurchase
   void CoinRushSubMonitor__OnPurchase (CoinRushSubMonitor_o* __this, FulfillPurchaseMessage_o m,
   const MethodInfo* method); */

void CoinRushSubMonitor__OnPurchase_2471318(undefined8 param_1)

{
  long lVar1;
  long lStack_18;
  
  if ((bRam0000000004f4b9a7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4b40);
    bRam0000000004f4b9a7 = 1;
  }
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x2af94178,0);
  lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x21c0801,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar1,&lStack_18,*(undefined8 *)PTR_DAT_049c4b40);
    if (lStack_18 != 0) {
                    /* try { // try from 02571390 to 02671393 has its CatchHandler @ 025714e0 */
      UnityEngine_UI_LoopScrollRectBase__RefreshCells_2ebd514(lStack_18,0);
                    /* try { // try from 02571398 to 0267139b has its CatchHandler @ 025714dc */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025713a0 to 026713a3 has its CatchHandler @ 025714d8 */
  FUN_021f06a0();
}

