/* IL2CPP: WeeklyMissions$$OnRewardedVideoPostShow
void WeeklyMissions__OnRewardedVideoPostShow (WeeklyMissions_o* __this, RewardedVideoPostShowMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnRewardedVideoPostShow
   void WeeklyMissions__OnRewardedVideoPostShow (WeeklyMissions_o* __this,
   RewardedVideoPostShowMessage_o m, const MethodInfo* method); */

void WeeklyMissions__OnRewardedVideoPostShow_252bc04
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f4becf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c6010);
    bRam0000000004f4becf = 1;
  }
  uStack_50 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar3 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar1 = PTR_DAT_049b5310;
  if (((uVar3 & 1) != 0) && ((param_3 & 1) != 0)) {
    lVar4 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar4 + 0xb8) + 0x488,&uStack_e0,*(undefined8 *)PTR_DAT_049c9bb0);
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    uStack_68 = uStack_c8;
    uStack_70 = uStack_d0;
    uStack_58 = uStack_b8;
    uStack_60 = uStack_c0;
    uStack_50 = uStack_b0;
    uStack_88 = uStack_98;
    uStack_90 = uStack_a0;
    uVar2 = System_String__op_Equality_2f7b7fc(param_2,*(undefined8 *)PTR_DAT_049c6010,0);
    uStack_108 = uStack_58;
    uStack_110 = uStack_60;
    uStack_128 = uStack_78;
    uStack_130 = uStack_80;
    uStack_118 = uStack_68;
    uStack_120 = uStack_70;
    uStack_100 = uStack_50;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_f8 = CONCAT44((int)((ulong)uStack_a8 >> 0x20) + 1,(int)uStack_a8 + (uVar2 & 1));
    WeeklyMissions__SaveProgress_252ae2c(param_1,&uStack_130);
  }
  return;
}

