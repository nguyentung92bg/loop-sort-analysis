/* IL2CPP: DailyChallenge$$Prepare
void DailyChallenge__Prepare (DailyChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$Prepare
   void DailyChallenge__Prepare (DailyChallenge_o* __this, const MethodInfo* method); */

void DailyChallenge__Prepare_25157b4(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 026157b4 to 027157c7 has its CatchHandler @ 0261696c */
                    /* try { // try from 026157cc to 027157e3 has its CatchHandler @ 02616968 */
  if ((bRam0000000004f4be11 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9368);
    bRam0000000004f4be11 = 1;
  }
  puVar1 = PTR_DAT_049c9368;
                    /* try { // try from 026157e8 to 027157f7 has its CatchHandler @ 02616918 */
  if (*(long *)(param_1 + 0x20) != 0) {
    DailyChallengeSheetModule__LoadAsync_255e54c(&uStack_38,*(long *)(param_1 + 0x20),0);
                    /* try { // try from 02615804 to 0271581f has its CatchHandler @ 02616998 */
    uStack_48 = uStack_30;
    uStack_50 = uStack_38;
    uStack_40 = uStack_28;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget___Il2CppFullySharedGenericType__2719ad0
              (&uStack_50,*(undefined8 *)puVar1);
                    /* try { // try from 02615820 to 0271582f has its CatchHandler @ 02616914 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

