/* IL2CPP: RankingMonitor$$OnPlayerProfileUpdate
void RankingMonitor__OnPlayerProfileUpdate (RankingMonitor_o* __this, PlayerProfileUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$OnPlayerProfileUpdate
   void RankingMonitor__OnPlayerProfileUpdate (RankingMonitor_o* __this,
   PlayerProfileUpdateMessage_o m, const MethodInfo* method); */

void RankingMonitor__OnPlayerProfileUpdate_24586e0(long param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  uStack_20 = param_2[2];
  RankingMonitor__CreatePlayerProfileElement_2457958
            (param_1,*(undefined8 *)(param_1 + 0x100),&uStack_30,0);
  return;
}

