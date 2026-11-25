/* IL2CPP: HomeMonitor$$OnPlayerProfileUpdate
void HomeMonitor__OnPlayerProfileUpdate (HomeMonitor_o* __this, PlayerProfileUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$OnPlayerProfileUpdate
   void HomeMonitor__OnPlayerProfileUpdate (HomeMonitor_o* __this, PlayerProfileUpdateMessage_o m,
   const MethodInfo* method); */

void HomeMonitor__OnPlayerProfileUpdate_24460a8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  uStack_20 = param_2[2];
  HomeMonitor__UpdatePlayerProfileView_2444d3c(param_1,&uStack_30);
  return;
}

