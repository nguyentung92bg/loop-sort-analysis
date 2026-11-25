/* IL2CPP: BattlePassSubMonitor$$OnBattlePassPurchase
void BattlePassSubMonitor__OnBattlePassPurchase (BattlePassSubMonitor_o* __this, FulfillPurchaseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$OnBattlePassPurchase
   void BattlePassSubMonitor__OnBattlePassPurchase (BattlePassSubMonitor_o* __this,
   FulfillPurchaseMessage_o m, const MethodInfo* method); */

void BattlePassSubMonitor__OnBattlePassPurchase_246f748(long param_1)

{
  long lVar1;
  long lVar2;
  
  BattlePassSubMonitor__RefreshProgressElements_246e670();
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x88),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar1,0,0);
    lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                      (param_1,0x928b68a9,0);
    if ((lVar1 != 0) && (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(lVar1,0), lVar1 != 0)
       ) {
      if ((bRam0000000004f581f8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a251b8,0,0);
        bRam0000000004f581f8 = 1;
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f582c8 == (code *)0x0) {
          pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
        }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f582c8)(lVar2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

