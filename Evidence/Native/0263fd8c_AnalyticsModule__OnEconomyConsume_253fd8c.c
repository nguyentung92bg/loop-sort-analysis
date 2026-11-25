/* IL2CPP: AnalyticsModule$$OnEconomyConsume
void AnalyticsModule__OnEconomyConsume (AnalyticsModule_o* __this, EconomyConsumeMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$OnEconomyConsume
   void AnalyticsModule__OnEconomyConsume (AnalyticsModule_o* __this, EconomyConsumeMessage_o m,
   const MethodInfo* method); */

void AnalyticsModule__OnEconomyConsume_253fd8c(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_78 [56];
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* catch() { ... } // from try @ 0263f9d0 with catch @ 0263fd8c */
                    /* catch() { ... } // from try @ 0263f998 with catch @ 0263fd90 */
                    /* catch() { ... } // from try @ 0263f824 with catch @ 0263fd94 */
                    /* catch() { ... } // from try @ 0263f804 with catch @ 0263fd98 */
                    /* catch() { ... } // from try @ 0263f7e4 with catch @ 0263fd9c */
                    /* catch() { ... } // from try @ 0263f7d4 with catch @ 0263fda0 */
                    /* catch() { ... } // from try @ 0263f7d0 with catch @ 0263fda4 */
                    /* catch() { ... } // from try @ 0263f7b0 with catch @ 0263fda8 */
  if ((bRam0000000004f4bfb6 & 1) == 0) {
                    /* catch() { ... } // from try @ 0263f760 with catch @ 0263fdac */
                    /* catch() { ... } // from try @ 0263f75c with catch @ 0263fdb0 */
                    /* catch() { ... } // from try @ 0263f748 with catch @ 0263fdb4 */
    FUN_021f03f8(PTR_DAT_049c4228);
                    /* catch() { ... } // from try @ 0263f71c with catch @ 0263fdb8 */
                    /* catch() { ... } // from try @ 0263f6bc with catch @ 0263fdbc */
    bRam0000000004f4bfb6 = 1;
  }
                    /* catch() { ... } // from try @ 0263f6b8 with catch @ 0263fdc0 */
                    /* catch() { ... } // from try @ 0263f690 with catch @ 0263fdc4 */
                    /* catch() { ... } // from try @ 0263f674 with catch @ 0263fdc8 */
                    /* catch() { ... } // from try @ 0263f600 with catch @ 0263fdcc */
  func_0x04608620(auStack_78,param_2,0x58);
                    /* catch() { ... } // from try @ 0263fd5c with catch @ 0263fdd0 */
                    /* catch() { ... } // from try @ 0263f5ec with catch @ 0263fdd4 */
                    /* catch() { ... } // from try @ 0263fd54 with catch @ 0263fdd8 */
  AnalyticsModule__ConsumeItem_253f124(param_1,auStack_78);
                    /* catch() { ... } // from try @ 0263fd48 with catch @ 0263fddc */
                    /* catch() { ... } // from try @ 0263f324 with catch @ 0263fde0 */
                    /* catch() { ... } // from try @ 0263f2f8 with catch @ 0263fde4 */
                    /* catch() { ... } // from try @ 0263fd38 with catch @ 0263fde8 */
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x30), lVar3 != 0)) {
                    /* catch() { ... } // from try @ 0263f7a4 with catch @ 0263fdec
                       catch() { ... } // from try @ 0263fd60 with catch @ 0263fdec */
                    /* catch() { ... } // from try @ 0263f77c with catch @ 0263fdf0 */
                    /* catch() { ... } // from try @ 0263f5d4 with catch @ 0263fdf4
                       catch() { ... } // from try @ 0263fd58 with catch @ 0263fdf4 */
                    /* catch() { ... } // from try @ 0263f574 with catch @ 0263fdf8 */
                    /* catch() { ... } // from try @ 0263f538 with catch @ 0263fdfc
                       catch() { ... } // from try @ 0263fd4c with catch @ 0263fdfc */
    iVar2 = ConstantSheetBase_object___GetInt_281c070(lVar3,0xd,*(undefined8 *)PTR_DAT_049c4228);
    puVar1 = PTR_DAT_049ca500;
                    /* catch() { ... } // from try @ 0263f844 with catch @ 0263fe00 */
                    /* catch() { ... } // from try @ 0263fa94 with catch @ 0263fe04 */
                    /* catch() { ... } // from try @ 0263fa74 with catch @ 0263fe08 */
                    /* catch() { ... } // from try @ 0263fa54 with catch @ 0263fe0c */
                    /* catch() { ... } // from try @ 0263fd34 with catch @ 0263fe10 */
                    /* catch() { ... } // from try @ 0263fa40 with catch @ 0263fe14 */
    if ((*(int *)(param_2 + 0x10) == 1) && (*(int *)(param_2 + 0x54) < iVar2)) {
      if ((bRam0000000004f4bfb8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049ca500);
        bRam0000000004f4bfb8 = 1;
      }
      uStack_30 = 0;
      uStack_28 = 0;
      auStack_40._0_8_ = 0;
      auStack_40._8_8_ = 0;
      AnalyticsCustomEvent___ctor_253ff58(&uStack_30,*(undefined8 *)puVar1);
      auStack_40 = AnalyticsCustomEvent__AddGameLevel_253ffe8(&uStack_30);
      auVar4 = AnalyticsCustomEvent__AddDaysSinceInstall_25400b4(auStack_40);
      auStack_40 = auVar4;
      auVar4 = AnalyticsCustomEvent__AddGameCoinBalance_2540228(auStack_40);
      auStack_40 = auVar4;
      AnalyticsCustomEvent__SendEvent_2540338(auStack_40);
      return;
    }
                    /* catch() { ... } // from try @ 0263f9e4 with catch @ 0263fe28 */
                    /* catch() { ... } // from try @ 0263f37c with catch @ 0263fe2c */
                    /* catch() { ... } // from try @ 0263f334 with catch @ 0263fe30
                       catch() { ... } // from try @ 0263fd44 with catch @ 0263fe30 */
                    /* catch() { ... } // from try @ 0263f300 with catch @ 0263fe34
                       catch() { ... } // from try @ 0263fd40 with catch @ 0263fe34 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0263f2e0 with catch @ 0263fe38
                       catch() { ... } // from try @ 0263fd3c with catch @ 0263fe38 */
  FUN_021f06a0();
}

