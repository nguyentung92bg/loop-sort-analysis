/* IL2CPP: DailyChallengeSubMonitor$$SetProgress
void DailyChallengeSubMonitor__SetProgress (DailyChallengeSubMonitor_o* __this, int32_t completedDayCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeSubMonitor$$SetProgress
   void DailyChallengeSubMonitor__SetProgress (DailyChallengeSubMonitor_o* __this, int32_t
   completedDayCount, const MethodInfo* method); */

void DailyChallengeSubMonitor__SetProgress_2473030(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined4 uStack_14;
  
                    /* try { // try from 02573034 to 0267303f has its CatchHandler @ 02573428 */
  uStack_14 = param_2;
  uVar1 = System_Int32__ToString_30fbaa0(&uStack_14,0);
                    /* try { // try from 02573054 to 0267305b has its CatchHandler @ 025733fc */
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x66f2f88a,uVar1,0);
                    /* try { // try from 0257306c to 02673073 has its CatchHandler @ 02573420 */
  lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c(param_1,0x6d8b1339,0);
                    /* try { // try from 02573078 to 02673083 has its CatchHandler @ 025733f8 */
  if (lVar2 != 0) {
    lVar2 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar2,0);
                    /* try { // try from 02573084 to 02673093 has its CatchHandler @ 0257341c */
    auVar3 = DailyChallengeSubMonitor__GetFillProgress_24730b8(param_1,uStack_14);
    if (lVar2 != 0) {
                    /* try { // try from 025730a4 to 026730c7 has its CatchHandler @ 02573418 */
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0(auVar3,0x3f800000,lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

