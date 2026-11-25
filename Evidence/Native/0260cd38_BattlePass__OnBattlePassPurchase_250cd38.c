/* IL2CPP: BattlePass$$OnBattlePassPurchase
void BattlePass__OnBattlePassPurchase (BattlePass_o* __this, FulfillPurchaseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$OnBattlePassPurchase
   void BattlePass__OnBattlePassPurchase (BattlePass_o* __this, FulfillPurchaseMessage_o m, const
   MethodInfo* method); */

void BattlePass__OnBattlePassPurchase_250cd38(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  
                    /* try { // try from 0260cd40 to 0270cd4f has its CatchHandler @ 0260cd50 */
  if ((bRam0000000004f4bdda & 1) == 0) {
                    /* catch() { ... } // from try @ 0260ccd8 with catch @ 0260cd50
                       catch() { ... } // from try @ 0260cd40 with catch @ 0260cd50 */
                    /* try { // try from 0260cd54 to 0270cd57 has its CatchHandler @ 0260cd60 */
                    /* try { // try from 0260cd58 to 0270cd63 has its CatchHandler @ 0260c868 */
    FUN_021f03f8(PTR_DAT_049b61b8);
                    /* catch() { ... } // from try @ 0260cd54 with catch @ 0260cd60 */
    bRam0000000004f4bdda = 1;
  }
  CloudPrefsBool__Set_24eb1bc(param_1 + 0x68,1,0);
  if (*(long *)(param_1 + 0x50) != 0) {
    AdsModule__EnableNoAds_253d030(*(long *)(param_1 + 0x50),0);
    puVar1 = PTR_DAT_049b6110;
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)PTR_DAT_049b61b8;
      if ((bRam0000000004f4bfbd & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b6110,10,uVar5,0);
        FUN_021f03f8(PTR_DAT_049ca4d8);
        bRam0000000004f4bfbd = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = Extensions__HasTracking_24e7838(10,0);
      if (((uVar3 & 1) == 0) || (plVar7 = *(long **)(lVar2 + 0x10), plVar7 == (long *)0x0)) {
        return;
      }
      lVar2 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049ca4d8) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0x18) * 0x10 + 0x138);
            goto LAB_026409fc;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049ca4d8,0x18);
LAB_026409fc:
                    /* WARNING: Could not recover jumptable at 0x02640a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar7,10,uVar5,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

