/* IL2CPP: RankingMonitor$$FetchLeaderboard
void RankingMonitor__FetchLeaderboard (RankingMonitor_o* __this, int32_t idx, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$FetchLeaderboard
   void RankingMonitor__FetchLeaderboard (RankingMonitor_o* __this, int32_t idx,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void RankingMonitor__FetchLeaderboard_24574f0(long param_1,int param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0xa8) != 0) {
    Leaderboard__FetchLeaderboard_251d7d0
              (*(long *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x158),0x28,
               (param_2 / 0x28) * 0x28,param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

