/* IL2CPP: RankingMonitor$$IsLocalPlayerAbove
bool RankingMonitor__IsLocalPlayerAbove (RankingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$IsLocalPlayerAbove
   bool RankingMonitor__IsLocalPlayerAbove (RankingMonitor_o* __this, const MethodInfo* method); */

bool RankingMonitor__IsLocalPlayerAbove_2458084(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    iVar2 = LeaderboardEntry__get_Idx_2545aa0(*(long *)(param_1 + 0xf8) + 0x20,0);
    if (iVar2 < 0) {
      bVar1 = false;
    }
    else {
      bVar1 = iVar2 < *(int *)(param_1 + 0x110);
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

