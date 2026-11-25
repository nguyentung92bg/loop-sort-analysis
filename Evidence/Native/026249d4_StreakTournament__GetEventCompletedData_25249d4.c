/* IL2CPP: StreakTournament$$GetEventCompletedData
LiveOpsEventCompletedArgs_o StreakTournament__GetEventCompletedData (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$GetEventCompletedData
   LiveOpsEventCompletedArgs_o StreakTournament__GetEventCompletedData (StreakTournament_o* __this,
   const MethodInfo* method); */

void StreakTournament__GetEventCompletedData_25249d4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 auStack_98 [6];
  undefined4 uStack_64;
  undefined4 uStack_4c;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_049b3c20;
  if ((bRam0000000004f4be91 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c20);
    bRam0000000004f4be91 = 1;
  }
  uVar4 = StreakTournament__GetLeaderboard_2524aac();
  StreakTournament__get_Save_2524120(auStack_98);
  uStack_a0 = 0;
  auStack_98[0] = CONCAT44(auStack_98[0]._4_4_,uStack_4c);
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_a0,auStack_98,*(undefined8 *)puVar1);
  uVar2 = uStack_a0;
  StreakTournament__get_Save_2524120(auStack_98);
  auStack_98[0] = 0;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,uStack_64);
  uVar5 = System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                    (auStack_98,&uStack_a8,*(undefined8 *)puVar1);
  uVar3 = auStack_98[0];
  uStack_34 = StreakTournament__GetMainPlayerRank_2524c58(uVar5,uVar4);
  uStack_a8 = 0;
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_a8,&uStack_34,*(undefined8 *)puVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uStack_a8;
  return;
}

