/* IL2CPP: VideoRewardsSubMonitor.<>c__DisplayClass15_0$$<OnWatchClicked>b__0
void VideoRewardsSubMonitor___c__DisplayClass15_0___OnWatchClicked_b__0 (VideoRewardsSubMonitor___c__DisplayClass15_0_o* __this, bool watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsSubMonitor.<>c__DisplayClass15_0$$<OnWatchClicked>b__0
   void VideoRewardsSubMonitor___c__DisplayClass15_0___OnWatchClicked_b__0
   (VideoRewardsSubMonitor___c__DisplayClass15_0_o* __this, bool watched, const MethodInfo* method);
    */

void VideoRewardsSubMonitor___c__DisplayClass15_0___OnWatchClicked_b__0_248b6f0
               (long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_14 [4];
  
  auStack_14[0] = 0;
  if ((param_2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar1 == 0)) {
LAB_0258b750:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar2 = VideoRewards__Claim_252a030(lVar1,*(undefined4 *)(param_1 + 0x18),0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0258b750;
      auStack_14[0] =
           VideoRewardsSubMonitor__PlayReward_248b5c0
                     (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_14,0);
    }
  }
  return;
}

