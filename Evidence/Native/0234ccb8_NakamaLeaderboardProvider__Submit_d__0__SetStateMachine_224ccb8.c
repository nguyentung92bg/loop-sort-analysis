/* IL2CPP: NakamaLeaderboardProvider.<Submit>d__0$$SetStateMachine
void NakamaLeaderboardProvider__Submit_d__0__SetStateMachine (NakamaLeaderboardProvider__Submit_d__0_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaLeaderboardProvider.<Submit>d__0$$SetStateMachine
   void NakamaLeaderboardProvider__Submit_d__0__SetStateMachine
   (NakamaLeaderboardProvider__Submit_d__0_o __this,
   System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method); */

undefined1  [16]
NakamaLeaderboardProvider__Submit_d__0__SetStateMachine_224ccb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* try { // try from 0234ccb8 to 0244ccbf has its CatchHandler @ 0234cce4 */
  puVar1 = PTR_DAT_049b5bb8;
                    /* try { // try from 0234ccc0 to 0244ccff has its CatchHandler @ 0234cc94 */
  if ((bRam0000000004f49b71 & 1) == 0) {
                    /* catch() { ... } // from try @ 0234ccb8 with catch @ 0234cce4 */
    FUN_021f03f8(PTR_DAT_049b5bb8);
    bRam0000000004f49b71 = 1;
  }
  uVar2 = *(undefined8 *)puVar1;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1 + 8;
  return auVar3;
}

