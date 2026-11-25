/* IL2CPP: WeeklyMissions$$SaveProgress
void WeeklyMissions__SaveProgress (WeeklyMissions_o* __this, WeeklyMissionsProgress_o progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$SaveProgress
   void WeeklyMissions__SaveProgress (WeeklyMissions_o* __this, WeeklyMissionsProgress_o progress,
   const MethodInfo* method); */

void WeeklyMissions__SaveProgress_252ae2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_80 [80];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bec5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bec5 = 1;
  }
  puVar2 = PTR_DAT_049c9bb8;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574(lVar3);
    lVar3 = *(long *)puVar1;
  }
                    /* try { // try from 0262ae98 to 0272ae9b has its CatchHandler @ 0262af14 */
                    /* try { // try from 0262ae9c to 0272ae9f has its CatchHandler @ 0262af10 */
                    /* try { // try from 0262aea0 to 0272aea3 has its CatchHandler @ 0262af0c */
                    /* catch() { ... } // from try @ 0262a7a4 with catch @ 0262aea4
                       try { // try from 0262aea4 to 0272aedb has its CatchHandler @ 0262a0f8 */
  func_0x04608620(auStack_80,param_2,0x50);
                    /* catch() { ... } // from try @ 0262a790 with catch @ 0262aea8 */
                    /* catch() { ... } // from try @ 0262a540 with catch @ 0262aeac */
                    /* catch() { ... } // from try @ 0262a6f0 with catch @ 0262aeb0 */
                    /* catch() { ... } // from try @ 0262a560 with catch @ 0262aeb4 */
                    /* catch() { ... } // from try @ 0262a7b4 with catch @ 0262aeb8 */
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (*(long *)(lVar3 + 0xb8) + 0x488,auStack_80,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 0262a718 with catch @ 0262aebc */
  WeeklyMissions__TrackCompletedMissions_252aed8(param_1);
  return;
}

