/* IL2CPP: StreakTower$$GetEventCompletedData
LiveOpsEventCompletedArgs_o StreakTower__GetEventCompletedData (StreakTower_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$GetEventCompletedData
   LiveOpsEventCompletedArgs_o StreakTower__GetEventCompletedData (StreakTower_o* __this, const
   MethodInfo* method); */

void StreakTower__GetEventCompletedData_252813c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 extraout_w1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b3c20;
  if ((bRam0000000004f4beaf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c20);
    bRam0000000004f4beaf = 1;
  }
  uVar3 = StreakTower__GetMilestoneLevel_25280b8(param_2);
  uStack_40 = CONCAT44(uStack_40._4_4_,uVar3);
  uStack_38 = 0;
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_38,&uStack_40,*(undefined8 *)puVar1);
  uVar2 = uStack_38;
  StreakTower__get_Save_2527c1c();
  uStack_40 = 0;
  uStack_24 = extraout_w1;
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_40,&uStack_24,*(undefined8 *)puVar1);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = uVar2;
  param_1[1] = uStack_40;
  return;
}

