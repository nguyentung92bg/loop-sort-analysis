/* IL2CPP: LavaQuestSubMonitor$$SetGameState
void LavaQuestSubMonitor__SetGameState (LavaQuestSubMonitor_o* __this, LavaQuestGame_o game, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$SetGameState
   void LavaQuestSubMonitor__SetGameState (LavaQuestSubMonitor_o* __this, LavaQuestGame_o game,
   const MethodInfo* method); */

void LavaQuestSubMonitor__SetGameState_2479450(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  UnityEngine_Random__InitState_3c11b1c(*(undefined4 *)(param_2 + 1),0);
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x8ac5d054,0);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  LavaQuestSubMonitor__CreatePlayers_2479680(param_1,&uStack_40);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_50 = param_2[2];
  LavaQuestSubMonitor__UpdateGameStateView_2479a50(param_1,&uStack_60);
  return;
}

