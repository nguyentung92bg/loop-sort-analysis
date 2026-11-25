/* IL2CPP: DailyChallenge$$IsRewardClaimed
bool DailyChallenge__IsRewardClaimed (DailyChallenge_o* __this, DailyChallengeRewardSheet_Day_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$IsRewardClaimed
   bool DailyChallenge__IsRewardClaimed (DailyChallenge_o* __this, DailyChallengeRewardSheet_Day_o*
   data, const MethodInfo* method); */

uint DailyChallenge__IsRewardClaimed_2515e6c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_24;
  
  puVar2 = PTR_DAT_049b5310;
                    /* try { // try from 02615e70 to 02715e87 has its CatchHandler @ 026168b0 */
  if ((bRam0000000004f4be18 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 02615e9c to 02715ebf has its CatchHandler @ 0261694c */
    FUN_021f03f8(PTR_DAT_049c2cf0);
    bRam0000000004f4be18 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(lVar4 + 0xb8);
                    /* try { // try from 02615ecc to 02715ed7 has its CatchHandler @ 026168ac */
  uStack_48 = *(undefined8 *)(lVar4 + 0x900);
  uStack_50 = *(undefined8 *)(lVar4 + 0x8f8);
  uStack_38 = *(undefined8 *)(lVar4 + 0x910);
  uStack_40 = *(undefined8 *)(lVar4 + 0x908);
  uVar3 = DailyChallenge__GetMonthValue_2515f40(&uStack_50);
                    /* try { // try from 02615edc to 02715ee7 has its CatchHandler @ 026168a8 */
  if (param_2 != 0) {
    plVar6 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
                    /* try { // try from 02615efc to 02715eff has its CatchHandler @ 0261687c */
                    /* try { // try from 02615f04 to 02715f0f has its CatchHandler @ 026168a4 */
    uVar1 = *(undefined4 *)(plVar6[1] + 0xfc);
    uVar5 = thunk_FUN_0224e54c(param_2,*(undefined8 *)(*plVar6 + 0x80));
    func_0x04608620(&iStack_24,uVar5,uVar1);
                    /* try { // try from 02615f20 to 02715faf has its CatchHandler @ 02616960 */
    return uVar3 >> (ulong)(iStack_24 - 1U & 0x1f) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

