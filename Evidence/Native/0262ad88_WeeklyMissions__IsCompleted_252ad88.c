/* IL2CPP: WeeklyMissions$$IsCompleted
bool WeeklyMissions__IsCompleted (WeeklyMissions_o* __this, WeeklyMissionSheet_MissionArgs_o mission, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$IsCompleted
   bool WeeklyMissions__IsCompleted (WeeklyMissions_o* __this, WeeklyMissionSheet_MissionArgs_o
   mission, const MethodInfo* method); */

bool WeeklyMissions__IsCompleted_252ad88(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [44];
  int iStack_44;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bec4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bec4 = 1;
  }
  puVar2 = PTR_DAT_049c9bb0;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  uVar5 = CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                    (*(long *)(lVar4 + 0xb8) + 0x488,auStack_70,*(undefined8 *)puVar2);
  iVar3 = WeeklyMissions__GetQuantityOf_252ac34(uVar5,param_2 & 0xffffffff);
  if ((int)param_2 != 9) {
    iStack_44 = iVar3;
  }
  return (int)(param_2 >> 0x20) <= iStack_44;
}

