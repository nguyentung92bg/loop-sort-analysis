/* IL2CPP: AreaOffer$$OnPurchase
void AreaOffer__OnPurchase (AreaOffer_o* __this, FulfillPurchaseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$OnPurchase
   void AreaOffer__OnPurchase (AreaOffer_o* __this, FulfillPurchaseMessage_o m, const MethodInfo*
   method); */

void AreaOffer__OnPurchase_250a824(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
                    /* try { // try from 0260a838 to 0270a83b has its CatchHandler @ 0260b044 */
  if ((bRam0000000004f4bdc0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4bdc0 = 1;
  }
                    /* try { // try from 0260a87c to 0270a893 has its CatchHandler @ 0260b080 */
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  lVar4 = param_1[4];
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar2 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  if (lVar4 != 0) {
    uVar3 = LiveOpsModule__IsJoined_2546cc0(lVar4,uVar2,0);
                    /* try { // try from 0260a8b8 to 0270a8bb has its CatchHandler @ 0260b074 */
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar4 = param_1[4];
    uVar2 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    if (lVar4 != 0) {
                    /* try { // try from 0260a8dc to 0270a8e7 has its CatchHandler @ 0260af64 */
      LiveOpsModule__Complete_2546f00(lVar4,uVar2,0);
      if (param_1[2] != 0) {
        lVar4 = *(long *)(param_1[2] + 0x88);
        uVar2 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
        if (lVar4 != 0) {
          auStack_30._0_4_ = uVar2;
                    /* try { // try from 0260a920 to 0270a93f has its CatchHandler @ 0260b074 */
          lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                            (lVar4,auStack_30,*(undefined8 *)PTR_DAT_049c2c68);
          if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                    /* try { // try from 0260a940 to 0270a967 has its CatchHandler @ 0260a264 */
            FUN_021f0574(*(long *)PTR_DAT_049b5fc8);
          }
          auStack_40 = TimeProvider__get_UtcNow_24f95ec(0);
          if (lVar4 != 0) {
            iVar1 = *(int *)(lVar4 + 0x1c);
                    /* try { // try from 0260a968 to 0270a973 has its CatchHandler @ 0260afa0 */
            if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
              FUN_021f0574();
            }
            auVar5 = System_DateTimeOffset__AddMinutes_30e182c((double)iVar1,auStack_40,0);
            auStack_50 = LiveOpsSheet_Row__GetJoinStartTime_25636b4
                                   (lVar4,auStack_40._0_8_,auStack_40._8_8_,0);
            auVar6 = System_DateTimeOffset__AddMinutes_30e182c
                               ((double)*(int *)(lVar4 + 0x18),auStack_50,0);
                    /* try { // try from 0260a9b8 to 0270a9c3 has its CatchHandler @ 0260b088 */
            uStack_78 = *(undefined8 *)(lVar4 + 0xa0);
            uStack_80 = *(undefined8 *)(lVar4 + 0x98);
            uStack_68 = *(undefined8 *)(lVar4 + 0xb0);
            uStack_70 = *(undefined8 *)(lVar4 + 0xa8);
            uStack_58 = *(undefined8 *)(lVar4 + 0xc0);
            uStack_60 = *(undefined8 *)(lVar4 + 0xb8);
            uVar3 = System_DateTimeOffset__op_LessThan_30e4780
                              (auVar5._0_8_,auVar5._8_8_,auVar6._0_8_,auVar6._8_8_,0);
                    /* try { // try from 0260a9e4 to 0270a9eb has its CatchHandler @ 0260b084 */
            if ((uVar3 & 1) == 0) {
              auVar5 = LiveOpsSheet_Row__GetNextJoinStartTime_2563b6c
                                 (lVar4,auStack_40._0_8_,auStack_40._8_8_,0);
            }
                    /* try { // try from 0260aa00 to 0270aa23 has its CatchHandler @ 0260aff4 */
            auStack_30 = auVar5;
            CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                      (&uStack_80,auStack_30,*(undefined8 *)PTR_DAT_049b5fa0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

