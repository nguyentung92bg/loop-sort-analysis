/* IL2CPP: AnalyticsModule$$OnOutOfGolds
void AnalyticsModule__OnOutOfGolds (AnalyticsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$OnOutOfGolds
   void AnalyticsModule__OnOutOfGolds (AnalyticsModule_o* __this, const MethodInfo* method); */

void AnalyticsModule__OnOutOfGolds_253fe3c(void)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049ca500;
                    /* catch() { ... } // from try @ 0263fd2c with catch @ 0263fe3c */
                    /* catch() { ... } // from try @ 0263fab4 with catch @ 0263fe40 */
                    /* catch() { ... } // from try @ 0263fc08 with catch @ 0263fe44
                       catch() { ... } // from try @ 0263fd28 with catch @ 0263fe44 */
                    /* catch() { ... } // from try @ 0263f904 with catch @ 0263fe48
                       catch() { ... } // from try @ 0263fb74 with catch @ 0263fe48 */
                    /* catch() { ... } // from try @ 0263fc1c with catch @ 0263fe4c
                       catch() { ... } // from try @ 0263fd30 with catch @ 0263fe4c */
                    /* catch() { ... } // from try @ 0263fd24 with catch @ 0263fe58 */
  if ((bRam0000000004f4bfb8 & 1) == 0) {
                    /* catch() { ... } // from try @ 0263f4a4 with catch @ 0263fe5c */
                    /* catch() { ... } // from try @ 0263fd20 with catch @ 0263fe60 */
                    /* catch() { ... } // from try @ 0263f4b4 with catch @ 0263fe64 */
    FUN_021f03f8(PTR_DAT_049ca500);
                    /* catch() { ... } // from try @ 0263fd1c with catch @ 0263fe68 */
                    /* catch() { ... } // from try @ 0263f470 with catch @ 0263fe6c */
    bRam0000000004f4bfb8 = 1;
  }
                    /* catch() { ... } // from try @ 0263f40c with catch @ 0263fe70 */
  uStack_30 = 0;
  uStack_28 = 0;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  AnalyticsCustomEvent___ctor_253ff58(&uStack_30,*(undefined8 *)puVar1);
  auStack_40 = AnalyticsCustomEvent__AddGameLevel_253ffe8(&uStack_30);
                    /* try { // try from 0263fe90 to 0273fe93 has its CatchHandler @ 0263fea0 */
  auVar2 = AnalyticsCustomEvent__AddDaysSinceInstall_25400b4(auStack_40);
  auStack_40 = auVar2;
                    /* catch() { ... } // from try @ 0263fe90 with catch @ 0263fea0 */
  auVar2 = AnalyticsCustomEvent__AddGameCoinBalance_2540228(auStack_40);
  auStack_40 = auVar2;
                    /* try { // try from 0263fea8 to 0273feaf has its CatchHandler @ 0263ff80 */
  AnalyticsCustomEvent__SendEvent_2540338(auStack_40);
                    /* try { // try from 0263feb0 to 0273fec7 has its CatchHandler @ 0263f174 */
  return;
}

