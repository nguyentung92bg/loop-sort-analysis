/* IL2CPP: WeeklyMissions$$Join
void WeeklyMissions__Join (WeeklyMissions_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$Join
   void WeeklyMissions__Join (WeeklyMissions_o* __this, const MethodInfo* method); */

void WeeklyMissions__Join_252c024(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bece & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4bece = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_50 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
  uVar3 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar2 = PTR_DAT_049b5f98;
    auStack_40 = TimeProvider__get_Now_24f4584(0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    uVar3 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                      (*(long *)(lVar4 + 0xb8) + 0x458,*(undefined8 *)puVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar1;
      }
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (*(long *)(lVar4 + 0xb8) + 0x458,auStack_100,*(undefined8 *)PTR_DAT_049b5fa8);
      uStack_a8 = auStack_100._8_8_;
      uStack_b0 = auStack_100._0_8_;
      if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar5 = System_DateTimeOffset__get_Date_30e0fe4(&uStack_b0,0);
      uVar6 = System_DateTimeOffset__get_Date_30e0fe4(auStack_40,0);
      if (*(int *)(*(long *)PTR_DAT_049b5fb0 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b5fb0);
      }
      uVar3 = System_DateTime__op_GreaterThanOrEqual_30df918(uVar5,uVar6,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar4 + 0xb8) + 0x488,auStack_100,*(undefined8 *)PTR_DAT_049c9bb0);
    uStack_78 = auStack_100._8_8_;
    uStack_80 = auStack_100._0_8_;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_50 = uStack_d0;
    uStack_98 = uStack_c0;
    uStack_a0 = uStack_c8;
    uStack_90 = uStack_b8;
    auStack_100 = auStack_40;
    CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
              (*(long *)(*(long *)puVar1 + 0xb8) + 0x458,auStack_100,*(undefined8 *)PTR_DAT_049b5fa0
              );
    uStack_148 = uStack_78;
    uStack_150 = uStack_80;
    uStack_138 = uStack_68;
    uStack_140 = uStack_70;
    uStack_120 = uStack_50;
    uStack_128 = uStack_58;
    uStack_130 = uStack_60;
    uStack_110 = uStack_98;
    uStack_118 = uStack_a0;
    uStack_108 = uStack_90;
    iStack_11c = iStack_cc + 1;
    WeeklyMissions__SaveProgress_252ae2c(param_1,&uStack_150);
  }
  return;
}

