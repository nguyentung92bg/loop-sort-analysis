/* IL2CPP: WeeklyMissions$$OnBoosterCompleted
void WeeklyMissions__OnBoosterCompleted (WeeklyMissions_o* __this, BoosterCompletedMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnBoosterCompleted
   void WeeklyMissions__OnBoosterCompleted (WeeklyMissions_o* __this, BoosterCompletedMessage_o m,
   const MethodInfo* method); */

void WeeklyMissions__OnBoosterCompleted_252b324(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_120;
  undefined4 uStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
                    /* try { // try from 0262b328 to 0272b333 has its CatchHandler @ 0262b088 */
                    /* catch() { ... } // from try @ 0262b320 with catch @ 0262b330 */
                    /* try { // try from 0262b334 to 0272b497 has its CatchHandler @ 0262b334
                       catch() { ... } // from try @ 0262b334 with catch @ 0262b334
                       catch() { ... } // from try @ 0262b50c with catch @ 0262b334
                       catch() { ... } // from try @ 0262b660 with catch @ 0262b334
                       catch() { ... } // from try @ 0262b7b4 with catch @ 0262b334
                       catch() { ... } // from try @ 0262b964 with catch @ 0262b334
                       catch() { ... } // from try @ 0262b9ac with catch @ 0262b334
                       catch() { ... } // from try @ 0262b9dc with catch @ 0262b334
                       catch() { ... } // from try @ 0262ba6c with catch @ 0262b334
                       catch() { ... } // from try @ 0262ba9c with catch @ 0262b334
                       catch() { ... } // from try @ 0262bb3c with catch @ 0262b334 */
  if ((bRam0000000004f4bec9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bec9 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar3 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar2 = PTR_DAT_049c9bb0;
  puVar1 = PTR_DAT_049b5310;
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar4 + 0xb8) + 0x488,&uStack_d0,*(undefined8 *)puVar2);
    uStack_40 = uStack_d0;
    uStack_78 = uStack_ac;
    uStack_80 = uStack_b4;
    uStack_68 = uStack_9c;
    uStack_70 = uStack_a4;
    uStack_38 = uStack_c8;
    uStack_58 = uStack_8c;
    uStack_60 = uStack_94;
    uStack_50 = uStack_84;
    if (param_2 < 5) {
      if (param_2 == 2) {
        iStack_c0 = iStack_c0 + 1;
      }
      else if (param_2 == 4) {
        iStack_c4 = iStack_c4 + 1;
      }
    }
    else if (param_2 == 5) {
      iStack_bc = iStack_bc + 1;
    }
    else if (param_2 == 6) {
      iStack_b8 = iStack_b8 + 1;
    }
    uStack_fc = uStack_ac;
    uStack_104 = uStack_b4;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_ec = uStack_9c;
    uStack_f4 = uStack_a4;
    uStack_dc = uStack_8c;
    uStack_e4 = uStack_94;
    uStack_d4 = uStack_84;
    iStack_114 = iStack_c4;
    iStack_110 = iStack_c0;
    iStack_10c = iStack_bc;
    iStack_108 = iStack_b8;
    WeeklyMissions__SaveProgress_252ae2c(param_1,&uStack_120);
  }
  return;
}

