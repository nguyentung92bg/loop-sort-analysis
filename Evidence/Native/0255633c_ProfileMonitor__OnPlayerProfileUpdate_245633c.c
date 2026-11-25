/* IL2CPP: ProfileMonitor$$OnPlayerProfileUpdate
void ProfileMonitor__OnPlayerProfileUpdate (ProfileMonitor_o* __this, PlayerProfileUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileMonitor$$OnPlayerProfileUpdate
   void ProfileMonitor__OnPlayerProfileUpdate (ProfileMonitor_o* __this,
   PlayerProfileUpdateMessage_o m, const MethodInfo* method); */

void ProfileMonitor__OnPlayerProfileUpdate_245633c(long param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
    uStack_28 = param_2[1];
    uStack_30 = *param_2;
    uStack_20 = param_2[2];
    ProfileMonitor__ShowProfile_2456134(param_1,&uStack_30,1,*(undefined8 *)(param_1 + 0xb8));
  }
  return;
}

