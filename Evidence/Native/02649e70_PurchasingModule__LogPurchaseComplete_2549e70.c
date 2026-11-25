/* IL2CPP: PurchasingModule$$LogPurchaseComplete
void PurchasingModule__LogPurchaseComplete (PurchasingModule_o* __this, PurchaseCompleteMessage_o m, AnalyticsPurchaseEvent_o e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$LogPurchaseComplete
   void PurchasingModule__LogPurchaseComplete (PurchasingModule_o* __this, PurchaseCompleteMessage_o
   m, AnalyticsPurchaseEvent_o e, const MethodInfo* method); */

void PurchasingModule__LogPurchaseComplete_2549e70
               (undefined8 param_1,int *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  int iStack_44;
  
                    /* try { // try from 02649e88 to 02749e9b has its CatchHandler @ 02649c2c */
                    /* try { // try from 02649e9c to 02749ea3 has its CatchHandler @ 02649f28 */
  if ((bRam0000000004f4c030 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca8c0);
    FUN_021f03f8(PTR_DAT_049b44e8);
                    /* try { // try from 02649eb8 to 02749ebb has its CatchHandler @ 02649f24 */
    FUN_021f03f8(PTR_DAT_049b5050);
                    /* try { // try from 02649ecc to 02749eef has its CatchHandler @ 02649f3c */
    FUN_021f03f8(PTR_DAT_049ca8c8);
    FUN_021f03f8(PTR_DAT_049ca8d0);
    FUN_021f03f8(PTR_DAT_049b5fc8);
                    /* try { // try from 02649ef0 to 02749f17 has its CatchHandler @ 02649c2c */
    FUN_021f03f8(PTR_DAT_049ca8d8);
    FUN_021f03f8(PTR_DAT_049ca8e0);
    FUN_021f03f8(PTR_DAT_049ca8e8);
    FUN_021f03f8(PTR_DAT_049ca8f0);
                    /* try { // try from 02649f18 to 02749f1b has its CatchHandler @ 02649f30 */
                    /* try { // try from 02649f1c to 02749f1f has its CatchHandler @ 02649f2c */
                    /* try { // try from 02649f20 to 02749f57 has its CatchHandler @ 02649c2c */
    FUN_021f03f8(PTR_DAT_049ca8f8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02649eb8 with catch @ 02649f24
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02649e9c with catch @ 02649f28
                        */
    bRam0000000004f4c030 = 1;
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02649f1c with catch @ 02649f2c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02649f18 with catch @ 02649f30
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02649e1c with catch @ 02649f34
                        */
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02649e3c with catch @ 02649f38
                        */
  uVar6 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_2 + 2),0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02649ecc with catch @ 02649f3c
                        */
                    /* try { // try from 02649f58 to 02749f5b has its CatchHandler @ 02649f74 */
  if (((uVar6 & 1) != 0) ||
     (uVar6 = System_String__Equals_2f7b508
                        (*(undefined8 *)(param_2 + 2),*(undefined8 *)PTR_DAT_049ca8d8,0),
     (uVar6 & 1) == 0)) {
                    /* try { // try from 02649f5c to 02749f77 has its CatchHandler @ 02649c2c */
    puVar1 = PTR_DAT_049b44e8;
                    /* catch() { ... } // from try @ 02649f58 with catch @ 02649f74 */
    if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                    /* try { // try from 02649f78 to 02749f7f has its CatchHandler @ 02649f88 */
      FUN_021f0574();
    }
    puVar2 = PTR_DAT_049b5050;
                    /* try { // try from 02649f80 to 02749f8b has its CatchHandler @ 02649c2c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02649f78 with catch @ 02649f88
                        */
    auStack_60 = TimeProvider__get_UtcNow_24f95ec(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar5 = PTR_DAT_049ca8f8;
    puVar4 = PTR_DAT_049ca8e8;
    puVar3 = PTR_DAT_049ca8d0;
    puVar1 = PTR_DAT_049ca8c0;
    uVar7 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    uVar7 = System_DateTimeOffset__ToString_30e3768(auStack_60,*(undefined8 *)puVar4,uVar7,0);
    iStack_44 = *param_2;
    uVar8 = thunk_FUN_0222c66c(*(undefined8 *)puVar3,&iStack_44);
    uStack_98 = param_3[1];
    uStack_a0 = *param_3;
    uStack_88 = param_3[3];
    uStack_90 = param_3[2];
    uStack_78 = param_3[5];
    uStack_80 = param_3[4];
    uStack_70 = param_3[6];
    uVar9 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_a0);
    uVar7 = System_String__Format_2f7dff0(*(undefined8 *)puVar5,uVar8,uVar7,uVar9,0);
    uVar6 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_2 + 0x16),0);
    if ((uVar6 & 1) == 0) {
      uVar7 = System_String__Concat_2f7d424
                        (uVar7,*(undefined8 *)PTR_DAT_049ca8e0,*(undefined8 *)(param_2 + 0x16),0);
    }
    if (*param_2 == 1) {
      uStack_a0 = *(undefined8 *)(param_2 + 0x18);
      uVar8 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049ca8c8,&uStack_a0);
      uVar8 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049ca8f0,uVar8,0);
      uVar7 = System_String__Concat_2f72b28(uVar7,uVar8,0);
    }
    PurchasingModule__AppendPurchasingLog_254a8ec(param_1,uVar7);
  }
  return;
}

